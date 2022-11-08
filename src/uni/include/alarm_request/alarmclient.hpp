#ifndef ALARMCLIENT_HPP_
#define ALARMCLIENT_HPP_

#include "rclcpp/rclcpp.hpp"
#include "srv_alarm_interface/srv/alarm.hpp"

class Alarmclient : public rclcpp::Node
{
public:
// message type
    using Alarm = srv_alarm_interface::srv::Alarm;

// constructor
    explicit Alarmclient(const rclcpp::NodeOptions& node_options = rclcpp::NodeOptions());
    virtual ~Alarmclient();

// function
    void send_request();

private:
    rclcpp::Client<Alarm>::SharedPtr alarm_service_client_;
};


#endif