#include "alarm/alarmserver.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rcutils/cmdline_parser.h"
#include "json/jsondata.hpp"

#include <string>
#include <curl/curl.h>
#include <iostream>
#include <jsoncpp/json/json.h>
#include <vector>
#include <functional>

using namespace std::chrono_literals;

Alarmserver::Alarmserver(const rclcpp::NodeOptions &node_options)
    : Node("alarmserver", node_options)
{
  /* alarm_parameter_change */
  this->declare_parameter<int8_t>("option", 1);
  this->declare_parameter<std::string>("out_time", "09:00");

  timer_ = this->create_wall_timer(
      1000ms, std::bind(&Alarmserver::respond, this));
  this->set_on_parameters_set_callback(
      std::bind(&Alarmserver::parameter_call_back, this, std::placeholders::_1));

  /* alarm_service */
  auto get_alarm_time =
      [this](
          const std::shared_ptr<Alarm::Request> request,
          std::shared_ptr<Alarm::Response> response) -> void
  {
    alarm_request_ = request->alarm_request;
    alarm_response_ =
        this->calculate_alarm_time();
    response->alarm_response = alarm_response_;

    RCLCPP_INFO(this->get_logger(), "%s", alarm_response_.c_str());
  };

  alarm_service_server_ =
      create_service<Alarm>("alarm", get_alarm_time);
}

Alarmserver::~Alarmserver()
{
}
/****************change_main_function*************************/
void Alarmserver::respond()
{
  this->get_parameter("option", option_);
  this->get_parameter("out_time", out_time_);
  // RCLCPP_INFO(this->get_logger(), "%d  %s",  option_, out_time_.c_str());
}

rcl_interfaces::msg::SetParametersResult Alarmserver::parameter_call_back(
    const std::vector<rclcpp::Parameter> &param)
{
  rcl_interfaces::msg::SetParametersResult result;
  result.successful = true;
  result.reason = "success";
  for (const auto &parameter : param)
  {
    if (parameter.get_name() == "option" &&
        parameter.get_type() == rclcpp::ParameterType::PARAMETER_STRING)
    {
      option_ = parameter.as_int();
      RCLCPP_INFO(this->get_logger(), "Option Parameter : %d", option_);
    }

    if (parameter.get_name() == "out_time" &&
        parameter.get_type() == rclcpp::ParameterType::PARAMETER_STRING)
    {
      out_time_ = parameter.as_string();
      RCLCPP_INFO(this->get_logger(), "Out_time Parameter : %s", out_time_.c_str());
    }
  }
  return result;
}

/****************server_main_function*************************/
std::string Alarmserver::calculate_alarm_time()
{
  std::string str_out = get_data();
  return str_out;
}

/**********************json data***************************/
std::string Alarmserver::get_data()
{
  string origin = "37.5728359,126.9746922";
	string destination = "37.5129907,127.1005382";

	string url_target = "https://maps.googleapis.com/maps/api/directions/json?origin=" + origin 
						+ "&destination=" + destination 
						+ "&mode=transit&departure_time=now&key=AIzaSyCdNl9v9dyx2pB65ndrzEqZgnbGnC2z82U";

  std::string json_data;
  
  std::string out_string;     // option&data  -> but case 1, option&alarm_request&data

  size_t cut;

  int out_hour, out_min;
  int ready_time = average_time_;

  cut = out_time_.find(':');
  out_hour = stoi(out_time_.substr(0, cut));
  out_min = stoi(out_time_.substr(cut+1, out_time_.length()-1));

  switch (option_)
  {
  case 0:                     // No alarm
    out_string = "0";         
    break;
  case 1:
    json_data = url_get_proc(url_target);

    if (alarm_request_ == 1) // alarm_time_request
    {
      int duration_hour = 0, duration_min;
      std::string duration_time = get_time(json_data);

      size_t hcut = 0;
      cut = duration_time.find('h');

      if(cut!=std::string::npos) // yes hour
      {
          duration_hour = stoi(duration_time.substr(0, cut));
          hcut = cut + 6;
      }
 
      cut = duration_time.substr(hcut, duration_time.length() - 1).find('m');
      duration_min = stoi(duration_time.substr(hcut,cut));



      out_min -= (ready_time + duration_min);

      int num = 0;
      while(out_min < 0)
      {
        out_min += 60;
        num++;
      }

      out_hour -= (duration_hour + num);
       
      out_string = "1&1&"+ to_string(out_hour) + "&" + to_string(out_min); 
    }
    else // transportation_request
    {
      std::string stop_n_time = get_transport(json_data);

      out_string = "1&2&"+stop_n_time; 
    }
    break;
  case 2:
      out_min -= ready_time;

      int num = 0;
      while(out_min < 0)
      {
        out_min += 60;
        num++;
      }

      out_hour -= num;
    out_string = "2&" + to_string(out_hour) + "&" + to_string(out_min); ;
    break;
  }

  return out_string;
}
/*********************************************************/

void print_help()
{
  printf("For ROS 2 topic subscriber, service server, action server rclcpp examples:\n");
  printf("calculator [-h]\n");
  printf("Options:\n");
  printf("\t-h Help           : Print this help function.\n");
}

int main(int argc, char *argv[])
{
  if (rcutils_cli_option_exist(argv, argv + argc, "-h"))
  {
    print_help();
    return 0;
  }

  rclcpp::init(argc, argv);

  auto calculator = std::make_shared<Alarmserver>();

  rclcpp::spin(calculator);

  rclcpp::shutdown();

  return 0;
}