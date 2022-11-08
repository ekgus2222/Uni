// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from time_msgs:srv/Time.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "time_msgs/srv/detail/time__rosidl_typesupport_introspection_c.h"
#include "time_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "time_msgs/srv/detail/time__functions.h"
#include "time_msgs/srv/detail/time__struct.h"


// Include directives for member types
// Member `time_to_work`
// Member `home_address`
// Member `office_address`
// Member `required_time`
// Member `request`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Time_Request__rosidl_typesupport_introspection_c__Time_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  time_msgs__srv__Time_Request__init(message_memory);
}

void Time_Request__rosidl_typesupport_introspection_c__Time_Request_fini_function(void * message_memory)
{
  time_msgs__srv__Time_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Time_Request__rosidl_typesupport_introspection_c__Time_Request_message_member_array[7] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__srv__Time_Request, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_to_work",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__srv__Time_Request, time_to_work),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "home_address",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__srv__Time_Request, home_address),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "office_address",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__srv__Time_Request, office_address),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "required_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__srv__Time_Request, required_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "required_time_cnt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__srv__Time_Request, required_time_cnt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__srv__Time_Request, request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Time_Request__rosidl_typesupport_introspection_c__Time_Request_message_members = {
  "time_msgs__srv",  // message namespace
  "Time_Request",  // message name
  7,  // number of fields
  sizeof(time_msgs__srv__Time_Request),
  Time_Request__rosidl_typesupport_introspection_c__Time_Request_message_member_array,  // message members
  Time_Request__rosidl_typesupport_introspection_c__Time_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Time_Request__rosidl_typesupport_introspection_c__Time_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Time_Request__rosidl_typesupport_introspection_c__Time_Request_message_type_support_handle = {
  0,
  &Time_Request__rosidl_typesupport_introspection_c__Time_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_time_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, srv, Time_Request)() {
  if (!Time_Request__rosidl_typesupport_introspection_c__Time_Request_message_type_support_handle.typesupport_identifier) {
    Time_Request__rosidl_typesupport_introspection_c__Time_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Time_Request__rosidl_typesupport_introspection_c__Time_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "time_msgs/srv/detail/time__rosidl_typesupport_introspection_c.h"
// already included above
// #include "time_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "time_msgs/srv/detail/time__functions.h"
// already included above
// #include "time_msgs/srv/detail/time__struct.h"


// Include directives for member types
// Member `alarm_time_response`
// Member `transport_response`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Time_Response__rosidl_typesupport_introspection_c__Time_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  time_msgs__srv__Time_Response__init(message_memory);
}

void Time_Response__rosidl_typesupport_introspection_c__Time_Response_fini_function(void * message_memory)
{
  time_msgs__srv__Time_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Time_Response__rosidl_typesupport_introspection_c__Time_Response_message_member_array[3] = {
  {
    "alarm_time_response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__srv__Time_Response, alarm_time_response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transport_response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__srv__Time_Response, transport_response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__srv__Time_Response, test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Time_Response__rosidl_typesupport_introspection_c__Time_Response_message_members = {
  "time_msgs__srv",  // message namespace
  "Time_Response",  // message name
  3,  // number of fields
  sizeof(time_msgs__srv__Time_Response),
  Time_Response__rosidl_typesupport_introspection_c__Time_Response_message_member_array,  // message members
  Time_Response__rosidl_typesupport_introspection_c__Time_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Time_Response__rosidl_typesupport_introspection_c__Time_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Time_Response__rosidl_typesupport_introspection_c__Time_Response_message_type_support_handle = {
  0,
  &Time_Response__rosidl_typesupport_introspection_c__Time_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_time_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, srv, Time_Response)() {
  if (!Time_Response__rosidl_typesupport_introspection_c__Time_Response_message_type_support_handle.typesupport_identifier) {
    Time_Response__rosidl_typesupport_introspection_c__Time_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Time_Response__rosidl_typesupport_introspection_c__Time_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "time_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "time_msgs/srv/detail/time__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers time_msgs__srv__detail__time__rosidl_typesupport_introspection_c__Time_service_members = {
  "time_msgs__srv",  // service namespace
  "Time",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // time_msgs__srv__detail__time__rosidl_typesupport_introspection_c__Time_Request_message_type_support_handle,
  NULL  // response message
  // time_msgs__srv__detail__time__rosidl_typesupport_introspection_c__Time_Response_message_type_support_handle
};

static rosidl_service_type_support_t time_msgs__srv__detail__time__rosidl_typesupport_introspection_c__Time_service_type_support_handle = {
  0,
  &time_msgs__srv__detail__time__rosidl_typesupport_introspection_c__Time_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, srv, Time_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, srv, Time_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_time_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, srv, Time)() {
  if (!time_msgs__srv__detail__time__rosidl_typesupport_introspection_c__Time_service_type_support_handle.typesupport_identifier) {
    time_msgs__srv__detail__time__rosidl_typesupport_introspection_c__Time_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)time_msgs__srv__detail__time__rosidl_typesupport_introspection_c__Time_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, srv, Time_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, srv, Time_Response)()->data;
  }

  return &time_msgs__srv__detail__time__rosidl_typesupport_introspection_c__Time_service_type_support_handle;
}
