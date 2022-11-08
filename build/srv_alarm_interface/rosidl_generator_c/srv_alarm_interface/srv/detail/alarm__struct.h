// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from srv_alarm_interface:srv/Alarm.idl
// generated code does not contain a copyright notice

#ifndef SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM__STRUCT_H_
#define SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ALARM_TIME'.
enum
{
  srv_alarm_interface__srv__Alarm_Request__ALARM_TIME = 1
};

/// Constant 'TRANSPORT_TIME'.
enum
{
  srv_alarm_interface__srv__Alarm_Request__TRANSPORT_TIME = 2
};

// Struct defined in srv/Alarm in the package srv_alarm_interface.
typedef struct srv_alarm_interface__srv__Alarm_Request
{
  int8_t alarm_request;
} srv_alarm_interface__srv__Alarm_Request;

// Struct for a sequence of srv_alarm_interface__srv__Alarm_Request.
typedef struct srv_alarm_interface__srv__Alarm_Request__Sequence
{
  srv_alarm_interface__srv__Alarm_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_alarm_interface__srv__Alarm_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'alarm_response'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Alarm in the package srv_alarm_interface.
typedef struct srv_alarm_interface__srv__Alarm_Response
{
  rosidl_runtime_c__String alarm_response;
} srv_alarm_interface__srv__Alarm_Response;

// Struct for a sequence of srv_alarm_interface__srv__Alarm_Response.
typedef struct srv_alarm_interface__srv__Alarm_Response__Sequence
{
  srv_alarm_interface__srv__Alarm_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_alarm_interface__srv__Alarm_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM__STRUCT_H_
