#include "alarm/alarmserver.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rcutils/cmdline_parser.h"

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
    //RCLCPP_INFO(this->get_logger(), "%d  %s",  option_, out_time_.c_str());
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
    std::string str_out;
    switch (option_)
    {
    case 0:  // No alarm
        str_out = "0";
        break;
    case 1:  
        if (alarm_request_ == 1) // alarm_time_request
        {
            str_out = "1 1";
        }
        else                     // transportation_request
        {
            str_out = "1 2";    
        }
        break;
    case 2:
        str_out = "2";
        break;
    }
    return str_out;
}

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