// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from time_msgs:msg/Time.idl
// generated code does not contain a copyright notice
#include "time_msgs/msg/detail/time__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "time_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "time_msgs/msg/detail/time__struct.h"
#include "time_msgs/msg/detail/time__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // remained_time
#include "rosidl_runtime_c/string_functions.h"  // remained_time

// forward declare type support functions


using _Time__ros_msg_type = time_msgs__msg__Time;

static bool _Time__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Time__ros_msg_type * ros_message = static_cast<const _Time__ros_msg_type *>(untyped_ros_message);
  // Field name: is_first_alarm
  {
    cdr << (ros_message->is_first_alarm ? true : false);
  }

  // Field name: remained_time
  {
    const rosidl_runtime_c__String * str = &ros_message->remained_time;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Time__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Time__ros_msg_type * ros_message = static_cast<_Time__ros_msg_type *>(untyped_ros_message);
  // Field name: is_first_alarm
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_first_alarm = tmp ? true : false;
  }

  // Field name: remained_time
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->remained_time.data) {
      rosidl_runtime_c__String__init(&ros_message->remained_time);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->remained_time,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'remained_time'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_time_msgs
size_t get_serialized_size_time_msgs__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Time__ros_msg_type * ros_message = static_cast<const _Time__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name is_first_alarm
  {
    size_t item_size = sizeof(ros_message->is_first_alarm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remained_time
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->remained_time.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Time__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_time_msgs__msg__Time(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_time_msgs
size_t max_serialized_size_time_msgs__msg__Time(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: is_first_alarm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: remained_time
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

static size_t _Time__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_time_msgs__msg__Time(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Time = {
  "time_msgs::msg",
  "Time",
  _Time__cdr_serialize,
  _Time__cdr_deserialize,
  _Time__get_serialized_size,
  _Time__max_serialized_size
};

static rosidl_message_type_support_t _Time__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Time,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, time_msgs, msg, Time)() {
  return &_Time__type_support;
}

#if defined(__cplusplus)
}
#endif
