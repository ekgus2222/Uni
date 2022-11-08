#include "time_calculate/time_calculate_node.hpp"
#include "/include/shm_mutex.h"

#include <unistd.h>
#include <time.h>

static shm_struct_t *shm;
bool handling_SIGALRM_flag;

TimeCalculateNode::TimeCalculateNode()
    : rclcpp::Node("time_calculate_node")
{
  this->client_ = this->create_client<time_msgs::srv::Time>("get_time");
  // this->timer_ = this->create_wall_timer(
  //   5s,
  //   std::bind(&TimeCalculateNode::timer_callback, this));
  send_request();
}

TimeCalculateNode::~TimeCalculateNode()
{
}

void TimeCalculateNode::timer_callback()
{
}

void TimeCalculateNode::send_request()
{
  // set wake alarm
  //  alarm time request set
  wait_alarm("05:00");
  set_alarminfo();

  if (!mode) // recommended mode
  {
    // request alarm calculate
    auto request = std::make_shared<time_msgs::srv::Time::Request>();
    request->mode = mode;
    request->timeTOwork = timeTOwork;
    request->home_address = home_address;
    request->office_address = office_address;
    request->required_time = required_time;
    request->required_time_cnt = required_time_cnt;
    request->request = "alarm_set";

    // connect
    while (!this->client_->wait_for_service(1s))
    {
      if (!rclcpp::ok())
      {
        RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
        exit(0);
      }
      RCLCPP_INFO(this->get_logger(), "service not available, waiting again...");
    }

    // send alarm_time cal request & receive alarm_time cal response
    auto result = this->client_->async_send_request(request);
    // Wait for the result.
    if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result) ==
        rclcpp::FutureReturnCode::SUCCESS)
    {
      // set alarm time
      alarm_time = result.get()->alarm_time_response;
      pthread_mutex_lock(&shm->mtx);
      shm->alarm_time = alarm_time;
      pthread_mutex_unlock(&shm->mtx);

      RCLCPP_INFO(this->get_logger(), "calculated wake time : %s", alarm_time);
    }
    else
    {
      RCLCPP_ERROR(this->get_logger(), "Failed to call service");
    }
  }

  // ring the wake alarm
  wait_alarm(alarm_time); // wait till alarm_time

////////////////////////////////////////////////////
  /* alarm_flag(topic)set 1*/
      // robot ring the wake alarm
      // if the robot get alarm_flag, alarm_flag(topic) set 0
////////////////////////////////////////////////////

  // set transport alarm
  signal(SIGALRM, sig_int);
  bool first_flag = false;

  if (!mode)
  {
    while (compare_time()) // now < alarm_time + required_time => true
    {
      // wait time & transport info
      if (!first_flag)
      {
        // cal alarm_time + required_time - 10 minutes
        string temp = cal_time('+', alarm_time, required_time);
        temp = cal_time('-', temp, "10");
        wait_alarm(temp);
      }
      else
      {
        handling_SIGALRM_flag = false;
        alarm(300); // ring the alarm every 5 minutes -> set handling_SIGALRM_flag = true;
        while (!handling_SIGALRM_flag);
      }

      request->request = "transport_req";

      // connect
      while (!this->client_->wait_for_service(1s))
      {
        if (!rclcpp::ok())
        {
          RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
          exit(0);
        }
        RCLCPP_INFO(this->get_logger(), "service not available, waiting again...");
      }
      // send transport_info cal request & receive transport_info cal response
      result = this->client_->async_send_request(request);
      // Wait for the result.
      if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result) ==
          rclcpp::FutureReturnCode::SUCCESS)
      {
        // set alarm time
        transport_time = result.get()->transport_response;
        RCLCPP_INFO(this->get_logger(), "calculated transport time : %s", transport_time);
      }
      else
      {
        RCLCPP_ERROR(this->get_logger(), "Failed to call service");
      }

/////////////////////////////////////////////////////////
      // ring the wake alarm
      /* alarm_flag(topic)set 1*/
          // robot delivers transport_time
          // if the robot get alarm_flag, alarm_flag(topic) set 0
//////////////////////////////////////////////////////////
    }
  }
}

void TimeCalculateNode::set_alarminfo()
{
  // set alarminfo
  int ret;

  ret = __init_shared_memory_slave(SHM_NAME, shm);
  retm_if(ret != 0, ret, "__init_shared_memory");

  pthread_mutex_lock(&shm->mtx);
  mode = shm->mode;
  if (mode)
  {
    alarm_time = shm->alarm_time;
  }
  else
  {
    timeTOwork = shm->timeTOwork;
    home_address = shm->home_address;
    office_address = shm->office_address;
    required_time = shm->required_time;
    required_time_cnt = shm->required_time_cnt;
  }
  pthread_mutex_unlock(&shm->mtx);
}

bool TimeCalculateNode::compare_time()
{
  // now < alarm_time + required_time => true
  string out_time = cal_time('+', alarm_time, required_time);
  string out_hour = strtok(out_time.c_str(), ':');
  string out_min = strtok(NULL, ':');

  time_t now;
  struct tm *ltp, *gtp;
  time(&now);
  ltp = localtime(&now);

  if(ltp->tm_hour < stoi(out_hour))
    return true;
  else if(ltp->tm_hour == stoi(our_hour)){
    if(ltp->tm_min < stoi(out_min)) return true;
    else return false;
  }else return false;
}



void wait_alarm(string till_time) // till_time = "00:00"
{
  time_t now;
  struct tm *ltp, *gtp;
  time(&now);
  ltp = localtime(&now);

  string till_hour = strtok(till_time.c_str(), ':');
  string till_min = strtok(NULL, ':');

  while(ltp->tm_hour != stoi(till_hour) || ltp->tm_hour != stoi(till_min)){
    handling_SIGALRM_flag = false;
    alarm(50); // ring the alarm every 50 sec -> set handling_SIGALRM_flag = true;
    while (!handling_SIGALRM_flag);

    time(&now);
    ltp = localtime(&now);
  }
}

string cal_time(char op, string res, string min)
{
  string res_hour = strtok(res.c_str(), ':');
  string res_min = strtok(NULL, ':');

  int cal_min, cal_hour;
  switch(op){
    case '+':
      cal_min = stoi(res_min)+stoi(min);
      cal_hour = stoi(res_hour);

      while(cal_min>59){
        cal_min-=60;
        cal_hour += 1;}

      while(cal_hour>23){
        cal_hour -= 24;}
      break;

    case '-':
      cal_min = stoi(res_min)-stoi(min);
      cal_hour = stoi(res_hour);

      while(cal_min < 0){
        cal_min+=60;
        cal_hour-=1;}

      while(cal_hour<0){
        cal_hour+=24;}

      break;
  
  }
  

  if(cal_hour<10) res_hour = "0"+to_string(cal_hour);
  else res_hour = to_string(cal_hour);
  

  if(cal_min<10) res_min = "0"+to_string(cal_min);
  else res_min = to_string(cal_min);

  return res_hour+":"+res_min;
}

void sig_int(int signo)
{
  handling_SIGALRM_flag = true;
}

