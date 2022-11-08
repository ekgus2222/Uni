// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from srv_alarm_interface:srv/AlarmOption.idl
// generated code does not contain a copyright notice

#ifndef SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM_OPTION__TRAITS_HPP_
#define SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM_OPTION__TRAITS_HPP_

#include "srv_alarm_interface/srv/detail/alarm_option__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<srv_alarm_interface::srv::AlarmOption_Request>()
{
  return "srv_alarm_interface::srv::AlarmOption_Request";
}

template<>
inline const char * name<srv_alarm_interface::srv::AlarmOption_Request>()
{
  return "srv_alarm_interface/srv/AlarmOption_Request";
}

template<>
struct has_fixed_size<srv_alarm_interface::srv::AlarmOption_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<srv_alarm_interface::srv::AlarmOption_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<srv_alarm_interface::srv::AlarmOption_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<srv_alarm_interface::srv::AlarmOption_Response>()
{
  return "srv_alarm_interface::srv::AlarmOption_Response";
}

template<>
inline const char * name<srv_alarm_interface::srv::AlarmOption_Response>()
{
  return "srv_alarm_interface/srv/AlarmOption_Response";
}

template<>
struct has_fixed_size<srv_alarm_interface::srv::AlarmOption_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<srv_alarm_interface::srv::AlarmOption_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<srv_alarm_interface::srv::AlarmOption_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<srv_alarm_interface::srv::AlarmOption>()
{
  return "srv_alarm_interface::srv::AlarmOption";
}

template<>
inline const char * name<srv_alarm_interface::srv::AlarmOption>()
{
  return "srv_alarm_interface/srv/AlarmOption";
}

template<>
struct has_fixed_size<srv_alarm_interface::srv::AlarmOption>
  : std::integral_constant<
    bool,
    has_fixed_size<srv_alarm_interface::srv::AlarmOption_Request>::value &&
    has_fixed_size<srv_alarm_interface::srv::AlarmOption_Response>::value
  >
{
};

template<>
struct has_bounded_size<srv_alarm_interface::srv::AlarmOption>
  : std::integral_constant<
    bool,
    has_bounded_size<srv_alarm_interface::srv::AlarmOption_Request>::value &&
    has_bounded_size<srv_alarm_interface::srv::AlarmOption_Response>::value
  >
{
};

template<>
struct is_service<srv_alarm_interface::srv::AlarmOption>
  : std::true_type
{
};

template<>
struct is_service_request<srv_alarm_interface::srv::AlarmOption_Request>
  : std::true_type
{
};

template<>
struct is_service_response<srv_alarm_interface::srv::AlarmOption_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM_OPTION__TRAITS_HPP_
