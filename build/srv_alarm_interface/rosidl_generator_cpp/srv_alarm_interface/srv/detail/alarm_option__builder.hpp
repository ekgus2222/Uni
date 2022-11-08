// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from srv_alarm_interface:srv/AlarmOption.idl
// generated code does not contain a copyright notice

#ifndef SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM_OPTION__BUILDER_HPP_
#define SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM_OPTION__BUILDER_HPP_

#include "srv_alarm_interface/srv/detail/alarm_option__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace srv_alarm_interface
{

namespace srv
{

namespace builder
{

class Init_AlarmOption_Request_transport_time_request
{
public:
  explicit Init_AlarmOption_Request_transport_time_request(::srv_alarm_interface::srv::AlarmOption_Request & msg)
  : msg_(msg)
  {}
  ::srv_alarm_interface::srv::AlarmOption_Request transport_time_request(::srv_alarm_interface::srv::AlarmOption_Request::_transport_time_request_type arg)
  {
    msg_.transport_time_request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_alarm_interface::srv::AlarmOption_Request msg_;
};

class Init_AlarmOption_Request_alarm_time_request
{
public:
  Init_AlarmOption_Request_alarm_time_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlarmOption_Request_transport_time_request alarm_time_request(::srv_alarm_interface::srv::AlarmOption_Request::_alarm_time_request_type arg)
  {
    msg_.alarm_time_request = std::move(arg);
    return Init_AlarmOption_Request_transport_time_request(msg_);
  }

private:
  ::srv_alarm_interface::srv::AlarmOption_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_alarm_interface::srv::AlarmOption_Request>()
{
  return srv_alarm_interface::srv::builder::Init_AlarmOption_Request_alarm_time_request();
}

}  // namespace srv_alarm_interface


namespace srv_alarm_interface
{

namespace srv
{

namespace builder
{

class Init_AlarmOption_Response_transport_time_response
{
public:
  explicit Init_AlarmOption_Response_transport_time_response(::srv_alarm_interface::srv::AlarmOption_Response & msg)
  : msg_(msg)
  {}
  ::srv_alarm_interface::srv::AlarmOption_Response transport_time_response(::srv_alarm_interface::srv::AlarmOption_Response::_transport_time_response_type arg)
  {
    msg_.transport_time_response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::srv_alarm_interface::srv::AlarmOption_Response msg_;
};

class Init_AlarmOption_Response_alarm_time_response
{
public:
  Init_AlarmOption_Response_alarm_time_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlarmOption_Response_transport_time_response alarm_time_response(::srv_alarm_interface::srv::AlarmOption_Response::_alarm_time_response_type arg)
  {
    msg_.alarm_time_response = std::move(arg);
    return Init_AlarmOption_Response_transport_time_response(msg_);
  }

private:
  ::srv_alarm_interface::srv::AlarmOption_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::srv_alarm_interface::srv::AlarmOption_Response>()
{
  return srv_alarm_interface::srv::builder::Init_AlarmOption_Response_alarm_time_response();
}

}  // namespace srv_alarm_interface

#endif  // SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM_OPTION__BUILDER_HPP_
