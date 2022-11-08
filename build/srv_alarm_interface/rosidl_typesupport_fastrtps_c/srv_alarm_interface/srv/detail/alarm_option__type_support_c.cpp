// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from srv_alarm_interface:srv/AlarmOption.idl
// generated code does not contain a copyright notice
#include "srv_alarm_interface/srv/detail/alarm_option__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "srv_alarm_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "srv_alarm_interface/srv/detail/alarm_option__struct.h"
#include "srv_alarm_interface/srv/detail/alarm_option__functions.h"
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


// forward declare type support functions


using _AlarmOption_Request__ros_msg_type = srv_alarm_interface__srv__AlarmOption_Request;

static bool _AlarmOption_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AlarmOption_Request__ros_msg_type * ros_message = static_cast<const _AlarmOption_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: alarm_time_request
  {
    cdr << ros_message->alarm_time_request;
  }

  // Field name: transport_time_request
  {
    cdr << ros_message->transport_time_request;
  }

  return true;
}

static bool _AlarmOption_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AlarmOption_Request__ros_msg_type * ros_message = static_cast<_AlarmOption_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: alarm_time_request
  {
    cdr >> ros_message->alarm_time_request;
  }

  // Field name: transport_time_request
  {
    cdr >> ros_message->transport_time_request;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_srv_alarm_interface
size_t get_serialized_size_srv_alarm_interface__srv__AlarmOption_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AlarmOption_Request__ros_msg_type * ros_message = static_cast<const _AlarmOption_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name alarm_time_request
  {
    size_t item_size = sizeof(ros_message->alarm_time_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transport_time_request
  {
    size_t item_size = sizeof(ros_message->transport_time_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AlarmOption_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_srv_alarm_interface__srv__AlarmOption_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_srv_alarm_interface
size_t max_serialized_size_srv_alarm_interface__srv__AlarmOption_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: alarm_time_request
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: transport_time_request
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _AlarmOption_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_srv_alarm_interface__srv__AlarmOption_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AlarmOption_Request = {
  "srv_alarm_interface::srv",
  "AlarmOption_Request",
  _AlarmOption_Request__cdr_serialize,
  _AlarmOption_Request__cdr_deserialize,
  _AlarmOption_Request__get_serialized_size,
  _AlarmOption_Request__max_serialized_size
};

static rosidl_message_type_support_t _AlarmOption_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AlarmOption_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, srv_alarm_interface, srv, AlarmOption_Request)() {
  return &_AlarmOption_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "srv_alarm_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "srv_alarm_interface/srv/detail/alarm_option__struct.h"
// already included above
// #include "srv_alarm_interface/srv/detail/alarm_option__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "rosidl_runtime_c/string.h"  // alarm_time_response, transport_time_response
#include "rosidl_runtime_c/string_functions.h"  // alarm_time_response, transport_time_response

// forward declare type support functions


using _AlarmOption_Response__ros_msg_type = srv_alarm_interface__srv__AlarmOption_Response;

static bool _AlarmOption_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AlarmOption_Response__ros_msg_type * ros_message = static_cast<const _AlarmOption_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: alarm_time_response
  {
    const rosidl_runtime_c__String * str = &ros_message->alarm_time_response;
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

  // Field name: transport_time_response
  {
    const rosidl_runtime_c__String * str = &ros_message->transport_time_response;
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

static bool _AlarmOption_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AlarmOption_Response__ros_msg_type * ros_message = static_cast<_AlarmOption_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: alarm_time_response
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->alarm_time_response.data) {
      rosidl_runtime_c__String__init(&ros_message->alarm_time_response);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->alarm_time_response,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'alarm_time_response'\n");
      return false;
    }
  }

  // Field name: transport_time_response
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->transport_time_response.data) {
      rosidl_runtime_c__String__init(&ros_message->transport_time_response);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->transport_time_response,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'transport_time_response'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_srv_alarm_interface
size_t get_serialized_size_srv_alarm_interface__srv__AlarmOption_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AlarmOption_Response__ros_msg_type * ros_message = static_cast<const _AlarmOption_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name alarm_time_response
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->alarm_time_response.size + 1);
  // field.name transport_time_response
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->transport_time_response.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _AlarmOption_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_srv_alarm_interface__srv__AlarmOption_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_srv_alarm_interface
size_t max_serialized_size_srv_alarm_interface__srv__AlarmOption_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: alarm_time_response
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: transport_time_response
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

static size_t _AlarmOption_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_srv_alarm_interface__srv__AlarmOption_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AlarmOption_Response = {
  "srv_alarm_interface::srv",
  "AlarmOption_Response",
  _AlarmOption_Response__cdr_serialize,
  _AlarmOption_Response__cdr_deserialize,
  _AlarmOption_Response__get_serialized_size,
  _AlarmOption_Response__max_serialized_size
};

static rosidl_message_type_support_t _AlarmOption_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AlarmOption_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, srv_alarm_interface, srv, AlarmOption_Response)() {
  return &_AlarmOption_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "srv_alarm_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "srv_alarm_interface/srv/alarm_option.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AlarmOption__callbacks = {
  "srv_alarm_interface::srv",
  "AlarmOption",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, srv_alarm_interface, srv, AlarmOption_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, srv_alarm_interface, srv, AlarmOption_Response)(),
};

static rosidl_service_type_support_t AlarmOption__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AlarmOption__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, srv_alarm_interface, srv, AlarmOption)() {
  return &AlarmOption__handle;
}

#if defined(__cplusplus)
}
#endif
