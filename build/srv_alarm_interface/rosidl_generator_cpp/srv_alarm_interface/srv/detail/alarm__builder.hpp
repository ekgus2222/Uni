// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from srv_alarm_interface:srv/Alarm.idl
// generated code does not contain a copyright notice

#ifndef SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM__BUILDER_HPP_
#define SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM__BUILDER_HPP_

#include "srv_alarm_interface/srv/detail/alarm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace srv_alarm_interface
{

namespace srv
{

namespace builder
{

class Init_Alarm_Request_alarm_request
{
public:
  Init_Alarm_Request_alarm_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::srv_alarm_interface::srv::Alarm_Request alarm_request(::srv_alarm_interface::srv::Alarm_Request::_alarm_request_type arg)
  {
    msg_.alarm_request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_alarm_interface::srv::Alarm_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_alarm_interface::srv::Alarm_Request>()
{
  return srv_alarm_interface::srv::builder::Init_Alarm_Request_alarm_request();
}

}  // namespace srv_alarm_interface


namespace srv_alarm_interface
{

namespace srv
{

namespace builder
{

class Init_Alarm_Response_alarm_response
{
public:
  Init_Alarm_Response_alarm_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::srv_alarm_interface::srv::Alarm_Response alarm_response(::srv_alarm_interface::srv::Alarm_Response::_alarm_response_type arg)
  {
    msg_.alarm_response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_alarm_interface::srv::Alarm_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_alarm_interface::srv::Alarm_Response>()
{
  return srv_alarm_interface::srv::builder::Init_Alarm_Response_alarm_response();
}

}  // namespace srv_alarm_interface

#endif  // SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM__BUILDER_HPP_
