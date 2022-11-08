// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from time_msgs:action/Time.idl
// generated code does not contain a copyright notice

#ifndef TIME_MSGS__ACTION__DETAIL__TIME__STRUCT_HPP_
#define TIME_MSGS__ACTION__DETAIL__TIME__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__time_msgs__action__Time_Goal __attribute__((deprecated))
#else
# define DEPRECATED__time_msgs__action__Time_Goal __declspec(deprecated)
#endif

namespace time_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Time_Goal_
{
  using Type = Time_Goal_<ContainerAllocator>;

  explicit Time_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->year = 0l;
      this->month = 0l;
      this->day = 0l;
      this->hour = 0l;
      this->minute = 0l;
      this->second = 0l;
    }
  }

  explicit Time_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->year = 0l;
      this->month = 0l;
      this->day = 0l;
      this->hour = 0l;
      this->minute = 0l;
      this->second = 0l;
    }
  }

  // field types and members
  using _year_type =
    int32_t;
  _year_type year;
  using _month_type =
    int32_t;
  _month_type month;
  using _day_type =
    int32_t;
  _day_type day;
  using _hour_type =
    int32_t;
  _hour_type hour;
  using _minute_type =
    int32_t;
  _minute_type minute;
  using _second_type =
    int32_t;
  _second_type second;

  // setters for named parameter idiom
  Type & set__year(
    const int32_t & _arg)
  {
    this->year = _arg;
    return *this;
  }
  Type & set__month(
    const int32_t & _arg)
  {
    this->month = _arg;
    return *this;
  }
  Type & set__day(
    const int32_t & _arg)
  {
    this->day = _arg;
    return *this;
  }
  Type & set__hour(
    const int32_t & _arg)
  {
    this->hour = _arg;
    return *this;
  }
  Type & set__minute(
    const int32_t & _arg)
  {
    this->minute = _arg;
    return *this;
  }
  Type & set__second(
    const int32_t & _arg)
  {
    this->second = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    time_msgs::action::Time_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const time_msgs::action::Time_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<time_msgs::action::Time_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<time_msgs::action::Time_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      time_msgs::action::Time_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<time_msgs::action::Time_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      time_msgs::action::Time_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<time_msgs::action::Time_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<time_msgs::action::Time_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<time_msgs::action::Time_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__time_msgs__action__Time_Goal
    std::shared_ptr<time_msgs::action::Time_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__time_msgs__action__Time_Goal
    std::shared_ptr<time_msgs::action::Time_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Time_Goal_ & other) const
  {
    if (this->year != other.year) {
      return false;
    }
    if (this->month != other.month) {
      return false;
    }
    if (this->day != other.day) {
      return false;
    }
    if (this->hour != other.hour) {
      return false;
    }
    if (this->minute != other.minute) {
      return false;
    }
    if (this->second != other.second) {
      return false;
    }
    return true;
  }
  bool operator!=(const Time_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Time_Goal_

// alias to use template instance with default allocator
using Time_Goal =
  time_msgs::action::Time_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace time_msgs


#ifndef _WIN32
# define DEPRECATED__time_msgs__action__Time_Result __attribute__((deprecated))
#else
# define DEPRECATED__time_msgs__action__Time_Result __declspec(deprecated)
#endif

namespace time_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Time_Result_
{
  using Type = Time_Result_<ContainerAllocator>;

  explicit Time_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Time_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _current_time_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _current_time_type current_time;

  // setters for named parameter idiom
  Type & set__current_time(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->current_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    time_msgs::action::Time_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const time_msgs::action::Time_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<time_msgs::action::Time_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<time_msgs::action::Time_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      time_msgs::action::Time_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<time_msgs::action::Time_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      time_msgs::action::Time_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<time_msgs::action::Time_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<time_msgs::action::Time_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<time_msgs::action::Time_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__time_msgs__action__Time_Result
    std::shared_ptr<time_msgs::action::Time_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__time_msgs__action__Time_Result
    std::shared_ptr<time_msgs::action::Time_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Time_Result_ & other) const
  {
    if (this->current_time != other.current_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const Time_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Time_Result_

// alias to use template instance with default allocator
using Time_Result =
  time_msgs::action::Time_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace time_msgs


#ifndef _WIN32
# define DEPRECATED__time_msgs__action__Time_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__time_msgs__action__Time_Feedback __declspec(deprecated)
#endif

namespace time_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Time_Feedback_
{
  using Type = Time_Feedback_<ContainerAllocator>;

  explicit Time_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Time_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _response_time_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _response_time_type response_time;

  // setters for named parameter idiom
  Type & set__response_time(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->response_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    time_msgs::action::Time_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const time_msgs::action::Time_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<time_msgs::action::Time_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<time_msgs::action::Time_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      time_msgs::action::Time_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<time_msgs::action::Time_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      time_msgs::action::Time_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<time_msgs::action::Time_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<time_msgs::action::Time_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<time_msgs::action::Time_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__time_msgs__action__Time_Feedback
    std::shared_ptr<time_msgs::action::Time_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__time_msgs__action__Time_Feedback
    std::shared_ptr<time_msgs::action::Time_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Time_Feedback_ & other) const
  {
    if (this->response_time != other.response_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const Time_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Time_Feedback_

// alias to use template instance with default allocator
using Time_Feedback =
  time_msgs::action::Time_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace time_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "time_msgs/action/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__time_msgs__action__Time_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__time_msgs__action__Time_SendGoal_Request __declspec(deprecated)
#endif

namespace time_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Time_SendGoal_Request_
{
  using Type = Time_SendGoal_Request_<ContainerAllocator>;

  explicit Time_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Time_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    time_msgs::action::Time_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const time_msgs::action::Time_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    time_msgs::action::Time_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const time_msgs::action::Time_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<time_msgs::action::Time_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<time_msgs::action::Time_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      time_msgs::action::Time_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<time_msgs::action::Time_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      time_msgs::action::Time_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<time_msgs::action::Time_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<time_msgs::action::Time_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<time_msgs::action::Time_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__time_msgs__action__Time_SendGoal_Request
    std::shared_ptr<time_msgs::action::Time_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__time_msgs__action__Time_SendGoal_Request
    std::shared_ptr<time_msgs::action::Time_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Time_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Time_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Time_SendGoal_Request_

// alias to use template instance with default allocator
using Time_SendGoal_Request =
  time_msgs::action::Time_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace time_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__time_msgs__action__Time_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__time_msgs__action__Time_SendGoal_Response __declspec(deprecated)
#endif

namespace time_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Time_SendGoal_Response_
{
  using Type = Time_SendGoal_Response_<ContainerAllocator>;

  explicit Time_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Time_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    time_msgs::action::Time_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const time_msgs::action::Time_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<time_msgs::action::Time_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<time_msgs::action::Time_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      time_msgs::action::Time_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<time_msgs::action::Time_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      time_msgs::action::Time_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<time_msgs::action::Time_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<time_msgs::action::Time_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<time_msgs::action::Time_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__time_msgs__action__Time_SendGoal_Response
    std::shared_ptr<time_msgs::action::Time_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__time_msgs__action__Time_SendGoal_Response
    std::shared_ptr<time_msgs::action::Time_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Time_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Time_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Time_SendGoal_Response_

// alias to use template instance with default allocator
using Time_SendGoal_Response =
  time_msgs::action::Time_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace time_msgs

namespace time_msgs
{

namespace action
{

struct Time_SendGoal
{
  using Request = time_msgs::action::Time_SendGoal_Request;
  using Response = time_msgs::action::Time_SendGoal_Response;
};

}  // namespace action

}  // namespace time_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__time_msgs__action__Time_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__time_msgs__action__Time_GetResult_Request __declspec(deprecated)
#endif

namespace time_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Time_GetResult_Request_
{
  using Type = Time_GetResult_Request_<ContainerAllocator>;

  explicit Time_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Time_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    time_msgs::action::Time_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const time_msgs::action::Time_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<time_msgs::action::Time_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<time_msgs::action::Time_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      time_msgs::action::Time_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<time_msgs::action::Time_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      time_msgs::action::Time_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<time_msgs::action::Time_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<time_msgs::action::Time_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<time_msgs::action::Time_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__time_msgs__action__Time_GetResult_Request
    std::shared_ptr<time_msgs::action::Time_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__time_msgs__action__Time_GetResult_Request
    std::shared_ptr<time_msgs::action::Time_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Time_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Time_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Time_GetResult_Request_

// alias to use template instance with default allocator
using Time_GetResult_Request =
  time_msgs::action::Time_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace time_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "time_msgs/action/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__time_msgs__action__Time_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__time_msgs__action__Time_GetResult_Response __declspec(deprecated)
#endif

namespace time_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Time_GetResult_Response_
{
  using Type = Time_GetResult_Response_<ContainerAllocator>;

  explicit Time_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Time_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    time_msgs::action::Time_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const time_msgs::action::Time_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    time_msgs::action::Time_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const time_msgs::action::Time_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<time_msgs::action::Time_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<time_msgs::action::Time_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      time_msgs::action::Time_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<time_msgs::action::Time_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      time_msgs::action::Time_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<time_msgs::action::Time_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<time_msgs::action::Time_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<time_msgs::action::Time_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__time_msgs__action__Time_GetResult_Response
    std::shared_ptr<time_msgs::action::Time_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__time_msgs__action__Time_GetResult_Response
    std::shared_ptr<time_msgs::action::Time_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Time_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Time_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Time_GetResult_Response_

// alias to use template instance with default allocator
using Time_GetResult_Response =
  time_msgs::action::Time_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace time_msgs

namespace time_msgs
{

namespace action
{

struct Time_GetResult
{
  using Request = time_msgs::action::Time_GetResult_Request;
  using Response = time_msgs::action::Time_GetResult_Response;
};

}  // namespace action

}  // namespace time_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "time_msgs/action/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__time_msgs__action__Time_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__time_msgs__action__Time_FeedbackMessage __declspec(deprecated)
#endif

namespace time_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Time_FeedbackMessage_
{
  using Type = Time_FeedbackMessage_<ContainerAllocator>;

  explicit Time_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Time_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    time_msgs::action::Time_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const time_msgs::action::Time_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    time_msgs::action::Time_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const time_msgs::action::Time_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<time_msgs::action::Time_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<time_msgs::action::Time_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      time_msgs::action::Time_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<time_msgs::action::Time_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      time_msgs::action::Time_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<time_msgs::action::Time_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<time_msgs::action::Time_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<time_msgs::action::Time_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__time_msgs__action__Time_FeedbackMessage
    std::shared_ptr<time_msgs::action::Time_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__time_msgs__action__Time_FeedbackMessage
    std::shared_ptr<time_msgs::action::Time_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Time_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Time_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Time_FeedbackMessage_

// alias to use template instance with default allocator
using Time_FeedbackMessage =
  time_msgs::action::Time_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace time_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace time_msgs
{

namespace action
{

struct Time
{
  /// The goal message defined in the action definition.
  using Goal = time_msgs::action::Time_Goal;
  /// The result message defined in the action definition.
  using Result = time_msgs::action::Time_Result;
  /// The feedback message defined in the action definition.
  using Feedback = time_msgs::action::Time_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = time_msgs::action::Time_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = time_msgs::action::Time_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = time_msgs::action::Time_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Time Time;

}  // namespace action

}  // namespace time_msgs

#endif  // TIME_MSGS__ACTION__DETAIL__TIME__STRUCT_HPP_
