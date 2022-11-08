#ifndef ALARMSERVER_HPP_
#define ALARMSERVER_HPP_

#include "rclcpp/rclcpp.hpp"
#include "srv_alarm_interface/srv/alarm.hpp"

#include <string>

class Alarmserver:public rclcpp::Node
{
public:
// message type
    using Alarm = srv_alarm_interface::srv::Alarm;

// constructor
    explicit Alarmserver(const rclcpp::NodeOptions &node_options = rclcpp::NodeOptions());
    virtual ~Alarmserver();

// function
    std::string calculate_alarm_time();

private:
    rclcpp::Service<Alarm>::SharedPtr
        alarm_service_server_;
    
    int8_t alarm_request_;
    std::string alarm_response_;
};

#endif