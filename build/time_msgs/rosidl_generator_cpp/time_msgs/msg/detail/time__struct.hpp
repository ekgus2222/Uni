// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from time_msgs:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef TIME_MSGS__MSG__DETAIL__TIME__STRUCT_HPP_
#define TIME_MSGS__MSG__DETAIL__TIME__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__time_msgs__msg__Time __attribute__((deprecated))
#else
# define DEPRECATED__time_msgs__msg__Time __declspec(deprecated)
#endif

namespace time_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Time_
{
  using Type = Time_<ContainerAllocator>;

  explicit Time_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_first_alarm = false;
      this->remained_time = "";
    }
  }

  explicit Time_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : remained_time(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_first_alarm = false;
      this->remained_time = "";
    }
  }

  // field types and members
  using _is_first_alarm_type =
    bool;
  _is_first_alarm_type is_first_alarm;
  using _remained_time_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _remained_time_type remained_time;

  // setters for named parameter idiom
  Type & set__is_first_alarm(
    const bool & _arg)
  {
    this->is_first_alarm = _arg;
    return *this;
  }
  Type & set__remained_time(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->remained_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    time_msgs::msg::Time_<ContainerAllocator> *;
  using ConstRawPtr =
    const time_msgs::msg::Time_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<time_msgs::msg::Time_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<time_msgs::msg::Time_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      time_msgs::msg::Time_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<time_msgs::msg::Time_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      time_msgs::msg::Time_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<time_msgs::msg::Time_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<time_msgs::msg::Time_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<time_msgs::msg::Time_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__time_msgs__msg__Time
    std::shared_ptr<time_msgs::msg::Time_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__time_msgs__msg__Time
    std::shared_ptr<time_msgs::msg::Time_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Time_ & other) const
  {
    if (this->is_first_alarm != other.is_first_alarm) {
      return false;
    }
    if (this->remained_time != other.remained_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const Time_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Time_

// alias to use template instance with default allocator
using Time =
  time_msgs::msg::Time_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace time_msgs

#endif  // TIME_MSGS__MSG__DETAIL__TIME__STRUCT_HPP_
