// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from time_msgs:msg/Time.idl
// generated code does not contain a copyright notice
#include "time_msgs/msg/detail/time__rosidl_typesupport_fastrtps_cpp.hpp"
#include "time_msgs/msg/detail/time__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace time_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_time_msgs
cdr_serialize(
  const time_msgs::msg::Time & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_first_alarm
  cdr << (ros_message.is_first_alarm ? true : false);
  // Member: remained_time
  cdr << ros_message.remained_time;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_time_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  time_msgs::msg::Time & ros_message)
{
  // Member: is_first_alarm
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_first_alarm = tmp ? true : false;
  }

  // Member: remained_time
  cdr >> ros_message.remained_time;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_time_msgs
get_serialized_size(
  const time_msgs::msg::Time & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_first_alarm
  {
    size_t item_size = sizeof(ros_message.is_first_alarm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: remained_time
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.remained_time.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_time_msgs
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: is_first_alarm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: remained_time
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Time__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const time_msgs::msg::Time *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Time__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<time_msgs::msg::Time *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Time__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const time_msgs::msg::Time *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Time__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Time(full_bounded, 0);
}

static message_type_support_callbacks_t _Time__callbacks = {
  "time_msgs::msg",
  "Time",
  _Time__cdr_serialize,
  _Time__cdr_deserialize,
  _Time__get_serialized_size,
  _Time__max_serialized_size
};

static rosidl_message_type_support_t _Time__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Time__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace time_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_time_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<time_msgs::msg::Time>()
{
  return &time_msgs::msg::typesupport_fastrtps_cpp::_Time__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, time_msgs, msg, Time)() {
  return &time_msgs::msg::typesupport_fastrtps_cpp::_Time__handle;
}

#ifdef __cplusplus
}
#endif
