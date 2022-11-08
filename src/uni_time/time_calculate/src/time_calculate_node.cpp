#include "time_calculate/time_calculate_node.hpp"
#include "shm_mutex.h"

#include <unistd.h>
#include <time.h>
#include <string>

static shm_struct_t *shm;
bool handling_SIGALRM_flag;

TimeCalculateNode::TimeCalculateNode()
    : rclcpp::Node("time_calculate_node")
{
  this->time_srv_client_ = this->create_client<time_msgs::srv::Time>("get_time");
  this->time_msg_publisher_ = this->create_publisher<time_msgs::msg::Time>("set_alarm", 10);
  // this->timer_ = this->create_wall_timer(
  //   5s,
  //   std::bind(&TimeCalculateNode::timer_callback, this));
  signal(SIGALRM, sig_alm);
  signal(SIGINT, sig_int);
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
  RCLCPP_INFO(this->get_logger(), "start");
  time_t start, end;
  time(&start);

  //shared_memory
  int ret;
  ret = __init_shared_memory_slave(SHM_NAME, shm);

  // set wake alarm
  //  alarm time request set
  //wait_alarm("21:37");      /*Uncomment at the end of the test*/
  //set_alarminfo();          /*Uncomment at the end of the test*/    //get shared memory data
  auto request = std::make_shared<time_msgs::srv::Time::Request>();
  std::shared_future<std::shared_ptr<time_msgs::srv::Time::Response>> result;

////delete
  mode_ = false;
  time_to_work_ = "13:35";
  home_address_ = "미아동 49-163";
  office_address_ = "광운로 1길 60";
  required_time_ = "15";
  required_time_cnt_ = 1;
/////

  if (!mode_) // recommended mode
  {
    // request alarm calculate
    request->mode = mode_;
    request->time_to_work = time_to_work_;
    request->home_address = home_address_;
    request->office_address = office_address_;
    request->required_time = required_time_;
    request->required_time_cnt = required_time_cnt_;
    request->request = "alarm_set";
    RCLCPP_INFO(this->get_logger(), "Wait for service...");
    // connect
    while (!this->time_srv_client_->wait_for_service(1s))
    {
      if (!rclcpp::ok())
      {
        RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
        exit(0);
      }
      RCLCPP_INFO(this->get_logger(), "service not available, waiting again...");
    }

    // send alarm_time cal request & receive alarm_time cal response
    result = this->time_srv_client_->async_send_request(request);
    RCLCPP_INFO(this->get_logger(), "Send request!");
    // Wait for the result.
    if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result) ==
        rclcpp::FutureReturnCode::SUCCESS)
    {
      // set alarm time
      alarm_time_ = result.get()->alarm_time_response;
      pthread_mutex_lock(&shm->mtx);    /*Uncomment at the end of the test*/
      strcpy(shm->alarm_time, alarm_time_.c_str());    /*Uncomment at the end of the test*/
      pthread_mutex_unlock(&shm->mtx);  /*Uncomment at the end of the test*/

      RCLCPP_INFO(this->get_logger(), "calculated wake time : %s", alarm_time_.c_str());
    }
    else
    {
      RCLCPP_INFO(this->get_logger(), "error");
      RCLCPP_ERROR(this->get_logger(), "Failed to call service");
    }
  }

  // ring the wake
  //wait_alarm(alarm_time_); // wait till alarm_time /*Uncomment at the end of the test*/

////////////////////////////////////////////////////
  /* alarm_flag(topic)set 1*/
      // robot ring the wake alarm
      // if the robot get alarm_flag, alarm_flag(topic) set 0
  time_msgs::msg::Time time_msg;
  time_msg.is_first_alarm = true;
  RCLCPP_INFO(this->get_logger(), "Publish a topic: First alarm!");
  time_msg_publisher_->publish(time_msg);
  time_msg.is_first_alarm = false;
////////////////////////////////////////////////////

  handling_SIGALRM_flag = true;
  // set transport alarm
  if (!mode_)
  {
    while (compare_time()) // now < alarm_time + required_time => true
    {
      // wait time & transport info
      if (handling_SIGALRM_flag)
      {
        // cal alarm_time + required_time - 10 minutes
        string temp = cal_time('+', alarm_time_, required_time_);
        temp = cal_time('-', temp, "10");
        sleep(15);
        // wait_alarm(temp); /*Uncomment at the end of the test*/
        handling_SIGALRM_flag = false;
      }
      else
      {
        alarm(300); // ring the alarm every 5 minutes -> set handling_SIGALRM_flag = true;
        while (!handling_SIGALRM_flag){
          RCLCPP_INFO(this->get_logger(), "wait 5 min signal...");
        }
        handling_SIGALRM_flag = false;
      }

      request->request = "transport_req";

      // connect
      while (!this->time_srv_client_->wait_for_service(1s))
      {
        if (!rclcpp::ok())
        {
          RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
          exit(0);
        }
        RCLCPP_INFO(this->get_logger(), "service not available, waiting again...");
      }
      // send transport_info cal request & receive transport_info cal response
      result = this->time_srv_client_->async_send_request(request);
      // Wait for the result.
      if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result) ==
          rclcpp::FutureReturnCode::SUCCESS)
      {
        // set alarm time
        transport_time_ = result.get()->transport_response;
        RCLCPP_INFO(this->get_logger(), "calculated transport time : %s", transport_time_.c_str());
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
      time_msg.remained_time = transport_time_;
      RCLCPP_INFO(this->get_logger(), "Publish a topic : Remained time %s ", time_msg.remained_time.c_str());
      time_msg_publisher_->publish(time_msg);
//////////////////////////////////////////////////////////

      //time_msg.is_first_alarm = true;
    }

// required Time measurement
  /*
    pthread_mutex_lock(&shm->mtx);    /*Uncomment at the end of the test
    ishome_ = shm->ishome;            /*Uncomment at the end of the test
    pthread_mutex_unlock(&shm->mtx);  /*Uncomment at the end of the test
    while(1){
     if(!ishome_) break;
      pthread_mutex_lock(&shm->mtx);    /*Uncomment at the end of the test
      ishome_ = shm->ishome;            /*Uncomment at the end of the test
      pthread_mutex_unlock(&shm->mtx);  /*Uncomment at the end of the test
    }
  */

// Update the required time 
    // time(&end);
    // int timer = (end - start)/60;
  
    // // pthread_mutex_lock(&shm->mtx);    /*Uncomment at the end of the test*/
    
    // string temp = to_string(((stoi(shm->required_time) * shm->required_time_cnt) + timer) / (shm->required_time_cnt + 1));
    // strcpy(shm->required_time, temp.c_str());
  
    // shm->required_time_cnt++;
    
  }


}

void TimeCalculateNode::set_alarminfo()
{
  // set alarminfo
  
  // retm_if(ret != 0, ret, "__init_shared_memory");
  pthread_mutex_lock(&shm->mtx);
  bool start_flag = shm->app_connected;
  pthread_mutex_unlock(&shm->mtx);
  while(!start_flag){
    pthread_mutex_lock(&shm->mtx);
    start_flag = shm->app_connected;
    pthread_mutex_unlock(&shm->mtx);
  }
  

  pthread_mutex_lock(&shm->mtx);
  mode_ = shm->mode;
  if (mode_)
  {
    alarm_time_ = shm->alarm_time;
  }
  else
  {
    time_to_work_ = shm->time_to_work;
    home_address_ = shm->home_address;
    office_address_ = shm->office_address;
    required_time_ = shm->required_time;
    required_time_cnt_ = shm->required_time_cnt;
  }
  pthread_mutex_unlock(&shm->mtx);
  return;
}

bool TimeCalculateNode::compare_time()
{
  // now < alarm_time + required_time => true
  string out_time = cal_time('+', alarm_time_, required_time_);
  string out_hour = strtok(const_cast<char *>(out_time.c_str()), ":");
  string out_min = strtok(NULL, ":");

  time_t now;
  struct tm *ltp, *gtp;
  time(&now);
  ltp = localtime(&now);

  if(ltp->tm_hour < stoi(out_hour))
    return true;
  else if(ltp->tm_hour == stoi(out_hour)){
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

  string till_hour = strtok(const_cast<char *>(till_time.c_str()), ":");
  string till_min = strtok(NULL, ":");
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "target hour: %d, minute: %d", stoi(till_hour), stoi(till_min));
  while((ltp->tm_hour != stoi(till_hour)) || (ltp->tm_min != stoi(till_min))){
    handling_SIGALRM_flag = false;
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "waiting... current hour: %d, minute: %d", ltp->tm_hour, ltp->tm_min  );
    alarm(50); // ring the alarm every 50 sec -> set handling_SIGALRM_flag = true;
    while (!handling_SIGALRM_flag);

    time(&now);
    ltp = localtime(&now);
  }
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "done! current hour: %d, minute: %d", ltp->tm_hour, ltp->tm_min);
}

string cal_time(char op, string res, string min)
{
  string res_hour = strtok(const_cast<char *>(res.c_str()), ":");
  string res_min = strtok(NULL, ":");

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

void sig_alm(int signo)
{
  handling_SIGALRM_flag = true;
}

void sig_int(int signo)
{
  cout<<"handler!\n";
  exit(0);
}

