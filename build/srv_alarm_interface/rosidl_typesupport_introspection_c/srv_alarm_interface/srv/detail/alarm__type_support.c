// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from srv_alarm_interface:srv/Alarm.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "srv_alarm_interface/srv/detail/alarm__rosidl_typesupport_introspection_c.h"
#include "srv_alarm_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "srv_alarm_interface/srv/detail/alarm__functions.h"
#include "srv_alarm_interface/srv/detail/alarm__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Alarm_Request__rosidl_typesupport_introspection_c__Alarm_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  srv_alarm_interface__srv__Alarm_Request__init(message_memory);
}

void Alarm_Request__rosidl_typesupport_introspection_c__Alarm_Request_fini_function(void * message_memory)
{
  srv_alarm_interface__srv__Alarm_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Alarm_Request__rosidl_typesupport_introspection_c__Alarm_Request_message_member_array[1] = {
  {
    "alarm_request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srv_alarm_interface__srv__Alarm_Request, alarm_request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Alarm_Request__rosidl_typesupport_introspection_c__Alarm_Request_message_members = {
  "srv_alarm_interface__srv",  // message namespace
  "Alarm_Request",  // message name
  1,  // number of fields
  sizeof(srv_alarm_interface__srv__Alarm_Request),
  Alarm_Request__rosidl_typesupport_introspection_c__Alarm_Request_message_member_array,  // message members
  Alarm_Request__rosidl_typesupport_introspection_c__Alarm_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Alarm_Request__rosidl_typesupport_introspection_c__Alarm_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Alarm_Request__rosidl_typesupport_introspection_c__Alarm_Request_message_type_support_handle = {
  0,
  &Alarm_Request__rosidl_typesupport_introspection_c__Alarm_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_srv_alarm_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_alarm_interface, srv, Alarm_Request)() {
  if (!Alarm_Request__rosidl_typesupport_introspection_c__Alarm_Request_message_type_support_handle.typesupport_identifier) {
    Alarm_Request__rosidl_typesupport_introspection_c__Alarm_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Alarm_Request__rosidl_typesupport_introspection_c__Alarm_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "srv_alarm_interface/srv/detail/alarm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "srv_alarm_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "srv_alarm_interface/srv/detail/alarm__functions.h"
// already included above
// #include "srv_alarm_interface/srv/detail/alarm__struct.h"


// Include directives for member types
// Member `alarm_response`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Alarm_Response__rosidl_typesupport_introspection_c__Alarm_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  srv_alarm_interface__srv__Alarm_Response__init(message_memory);
}

void Alarm_Response__rosidl_typesupport_introspection_c__Alarm_Response_fini_function(void * message_memory)
{
  srv_alarm_interface__srv__Alarm_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Alarm_Response__rosidl_typesupport_introspection_c__Alarm_Response_message_member_array[1] = {
  {
    "alarm_response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srv_alarm_interface__srv__Alarm_Response, alarm_response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Alarm_Response__rosidl_typesupport_introspection_c__Alarm_Response_message_members = {
  "srv_alarm_interface__srv",  // message namespace
  "Alarm_Response",  // message name
  1,  // number of fields
  sizeof(srv_alarm_interface__srv__Alarm_Response),
  Alarm_Response__rosidl_typesupport_introspection_c__Alarm_Response_message_member_array,  // message members
  Alarm_Response__rosidl_typesupport_introspection_c__Alarm_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Alarm_Response__rosidl_typesupport_introspection_c__Alarm_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Alarm_Response__rosidl_typesupport_introspection_c__Alarm_Response_message_type_support_handle = {
  0,
  &Alarm_Response__rosidl_typesupport_introspection_c__Alarm_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_srv_alarm_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_alarm_interface, srv, Alarm_Response)() {
  if (!Alarm_Response__rosidl_typesupport_introspection_c__Alarm_Response_message_type_support_handle.typesupport_identifier) {
    Alarm_Response__rosidl_typesupport_introspection_c__Alarm_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Alarm_Response__rosidl_typesupport_introspection_c__Alarm_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "srv_alarm_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "srv_alarm_interface/srv/detail/alarm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers srv_alarm_interface__srv__detail__alarm__rosidl_typesupport_introspection_c__Alarm_service_members = {
  "srv_alarm_interface__srv",  // service namespace
  "Alarm",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // srv_alarm_interface__srv__detail__alarm__rosidl_typesupport_introspection_c__Alarm_Request_message_type_support_handle,
  NULL  // response message
  // srv_alarm_interface__srv__detail__alarm__rosidl_typesupport_introspection_c__Alarm_Response_message_type_support_handle
};

static rosidl_service_type_support_t srv_alarm_interface__srv__detail__alarm__rosidl_typesupport_introspection_c__Alarm_service_type_support_handle = {
  0,
  &srv_alarm_interface__srv__detail__alarm__rosidl_typesupport_introspection_c__Alarm_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_alarm_interface, srv, Alarm_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_alarm_interface, srv, Alarm_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_srv_alarm_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_alarm_interface, srv, Alarm)() {
  if (!srv_alarm_interface__srv__detail__alarm__rosidl_typesupport_introspection_c__Alarm_service_type_support_handle.typesupport_identifier) {
    srv_alarm_interface__srv__detail__alarm__rosidl_typesupport_introspection_c__Alarm_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)srv_alarm_interface__srv__detail__alarm__rosidl_typesupport_introspection_c__Alarm_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_alarm_interface, srv, Alarm_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_alarm_interface, srv, Alarm_Response)()->data;
  }

  return &srv_alarm_interface__srv__detail__alarm__rosidl_typesupport_introspection_c__Alarm_service_type_support_handle;
}
