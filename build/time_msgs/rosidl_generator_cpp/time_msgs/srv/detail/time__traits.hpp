// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from time_msgs:srv/Time.idl
// generated code does not contain a copyright notice

#ifndef TIME_MSGS__SRV__DETAIL__TIME__TRAITS_HPP_
#define TIME_MSGS__SRV__DETAIL__TIME__TRAITS_HPP_

#include "time_msgs/srv/detail/time__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<time_msgs::srv::Time_Request>()
{
  return "time_msgs::srv::Time_Request";
}

template<>
inline const char * name<time_msgs::srv::Time_Request>()
{
  return "time_msgs/srv/Time_Request";
}

template<>
struct has_fixed_size<time_msgs::srv::Time_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<time_msgs::srv::Time_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<time_msgs::srv::Time_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<time_msgs::srv::Time_Response>()
{
  return "time_msgs::srv::Time_Response";
}

template<>
inline const char * name<time_msgs::srv::Time_Response>()
{
  return "time_msgs/srv/Time_Response";
}

template<>
struct has_fixed_size<time_msgs::srv::Time_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<time_msgs::srv::Time_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<time_msgs::srv::Time_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<time_msgs::srv::Time>()
{
  return "time_msgs::srv::Time";
}

template<>
inline const char * name<time_msgs::srv::Time>()
{
  return "time_msgs/srv/Time";
}

template<>
struct has_fixed_size<time_msgs::srv::Time>
  : std::integral_constant<
    bool,
    has_fixed_size<time_msgs::srv::Time_Request>::value &&
    has_fixed_size<time_msgs::srv::Time_Response>::value
  >
{
};

template<>
struct has_bounded_size<time_msgs::srv::Time>
  : std::integral_constant<
    bool,
    has_bounded_size<time_msgs::srv::Time_Request>::value &&
    has_bounded_size<time_msgs::srv::Time_Response>::value
  >
{
};

template<>
struct is_service<time_msgs::srv::Time>
  : std::true_type
{
};

template<>
struct is_service_request<time_msgs::srv::Time_Request>
  : std::true_type
{
};

template<>
struct is_service_response<time_msgs::srv::Time_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIME_MSGS__SRV__DETAIL__TIME__TRAITS_HPP_
