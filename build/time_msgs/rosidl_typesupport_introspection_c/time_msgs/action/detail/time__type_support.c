// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from time_msgs:action/Time.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "time_msgs/action/detail/time__rosidl_typesupport_introspection_c.h"
#include "time_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "time_msgs/action/detail/time__functions.h"
#include "time_msgs/action/detail/time__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Time_Goal__rosidl_typesupport_introspection_c__Time_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  time_msgs__action__Time_Goal__init(message_memory);
}

void Time_Goal__rosidl_typesupport_introspection_c__Time_Goal_fini_function(void * message_memory)
{
  time_msgs__action__Time_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Time_Goal__rosidl_typesupport_introspection_c__Time_Goal_message_member_array[6] = {
  {
    "year",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__action__Time_Goal, year),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "month",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__action__Time_Goal, month),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "day",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__action__Time_Goal, day),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hour",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__action__Time_Goal, hour),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "minute",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__action__Time_Goal, minute),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "second",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__action__Time_Goal, second),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Time_Goal__rosidl_typesupport_introspection_c__Time_Goal_message_members = {
  "time_msgs__action",  // message namespace
  "Time_Goal",  // message name
  6,  // number of fields
  sizeof(time_msgs__action__Time_Goal),
  Time_Goal__rosidl_typesupport_introspection_c__Time_Goal_message_member_array,  // message members
  Time_Goal__rosidl_typesupport_introspection_c__Time_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Time_Goal__rosidl_typesupport_introspection_c__Time_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Time_Goal__rosidl_typesupport_introspection_c__Time_Goal_message_type_support_handle = {
  0,
  &Time_Goal__rosidl_typesupport_introspection_c__Time_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_time_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_Goal)() {
  if (!Time_Goal__rosidl_typesupport_introspection_c__Time_Goal_message_type_support_handle.typesupport_identifier) {
    Time_Goal__rosidl_typesupport_introspection_c__Time_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Time_Goal__rosidl_typesupport_introspection_c__Time_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "time_msgs/action/detail/time__rosidl_typesupport_introspection_c.h"
// already included above
// #include "time_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "time_msgs/action/detail/time__functions.h"
// already included above
// #include "time_msgs/action/detail/time__struct.h"


// Include directives for member types
// Member `current_time`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Time_Result__rosidl_typesupport_introspection_c__Time_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  time_msgs__action__Time_Result__init(message_memory);
}

void Time_Result__rosidl_typesupport_introspection_c__Time_Result_fini_function(void * message_memory)
{
  time_msgs__action__Time_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Time_Result__rosidl_typesupport_introspection_c__Time_Result_message_member_array[1] = {
  {
    "current_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__action__Time_Result, current_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Time_Result__rosidl_typesupport_introspection_c__Time_Result_message_members = {
  "time_msgs__action",  // message namespace
  "Time_Result",  // message name
  1,  // number of fields
  sizeof(time_msgs__action__Time_Result),
  Time_Result__rosidl_typesupport_introspection_c__Time_Result_message_member_array,  // message members
  Time_Result__rosidl_typesupport_introspection_c__Time_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Time_Result__rosidl_typesupport_introspection_c__Time_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Time_Result__rosidl_typesupport_introspection_c__Time_Result_message_type_support_handle = {
  0,
  &Time_Result__rosidl_typesupport_introspection_c__Time_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_time_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_Result)() {
  if (!Time_Result__rosidl_typesupport_introspection_c__Time_Result_message_type_support_handle.typesupport_identifier) {
    Time_Result__rosidl_typesupport_introspection_c__Time_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Time_Result__rosidl_typesupport_introspection_c__Time_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "time_msgs/action/detail/time__rosidl_typesupport_introspection_c.h"
// already included above
// #include "time_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "time_msgs/action/detail/time__functions.h"
// already included above
// #include "time_msgs/action/detail/time__struct.h"


// Include directives for member types
// Member `response_time`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Time_Feedback__rosidl_typesupport_introspection_c__Time_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  time_msgs__action__Time_Feedback__init(message_memory);
}

void Time_Feedback__rosidl_typesupport_introspection_c__Time_Feedback_fini_function(void * message_memory)
{
  time_msgs__action__Time_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Time_Feedback__rosidl_typesupport_introspection_c__Time_Feedback_message_member_array[1] = {
  {
    "response_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__action__Time_Feedback, response_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Time_Feedback__rosidl_typesupport_introspection_c__Time_Feedback_message_members = {
  "time_msgs__action",  // message namespace
  "Time_Feedback",  // message name
  1,  // number of fields
  sizeof(time_msgs__action__Time_Feedback),
  Time_Feedback__rosidl_typesupport_introspection_c__Time_Feedback_message_member_array,  // message members
  Time_Feedback__rosidl_typesupport_introspection_c__Time_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Time_Feedback__rosidl_typesupport_introspection_c__Time_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Time_Feedback__rosidl_typesupport_introspection_c__Time_Feedback_message_type_support_handle = {
  0,
  &Time_Feedback__rosidl_typesupport_introspection_c__Time_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_time_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_Feedback)() {
  if (!Time_Feedback__rosidl_typesupport_introspection_c__Time_Feedback_message_type_support_handle.typesupport_identifier) {
    Time_Feedback__rosidl_typesupport_introspection_c__Time_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Time_Feedback__rosidl_typesupport_introspection_c__Time_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "time_msgs/action/detail/time__rosidl_typesupport_introspection_c.h"
// already included above
// #include "time_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "time_msgs/action/detail/time__functions.h"
// already included above
// #include "time_msgs/action/detail/time__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "time_msgs/action/time.h"
// Member `goal`
// already included above
// #include "time_msgs/action/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Time_SendGoal_Request__rosidl_typesupport_introspection_c__Time_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  time_msgs__action__Time_SendGoal_Request__init(message_memory);
}

void Time_SendGoal_Request__rosidl_typesupport_introspection_c__Time_SendGoal_Request_fini_function(void * message_memory)
{
  time_msgs__action__Time_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Time_SendGoal_Request__rosidl_typesupport_introspection_c__Time_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__action__Time_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__action__Time_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Time_SendGoal_Request__rosidl_typesupport_introspection_c__Time_SendGoal_Request_message_members = {
  "time_msgs__action",  // message namespace
  "Time_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(time_msgs__action__Time_SendGoal_Request),
  Time_SendGoal_Request__rosidl_typesupport_introspection_c__Time_SendGoal_Request_message_member_array,  // message members
  Time_SendGoal_Request__rosidl_typesupport_introspection_c__Time_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Time_SendGoal_Request__rosidl_typesupport_introspection_c__Time_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Time_SendGoal_Request__rosidl_typesupport_introspection_c__Time_SendGoal_Request_message_type_support_handle = {
  0,
  &Time_SendGoal_Request__rosidl_typesupport_introspection_c__Time_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_time_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_SendGoal_Request)() {
  Time_SendGoal_Request__rosidl_typesupport_introspection_c__Time_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Time_SendGoal_Request__rosidl_typesupport_introspection_c__Time_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_Goal)();
  if (!Time_SendGoal_Request__rosidl_typesupport_introspection_c__Time_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Time_SendGoal_Request__rosidl_typesupport_introspection_c__Time_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Time_SendGoal_Request__rosidl_typesupport_introspection_c__Time_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "time_msgs/action/detail/time__rosidl_typesupport_introspection_c.h"
// already included above
// #include "time_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "time_msgs/action/detail/time__functions.h"
// already included above
// #include "time_msgs/action/detail/time__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Time_SendGoal_Response__rosidl_typesupport_introspection_c__Time_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  time_msgs__action__Time_SendGoal_Response__init(message_memory);
}

void Time_SendGoal_Response__rosidl_typesupport_introspection_c__Time_SendGoal_Response_fini_function(void * message_memory)
{
  time_msgs__action__Time_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Time_SendGoal_Response__rosidl_typesupport_introspection_c__Time_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__action__Time_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__action__Time_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Time_SendGoal_Response__rosidl_typesupport_introspection_c__Time_SendGoal_Response_message_members = {
  "time_msgs__action",  // message namespace
  "Time_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(time_msgs__action__Time_SendGoal_Response),
  Time_SendGoal_Response__rosidl_typesupport_introspection_c__Time_SendGoal_Response_message_member_array,  // message members
  Time_SendGoal_Response__rosidl_typesupport_introspection_c__Time_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Time_SendGoal_Response__rosidl_typesupport_introspection_c__Time_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Time_SendGoal_Response__rosidl_typesupport_introspection_c__Time_SendGoal_Response_message_type_support_handle = {
  0,
  &Time_SendGoal_Response__rosidl_typesupport_introspection_c__Time_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_time_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_SendGoal_Response)() {
  Time_SendGoal_Response__rosidl_typesupport_introspection_c__Time_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Time_SendGoal_Response__rosidl_typesupport_introspection_c__Time_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Time_SendGoal_Response__rosidl_typesupport_introspection_c__Time_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Time_SendGoal_Response__rosidl_typesupport_introspection_c__Time_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "time_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "time_msgs/action/detail/time__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers time_msgs__action__detail__time__rosidl_typesupport_introspection_c__Time_SendGoal_service_members = {
  "time_msgs__action",  // service namespace
  "Time_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // time_msgs__action__detail__time__rosidl_typesupport_introspection_c__Time_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // time_msgs__action__detail__time__rosidl_typesupport_introspection_c__Time_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t time_msgs__action__detail__time__rosidl_typesupport_introspection_c__Time_SendGoal_service_type_support_handle = {
  0,
  &time_msgs__action__detail__time__rosidl_typesupport_introspection_c__Time_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_time_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_SendGoal)() {
  if (!time_msgs__action__detail__time__rosidl_typesupport_introspection_c__Time_SendGoal_service_type_support_handle.typesupport_identifier) {
    time_msgs__action__detail__time__rosidl_typesupport_introspection_c__Time_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)time_msgs__action__detail__time__rosidl_typesupport_introspection_c__Time_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_SendGoal_Response)()->data;
  }

  return &time_msgs__action__detail__time__rosidl_typesupport_introspection_c__Time_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "time_msgs/action/detail/time__rosidl_typesupport_introspection_c.h"
// already included above
// #include "time_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "time_msgs/action/detail/time__functions.h"
// already included above
// #include "time_msgs/action/detail/time__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Time_GetResult_Request__rosidl_typesupport_introspection_c__Time_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  time_msgs__action__Time_GetResult_Request__init(message_memory);
}

void Time_GetResult_Request__rosidl_typesupport_introspection_c__Time_GetResult_Request_fini_function(void * message_memory)
{
  time_msgs__action__Time_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Time_GetResult_Request__rosidl_typesupport_introspection_c__Time_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__action__Time_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Time_GetResult_Request__rosidl_typesupport_introspection_c__Time_GetResult_Request_message_members = {
  "time_msgs__action",  // message namespace
  "Time_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(time_msgs__action__Time_GetResult_Request),
  Time_GetResult_Request__rosidl_typesupport_introspection_c__Time_GetResult_Request_message_member_array,  // message members
  Time_GetResult_Request__rosidl_typesupport_introspection_c__Time_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Time_GetResult_Request__rosidl_typesupport_introspection_c__Time_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Time_GetResult_Request__rosidl_typesupport_introspection_c__Time_GetResult_Request_message_type_support_handle = {
  0,
  &Time_GetResult_Request__rosidl_typesupport_introspection_c__Time_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_time_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_GetResult_Request)() {
  Time_GetResult_Request__rosidl_typesupport_introspection_c__Time_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Time_GetResult_Request__rosidl_typesupport_introspection_c__Time_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Time_GetResult_Request__rosidl_typesupport_introspection_c__Time_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Time_GetResult_Request__rosidl_typesupport_introspection_c__Time_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "time_msgs/action/detail/time__rosidl_typesupport_introspection_c.h"
// already included above
// #include "time_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "time_msgs/action/detail/time__functions.h"
// already included above
// #include "time_msgs/action/detail/time__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "time_msgs/action/time.h"
// Member `result`
// already included above
// #include "time_msgs/action/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Time_GetResult_Response__rosidl_typesupport_introspection_c__Time_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  time_msgs__action__Time_GetResult_Response__init(message_memory);
}

void Time_GetResult_Response__rosidl_typesupport_introspection_c__Time_GetResult_Response_fini_function(void * message_memory)
{
  time_msgs__action__Time_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Time_GetResult_Response__rosidl_typesupport_introspection_c__Time_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__action__Time_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__action__Time_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Time_GetResult_Response__rosidl_typesupport_introspection_c__Time_GetResult_Response_message_members = {
  "time_msgs__action",  // message namespace
  "Time_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(time_msgs__action__Time_GetResult_Response),
  Time_GetResult_Response__rosidl_typesupport_introspection_c__Time_GetResult_Response_message_member_array,  // message members
  Time_GetResult_Response__rosidl_typesupport_introspection_c__Time_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Time_GetResult_Response__rosidl_typesupport_introspection_c__Time_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Time_GetResult_Response__rosidl_typesupport_introspection_c__Time_GetResult_Response_message_type_support_handle = {
  0,
  &Time_GetResult_Response__rosidl_typesupport_introspection_c__Time_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_time_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_GetResult_Response)() {
  Time_GetResult_Response__rosidl_typesupport_introspection_c__Time_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_Result)();
  if (!Time_GetResult_Response__rosidl_typesupport_introspection_c__Time_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Time_GetResult_Response__rosidl_typesupport_introspection_c__Time_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Time_GetResult_Response__rosidl_typesupport_introspection_c__Time_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "time_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "time_msgs/action/detail/time__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers time_msgs__action__detail__time__rosidl_typesupport_introspection_c__Time_GetResult_service_members = {
  "time_msgs__action",  // service namespace
  "Time_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // time_msgs__action__detail__time__rosidl_typesupport_introspection_c__Time_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // time_msgs__action__detail__time__rosidl_typesupport_introspection_c__Time_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t time_msgs__action__detail__time__rosidl_typesupport_introspection_c__Time_GetResult_service_type_support_handle = {
  0,
  &time_msgs__action__detail__time__rosidl_typesupport_introspection_c__Time_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_time_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_GetResult)() {
  if (!time_msgs__action__detail__time__rosidl_typesupport_introspection_c__Time_GetResult_service_type_support_handle.typesupport_identifier) {
    time_msgs__action__detail__time__rosidl_typesupport_introspection_c__Time_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)time_msgs__action__detail__time__rosidl_typesupport_introspection_c__Time_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_GetResult_Response)()->data;
  }

  return &time_msgs__action__detail__time__rosidl_typesupport_introspection_c__Time_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "time_msgs/action/detail/time__rosidl_typesupport_introspection_c.h"
// already included above
// #include "time_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "time_msgs/action/detail/time__functions.h"
// already included above
// #include "time_msgs/action/detail/time__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "time_msgs/action/time.h"
// Member `feedback`
// already included above
// #include "time_msgs/action/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Time_FeedbackMessage__rosidl_typesupport_introspection_c__Time_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  time_msgs__action__Time_FeedbackMessage__init(message_memory);
}

void Time_FeedbackMessage__rosidl_typesupport_introspection_c__Time_FeedbackMessage_fini_function(void * message_memory)
{
  time_msgs__action__Time_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Time_FeedbackMessage__rosidl_typesupport_introspection_c__Time_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__action__Time_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_msgs__action__Time_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Time_FeedbackMessage__rosidl_typesupport_introspection_c__Time_FeedbackMessage_message_members = {
  "time_msgs__action",  // message namespace
  "Time_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(time_msgs__action__Time_FeedbackMessage),
  Time_FeedbackMessage__rosidl_typesupport_introspection_c__Time_FeedbackMessage_message_member_array,  // message members
  Time_FeedbackMessage__rosidl_typesupport_introspection_c__Time_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Time_FeedbackMessage__rosidl_typesupport_introspection_c__Time_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Time_FeedbackMessage__rosidl_typesupport_introspection_c__Time_FeedbackMessage_message_type_support_handle = {
  0,
  &Time_FeedbackMessage__rosidl_typesupport_introspection_c__Time_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_time_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_FeedbackMessage)() {
  Time_FeedbackMessage__rosidl_typesupport_introspection_c__Time_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Time_FeedbackMessage__rosidl_typesupport_introspection_c__Time_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_msgs, action, Time_Feedback)();
  if (!Time_FeedbackMessage__rosidl_typesupport_introspection_c__Time_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Time_FeedbackMessage__rosidl_typesupport_introspection_c__Time_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Time_FeedbackMessage__rosidl_typesupport_introspection_c__Time_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
