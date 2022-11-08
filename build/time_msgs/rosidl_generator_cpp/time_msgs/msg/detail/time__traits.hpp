// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from time_msgs:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef TIME_MSGS__MSG__DETAIL__TIME__TRAITS_HPP_
#define TIME_MSGS__MSG__DETAIL__TIME__TRAITS_HPP_

#include "time_msgs/msg/detail/time__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<time_msgs::msg::Time>()
{
  return "time_msgs::msg::Time";
}

template<>
inline const char * name<time_msgs::msg::Time>()
{
  return "time_msgs/msg/Time";
}

template<>
struct has_fixed_size<time_msgs::msg::Time>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<time_msgs::msg::Time>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<time_msgs::msg::Time>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIME_MSGS__MSG__DETAIL__TIME__TRAITS_HPP_
