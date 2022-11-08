#ifndef ALARMSERVER_HPP_
#define ALARMSERVER_HPP_

#include "rclcpp/rclcpp.hpp"
#include "srv_alarm_interface/srv/alarm.hpp"

#include <string>

class Alarmserver:public rclcpp::Node
{
public:
/********alarm_service**********/
    // message type
    using Alarm = srv_alarm_interface::srv::Alarm;

    // constructor
    explicit Alarmserver(const rclcpp::NodeOptions &node_options = rclcpp::NodeOptions()
                                                            .allow_undeclared_parameters(true)
                                                            .automatically_declare_parameters_from_overrides(true));
    virtual ~Alarmserver();

    // function
    std::string calculate_alarm_time();

/******alarm_change_service******/
    void respond();
    rcl_interfaces::msg::SetParametersResult parameter_call_back(
      const std::vector<rclcpp::Parameter> &param);


private:
/********alarm_service**********/
    rclcpp::Service<Alarm>::SharedPtr
        alarm_service_server_;
    
    int8_t alarm_request_ = 1;
    std::string alarm_response_;

/******alarm_change_service******/
    int8_t option_ = 1;
    std::string out_time_ = "09:00"; 
    int8_t average_time_ = 50;
    int8_t num_ = 1;
    bool GPS_;

    rclcpp::TimerBase::SharedPtr timer_;
};

#endif