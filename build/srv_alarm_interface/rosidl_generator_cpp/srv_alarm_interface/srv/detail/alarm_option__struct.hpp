// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from srv_alarm_interface:srv/AlarmOption.idl
// generated code does not contain a copyright notice

#ifndef SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM_OPTION__STRUCT_HPP_
#define SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM_OPTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__srv_alarm_interface__srv__AlarmOption_Request __attribute__((deprecated))
#else
# define DEPRECATED__srv_alarm_interface__srv__AlarmOption_Request __declspec(deprecated)
#endif

namespace srv_alarm_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AlarmOption_Request_
{
  using Type = AlarmOption_Request_<ContainerAllocator>;

  explicit AlarmOption_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alarm_time_request = 0;
      this->transport_time_request = 0;
    }
  }

  explicit AlarmOption_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alarm_time_request = 0;
      this->transport_time_request = 0;
    }
  }

  // field types and members
  using _alarm_time_request_type =
    int8_t;
  _alarm_time_request_type alarm_time_request;
  using _transport_time_request_type =
    int8_t;
  _transport_time_request_type transport_time_request;

  // setters for named parameter idiom
  Type & set__alarm_time_request(
    const int8_t & _arg)
  {
    this->alarm_time_request = _arg;
    return *this;
  }
  Type & set__transport_time_request(
    const int8_t & _arg)
  {
    this->transport_time_request = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t ALARM_TIME =
    1;
  static constexpr int8_t TRANSPORT_TIME =
    2;

  // pointer types
  using RawPtr =
    srv_alarm_interface::srv::AlarmOption_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const srv_alarm_interface::srv::AlarmOption_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<srv_alarm_interface::srv::AlarmOption_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<srv_alarm_interface::srv::AlarmOption_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      srv_alarm_interface::srv::AlarmOption_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<srv_alarm_interface::srv::AlarmOption_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      srv_alarm_interface::srv::AlarmOption_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<srv_alarm_interface::srv::AlarmOption_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<srv_alarm_interface::srv::AlarmOption_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<srv_alarm_interface::srv::AlarmOption_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__srv_alarm_interface__srv__AlarmOption_Request
    std::shared_ptr<srv_alarm_interface::srv::AlarmOption_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__srv_alarm_interface__srv__AlarmOption_Request
    std::shared_ptr<srv_alarm_interface::srv::AlarmOption_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlarmOption_Request_ & other) const
  {
    if (this->alarm_time_request != other.alarm_time_request) {
      return false;
    }
    if (this->transport_time_request != other.transport_time_request) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlarmOption_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlarmOption_Request_

// alias to use template instance with default allocator
using AlarmOption_Request =
  srv_alarm_interface::srv::AlarmOption_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t AlarmOption_Request_<ContainerAllocator>::ALARM_TIME;
template<typename ContainerAllocator>
constexpr int8_t AlarmOption_Request_<ContainerAllocator>::TRANSPORT_TIME;

}  // namespace srv

}  // namespace srv_alarm_interface


#ifndef _WIN32
# define DEPRECATED__srv_alarm_interface__srv__AlarmOption_Response __attribute__((deprecated))
#else
# define DEPRECATED__srv_alarm_interface__srv__AlarmOption_Response __declspec(deprecated)
#endif

namespace srv_alarm_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AlarmOption_Response_
{
  using Type = AlarmOption_Response_<ContainerAllocator>;

  explicit AlarmOption_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alarm_time_response = "";
      this->transport_time_response = "";
    }
  }

  explicit AlarmOption_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : alarm_time_response(_alloc),
    transport_time_response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alarm_time_response = "";
      this->transport_time_response = "";
    }
  }

  // field types and members
  using _alarm_time_response_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _alarm_time_response_type alarm_time_response;
  using _transport_time_response_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _transport_time_response_type transport_time_response;

  // setters for named parameter idiom
  Type & set__alarm_time_response(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->alarm_time_response = _arg;
    return *this;
  }
  Type & set__transport_time_response(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->transport_time_response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    srv_alarm_interface::srv::AlarmOption_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const srv_alarm_interface::srv::AlarmOption_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<srv_alarm_interface::srv::AlarmOption_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<srv_alarm_interface::srv::AlarmOption_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      srv_alarm_interface::srv::AlarmOption_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<srv_alarm_interface::srv::AlarmOption_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      srv_alarm_interface::srv::AlarmOption_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<srv_alarm_interface::srv::AlarmOption_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<srv_alarm_interface::srv::AlarmOption_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<srv_alarm_interface::srv::AlarmOption_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__srv_alarm_interface__srv__AlarmOption_Response
    std::shared_ptr<srv_alarm_interface::srv::AlarmOption_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__srv_alarm_interface__srv__AlarmOption_Response
    std::shared_ptr<srv_alarm_interface::srv::AlarmOption_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlarmOption_Response_ & other) const
  {
    if (this->alarm_time_response != other.alarm_time_response) {
      return false;
    }
    if (this->transport_time_response != other.transport_time_response) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlarmOption_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlarmOption_Response_

// alias to use template instance with default allocator
using AlarmOption_Response =
  srv_alarm_interface::srv::AlarmOption_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace srv_alarm_interface

namespace srv_alarm_interface
{

namespace srv
{

struct AlarmOption
{
  using Request = srv_alarm_interface::srv::AlarmOption_Request;
  using Response = srv_alarm_interface::srv::AlarmOption_Response;
};

}  // namespace srv

}  // namespace srv_alarm_interface

#endif  // SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM_OPTION__STRUCT_HPP_
