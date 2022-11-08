// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from time_msgs:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef TIME_MSGS__MSG__DETAIL__TIME__BUILDER_HPP_
#define TIME_MSGS__MSG__DETAIL__TIME__BUILDER_HPP_

#include "time_msgs/msg/detail/time__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace time_msgs
{

namespace msg
{

namespace builder
{

class Init_Time_remained_time
{
public:
  explicit Init_Time_remained_time(::time_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  ::time_msgs::msg::Time remained_time(::time_msgs::msg::Time::_remained_time_type arg)
  {
    msg_.remained_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::time_msgs::msg::Time msg_;
};

class Init_Time_is_first_alarm
{
public:
  Init_Time_is_first_alarm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Time_remained_time is_first_alarm(::time_msgs::msg::Time::_is_first_alarm_type arg)
  {
    msg_.is_first_alarm = std::move(arg);
    return Init_Time_remained_time(msg_);
  }

private:
  ::time_msgs::msg::Time msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::time_msgs::msg::Time>()
{
  return time_msgs::msg::builder::Init_Time_is_first_alarm();
}

}  // namespace time_msgs

#endif  // TIME_MSGS__MSG__DETAIL__TIME__BUILDER_HPP_
