// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from time_msgs:srv/Time.idl
// generated code does not contain a copyright notice

#ifndef TIME_MSGS__SRV__DETAIL__TIME__STRUCT_H_
#define TIME_MSGS__SRV__DETAIL__TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'time_to_work'
// Member 'home_address'
// Member 'office_address'
// Member 'required_time'
// Member 'request'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Time in the package time_msgs.
typedef struct time_msgs__srv__Time_Request
{
  int32_t mode;
  rosidl_runtime_c__String time_to_work;
  rosidl_runtime_c__String home_address;
  rosidl_runtime_c__String office_address;
  rosidl_runtime_c__String required_time;
  int32_t required_time_cnt;
  rosidl_runtime_c__String request;
} time_msgs__srv__Time_Request;

// Struct for a sequence of time_msgs__srv__Time_Request.
typedef struct time_msgs__srv__Time_Request__Sequence
{
  time_msgs__srv__Time_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} time_msgs__srv__Time_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'alarm_time_response'
// Member 'transport_response'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/Time in the package time_msgs.
typedef struct time_msgs__srv__Time_Response
{
  rosidl_runtime_c__String alarm_time_response;
  rosidl_runtime_c__String transport_response;
  int32_t test;
} time_msgs__srv__Time_Response;

// Struct for a sequence of time_msgs__srv__Time_Response.
typedef struct time_msgs__srv__Time_Response__Sequence
{
  time_msgs__srv__Time_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} time_msgs__srv__Time_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIME_MSGS__SRV__DETAIL__TIME__STRUCT_H_
