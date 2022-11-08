// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from srv_alarm_interface:srv/Alarm.idl
// generated code does not contain a copyright notice

#ifndef SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM__STRUCT_HPP_
#define SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__srv_alarm_interface__srv__Alarm_Request __attribute__((deprecated))
#else
# define DEPRECATED__srv_alarm_interface__srv__Alarm_Request __declspec(deprecated)
#endif

namespace srv_alarm_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Alarm_Request_
{
  using Type = Alarm_Request_<ContainerAllocator>;

  explicit Alarm_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alarm_request = 0;
    }
  }

  explicit Alarm_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alarm_request = 0;
    }
  }

  // field types and members
  using _alarm_request_type =
    int8_t;
  _alarm_request_type alarm_request;

  // setters for named parameter idiom
  Type & set__alarm_request(
    const int8_t & _arg)
  {
    this->alarm_request = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t ALARM_TIME =
    1;
  static constexpr int8_t TRANSPORT_TIME =
    2;

  // pointer types
  using RawPtr =
    srv_alarm_interface::srv::Alarm_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const srv_alarm_interface::srv::Alarm_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<srv_alarm_interface::srv::Alarm_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<srv_alarm_interface::srv::Alarm_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      srv_alarm_interface::srv::Alarm_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<srv_alarm_interface::srv::Alarm_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      srv_alarm_interface::srv::Alarm_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<srv_alarm_interface::srv::Alarm_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<srv_alarm_interface::srv::Alarm_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<srv_alarm_interface::srv::Alarm_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__srv_alarm_interface__srv__Alarm_Request
    std::shared_ptr<srv_alarm_interface::srv::Alarm_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__srv_alarm_interface__srv__Alarm_Request
    std::shared_ptr<srv_alarm_interface::srv::Alarm_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Alarm_Request_ & other) const
  {
    if (this->alarm_request != other.alarm_request) {
      return false;
    }
    return true;
  }
  bool operator!=(const Alarm_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Alarm_Request_

// alias to use template instance with default allocator
using Alarm_Request =
  srv_alarm_interface::srv::Alarm_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t Alarm_Request_<ContainerAllocator>::ALARM_TIME;
template<typename ContainerAllocator>
constexpr int8_t Alarm_Request_<ContainerAllocator>::TRANSPORT_TIME;

}  // namespace srv

}  // namespace srv_alarm_interface


#ifndef _WIN32
# define DEPRECATED__srv_alarm_interface__srv__Alarm_Response __attribute__((deprecated))
#else
# define DEPRECATED__srv_alarm_interface__srv__Alarm_Response __declspec(deprecated)
#endif

namespace srv_alarm_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Alarm_Response_
{
  using Type = Alarm_Response_<ContainerAllocator>;

  explicit Alarm_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alarm_response = "";
    }
  }

  explicit Alarm_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : alarm_response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alarm_response = "";
    }
  }

  // field types and members
  using _alarm_response_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _alarm_response_type alarm_response;

  // setters for named parameter idiom
  Type & set__alarm_response(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->alarm_response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    srv_alarm_interface::srv::Alarm_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const srv_alarm_interface::srv::Alarm_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<srv_alarm_interface::srv::Alarm_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<srv_alarm_interface::srv::Alarm_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      srv_alarm_interface::srv::Alarm_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<srv_alarm_interface::srv::Alarm_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      srv_alarm_interface::srv::Alarm_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<srv_alarm_interface::srv::Alarm_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<srv_alarm_interface::srv::Alarm_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<srv_alarm_interface::srv::Alarm_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__srv_alarm_interface__srv__Alarm_Response
    std::shared_ptr<srv_alarm_interface::srv::Alarm_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__srv_alarm_interface__srv__Alarm_Response
    std::shared_ptr<srv_alarm_interface::srv::Alarm_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Alarm_Response_ & other) const
  {
    if (this->alarm_response != other.alarm_response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Alarm_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Alarm_Response_

// alias to use template instance with default allocator
using Alarm_Response =
  srv_alarm_interface::srv::Alarm_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace srv_alarm_interface

namespace srv_alarm_interface
{

namespace srv
{

struct Alarm
{
  using Request = srv_alarm_interface::srv::Alarm_Request;
  using Response = srv_alarm_interface::srv::Alarm_Response;
};

}  // namespace srv

}  // namespace srv_alarm_interface

#endif  // SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM__STRUCT_HPP_
