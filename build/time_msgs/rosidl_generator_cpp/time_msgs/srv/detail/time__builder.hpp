// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from time_msgs:srv/Time.idl
// generated code does not contain a copyright notice

#ifndef TIME_MSGS__SRV__DETAIL__TIME__BUILDER_HPP_
#define TIME_MSGS__SRV__DETAIL__TIME__BUILDER_HPP_

#include "time_msgs/srv/detail/time__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace time_msgs
{

namespace srv
{

namespace builder
{

class Init_Time_Request_request
{
public:
  explicit Init_Time_Request_request(::time_msgs::srv::Time_Request & msg)
  : msg_(msg)
  {}
  ::time_msgs::srv::Time_Request request(::time_msgs::srv::Time_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::time_msgs::srv::Time_Request msg_;
};

class Init_Time_Request_required_time_cnt
{
public:
  explicit Init_Time_Request_required_time_cnt(::time_msgs::srv::Time_Request & msg)
  : msg_(msg)
  {}
  Init_Time_Request_request required_time_cnt(::time_msgs::srv::Time_Request::_required_time_cnt_type arg)
  {
    msg_.required_time_cnt = std::move(arg);
    return Init_Time_Request_request(msg_);
  }

private:
  ::time_msgs::srv::Time_Request msg_;
};

class Init_Time_Request_required_time
{
public:
  explicit Init_Time_Request_required_time(::time_msgs::srv::Time_Request & msg)
  : msg_(msg)
  {}
  Init_Time_Request_required_time_cnt required_time(::time_msgs::srv::Time_Request::_required_time_type arg)
  {
    msg_.required_time = std::move(arg);
    return Init_Time_Request_required_time_cnt(msg_);
  }

private:
  ::time_msgs::srv::Time_Request msg_;
};

class Init_Time_Request_office_address
{
public:
  explicit Init_Time_Request_office_address(::time_msgs::srv::Time_Request & msg)
  : msg_(msg)
  {}
  Init_Time_Request_required_time office_address(::time_msgs::srv::Time_Request::_office_address_type arg)
  {
    msg_.office_address = std::move(arg);
    return Init_Time_Request_required_time(msg_);
  }

private:
  ::time_msgs::srv::Time_Request msg_;
};

class Init_Time_Request_home_address
{
public:
  explicit Init_Time_Request_home_address(::time_msgs::srv::Time_Request & msg)
  : msg_(msg)
  {}
  Init_Time_Request_office_address home_address(::time_msgs::srv::Time_Request::_home_address_type arg)
  {
    msg_.home_address = std::move(arg);
    return Init_Time_Request_office_address(msg_);
  }

private:
  ::time_msgs::srv::Time_Request msg_;
};

class Init_Time_Request_time_to_work
{
public:
  explicit Init_Time_Request_time_to_work(::time_msgs::srv::Time_Request & msg)
  : msg_(msg)
  {}
  Init_Time_Request_home_address time_to_work(::time_msgs::srv::Time_Request::_time_to_work_type arg)
  {
    msg_.time_to_work = std::move(arg);
    return Init_Time_Request_home_address(msg_);
  }

private:
  ::time_msgs::srv::Time_Request msg_;
};

class Init_Time_Request_mode
{
public:
  Init_Time_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Time_Request_time_to_work mode(::time_msgs::srv::Time_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_Time_Request_time_to_work(msg_);
  }

private:
  ::time_msgs::srv::Time_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::time_msgs::srv::Time_Request>()
{
  return time_msgs::srv::builder::Init_Time_Request_mode();
}

}  // namespace time_msgs


namespace time_msgs
{

namespace srv
{

namespace builder
{

class Init_Time_Response_test
{
public:
  explicit Init_Time_Response_test(::time_msgs::srv::Time_Response & msg)
  : msg_(msg)
  {}
  ::time_msgs::srv::Time_Response test(::time_msgs::srv::Time_Response::_test_type arg)
  {
    msg_.test = std::move(arg);
    return std::move(msg_);
  }

private:
  ::time_msgs::srv::Time_Response msg_;
};

class Init_Time_Response_transport_response
{
public:
  explicit Init_Time_Response_transport_response(::time_msgs::srv::Time_Response & msg)
  : msg_(msg)
  {}
  Init_Time_Response_test transport_response(::time_msgs::srv::Time_Response::_transport_response_type arg)
  {
    msg_.transport_response = std::move(arg);
    return Init_Time_Response_test(msg_);
  }

private:
  ::time_msgs::srv::Time_Response msg_;
};

class Init_Time_Response_alarm_time_response
{
public:
  Init_Time_Response_alarm_time_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Time_Response_transport_response alarm_time_response(::time_msgs::srv::Time_Response::_alarm_time_response_type arg)
  {
    msg_.alarm_time_response = std::move(arg);
    return Init_Time_Response_transport_response(msg_);
  }

private:
  ::time_msgs::srv::Time_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::time_msgs::srv::Time_Response>()
{
  return time_msgs::srv::builder::Init_Time_Response_alarm_time_response();
}

}  // namespace time_msgs

#endif  // TIME_MSGS__SRV__DETAIL__TIME__BUILDER_HPP_
