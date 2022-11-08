// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from time_msgs:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef TIME_MSGS__MSG__DETAIL__TIME__STRUCT_H_
#define TIME_MSGS__MSG__DETAIL__TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'remained_time'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Time in the package time_msgs.
typedef struct time_msgs__msg__Time
{
  bool is_first_alarm;
  rosidl_runtime_c__String remained_time;
} time_msgs__msg__Time;

// Struct for a sequence of time_msgs__msg__Time.
typedef struct time_msgs__msg__Time__Sequence
{
  time_msgs__msg__Time * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} time_msgs__msg__Time__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIME_MSGS__MSG__DETAIL__TIME__STRUCT_H_
