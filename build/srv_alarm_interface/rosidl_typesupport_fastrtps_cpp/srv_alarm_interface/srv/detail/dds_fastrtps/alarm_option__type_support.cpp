// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from srv_alarm_interface:srv/AlarmOption.idl
// generated code does not contain a copyright notice
#include "srv_alarm_interface/srv/detail/alarm_option__rosidl_typesupport_fastrtps_cpp.hpp"
#include "srv_alarm_interface/srv/detail/alarm_option__struct.hpp"

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

namespace srv_alarm_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_srv_alarm_interface
cdr_serialize(
  const srv_alarm_interface::srv::AlarmOption_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: alarm_time_request
  cdr << ros_message.alarm_time_request;
  // Member: transport_time_request
  cdr << ros_message.transport_time_request;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_srv_alarm_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  srv_alarm_interface::srv::AlarmOption_Request & ros_message)
{
  // Member: alarm_time_request
  cdr >> ros_message.alarm_time_request;

  // Member: transport_time_request
  cdr >> ros_message.transport_time_request;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_srv_alarm_interface
get_serialized_size(
  const srv_alarm_interface::srv::AlarmOption_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: alarm_time_request
  {
    size_t item_size = sizeof(ros_message.alarm_time_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: transport_time_request
  {
    size_t item_size = sizeof(ros_message.transport_time_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_srv_alarm_interface
max_serialized_size_AlarmOption_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: alarm_time_request
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: transport_time_request
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _AlarmOption_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const srv_alarm_interface::srv::AlarmOption_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AlarmOption_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<srv_alarm_interface::srv::AlarmOption_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AlarmOption_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const srv_alarm_interface::srv::AlarmOption_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AlarmOption_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AlarmOption_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _AlarmOption_Request__callbacks = {
  "srv_alarm_interface::srv",
  "AlarmOption_Request",
  _AlarmOption_Request__cdr_serialize,
  _AlarmOption_Request__cdr_deserialize,
  _AlarmOption_Request__get_serialized_size,
  _AlarmOption_Request__max_serialized_size
};

static rosidl_message_type_support_t _AlarmOption_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AlarmOption_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace srv_alarm_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_srv_alarm_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<srv_alarm_interface::srv::AlarmOption_Request>()
{
  return &srv_alarm_interface::srv::typesupport_fastrtps_cpp::_AlarmOption_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, srv_alarm_interface, srv, AlarmOption_Request)() {
  return &srv_alarm_interface::srv::typesupport_fastrtps_cpp::_AlarmOption_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace srv_alarm_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_srv_alarm_interface
cdr_serialize(
  const srv_alarm_interface::srv::AlarmOption_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: alarm_time_response
  cdr << ros_message.alarm_time_response;
  // Member: transport_time_response
  cdr << ros_message.transport_time_response;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_srv_alarm_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  srv_alarm_interface::srv::AlarmOption_Response & ros_message)
{
  // Member: alarm_time_response
  cdr >> ros_message.alarm_time_response;

  // Member: transport_time_response
  cdr >> ros_message.transport_time_response;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_srv_alarm_interface
get_serialized_size(
  const srv_alarm_interface::srv::AlarmOption_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: alarm_time_response
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.alarm_time_response.size() + 1);
  // Member: transport_time_response
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.transport_time_response.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_srv_alarm_interface
max_serialized_size_AlarmOption_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: alarm_time_response
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: transport_time_response
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

static bool _AlarmOption_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const srv_alarm_interface::srv::AlarmOption_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AlarmOption_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<srv_alarm_interface::srv::AlarmOption_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AlarmOption_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const srv_alarm_interface::srv::AlarmOption_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AlarmOption_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AlarmOption_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _AlarmOption_Response__callbacks = {
  "srv_alarm_interface::srv",
  "AlarmOption_Response",
  _AlarmOption_Response__cdr_serialize,
  _AlarmOption_Response__cdr_deserialize,
  _AlarmOption_Response__get_serialized_size,
  _AlarmOption_Response__max_serialized_size
};

static rosidl_message_type_support_t _AlarmOption_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AlarmOption_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace srv_alarm_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_srv_alarm_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<srv_alarm_interface::srv::AlarmOption_Response>()
{
  return &srv_alarm_interface::srv::typesupport_fastrtps_cpp::_AlarmOption_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, srv_alarm_interface, srv, AlarmOption_Response)() {
  return &srv_alarm_interface::srv::typesupport_fastrtps_cpp::_AlarmOption_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace srv_alarm_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _AlarmOption__callbacks = {
  "srv_alarm_interface::srv",
  "AlarmOption",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, srv_alarm_interface, srv, AlarmOption_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, srv_alarm_interface, srv, AlarmOption_Response)(),
};

static rosidl_service_type_support_t _AlarmOption__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AlarmOption__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace srv_alarm_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_srv_alarm_interface
const rosidl_service_type_support_t *
get_service_type_support_handle<srv_alarm_interface::srv::AlarmOption>()
{
  return &srv_alarm_interface::srv::typesupport_fastrtps_cpp::_AlarmOption__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, srv_alarm_interface, srv, AlarmOption)() {
  return &srv_alarm_interface::srv::typesupport_fastrtps_cpp::_AlarmOption__handle;
}

#ifdef __cplusplus
}
#endif
