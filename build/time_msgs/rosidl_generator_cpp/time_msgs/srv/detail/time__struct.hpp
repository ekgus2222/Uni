// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from time_msgs:srv/Time.idl
// generated code does not contain a copyright notice

#ifndef TIME_MSGS__SRV__DETAIL__TIME__STRUCT_HPP_
#define TIME_MSGS__SRV__DETAIL__TIME__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__time_msgs__srv__Time_Request __attribute__((deprecated))
#else
# define DEPRECATED__time_msgs__srv__Time_Request __declspec(deprecated)
#endif

namespace time_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Time_Request_
{
  using Type = Time_Request_<ContainerAllocator>;

  explicit Time_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0l;
      this->time_to_work = "";
      this->home_address = "";
      this->office_address = "";
      this->required_time = "";
      this->required_time_cnt = 0l;
      this->request = "";
    }
  }

  explicit Time_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_to_work(_alloc),
    home_address(_alloc),
    office_address(_alloc),
    required_time(_alloc),
    request(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0l;
      this->time_to_work = "";
      this->home_address = "";
      this->office_address = "";
      this->required_time = "";
      this->required_time_cnt = 0l;
      this->request = "";
    }
  }

  // field types and members
  using _mode_type =
    int32_t;
  _mode_type mode;
  using _time_to_work_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _time_to_work_type time_to_work;
  using _home_address_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _home_address_type home_address;
  using _office_address_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _office_address_type office_address;
  using _required_time_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _required_time_type required_time;
  using _required_time_cnt_type =
    int32_t;
  _required_time_cnt_type required_time_cnt;
  using _request_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _request_type request;

  // setters for named parameter idiom
  Type & set__mode(
    const int32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__time_to_work(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->time_to_work = _arg;
    return *this;
  }
  Type & set__home_address(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->home_address = _arg;
    return *this;
  }
  Type & set__office_address(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->office_address = _arg;
    return *this;
  }
  Type & set__required_time(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->required_time = _arg;
    return *this;
  }
  Type & set__required_time_cnt(
    const int32_t & _arg)
  {
    this->required_time_cnt = _arg;
    return *this;
  }
  Type & set__request(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    time_msgs::srv::Time_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const time_msgs::srv::Time_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<time_msgs::srv::Time_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<time_msgs::srv::Time_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      time_msgs::srv::Time_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<time_msgs::srv::Time_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      time_msgs::srv::Time_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<time_msgs::srv::Time_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<time_msgs::srv::Time_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<time_msgs::srv::Time_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__time_msgs__srv__Time_Request
    std::shared_ptr<time_msgs::srv::Time_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__time_msgs__srv__Time_Request
    std::shared_ptr<time_msgs::srv::Time_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Time_Request_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->time_to_work != other.time_to_work) {
      return false;
    }
    if (this->home_address != other.home_address) {
      return false;
    }
    if (this->office_address != other.office_address) {
      return false;
    }
    if (this->required_time != other.required_time) {
      return false;
    }
    if (this->required_time_cnt != other.required_time_cnt) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const Time_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Time_Request_

// alias to use template instance with default allocator
using Time_Request =
  time_msgs::srv::Time_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace time_msgs


#ifndef _WIN32
# define DEPRECATED__time_msgs__srv__Time_Response __attribute__((deprecated))
#else
# define DEPRECATED__time_msgs__srv__Time_Response __declspec(deprecated)
#endif

namespace time_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Time_Response_
{
  using Type = Time_Response_<ContainerAllocator>;

  explicit Time_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alarm_time_response = "";
      this->transport_response = "";
      this->test = 0l;
    }
  }

  explicit Time_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : alarm_time_response(_alloc),
    transport_response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alarm_time_response = "";
      this->transport_response = "";
      this->test = 0l;
    }
  }

  // field types and members
  using _alarm_time_response_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _alarm_time_response_type alarm_time_response;
  using _transport_response_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _transport_response_type transport_response;
  using _test_type =
    int32_t;
  _test_type test;

  // setters for named parameter idiom
  Type & set__alarm_time_response(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->alarm_time_response = _arg;
    return *this;
  }
  Type & set__transport_response(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->transport_response = _arg;
    return *this;
  }
  Type & set__test(
    const int32_t & _arg)
  {
    this->test = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    time_msgs::srv::Time_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const time_msgs::srv::Time_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<time_msgs::srv::Time_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<time_msgs::srv::Time_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      time_msgs::srv::Time_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<time_msgs::srv::Time_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      time_msgs::srv::Time_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<time_msgs::srv::Time_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<time_msgs::srv::Time_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<time_msgs::srv::Time_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__time_msgs__srv__Time_Response
    std::shared_ptr<time_msgs::srv::Time_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__time_msgs__srv__Time_Response
    std::shared_ptr<time_msgs::srv::Time_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Time_Response_ & other) const
  {
    if (this->alarm_time_response != other.alarm_time_response) {
      return false;
    }
    if (this->transport_response != other.transport_response) {
      return false;
    }
    if (this->test != other.test) {
      return false;
    }
    return true;
  }
  bool operator!=(const Time_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Time_Response_

// alias to use template instance with default allocator
using Time_Response =
  time_msgs::srv::Time_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace time_msgs

namespace time_msgs
{

namespace srv
{

struct Time
{
  using Request = time_msgs::srv::Time_Request;
  using Response = time_msgs::srv::Time_Response;
};

}  // namespace srv

}  // namespace time_msgs

#endif  // TIME_MSGS__SRV__DETAIL__TIME__STRUCT_HPP_
