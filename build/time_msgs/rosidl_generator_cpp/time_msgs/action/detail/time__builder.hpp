// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from time_msgs:action/Time.idl
// generated code does not contain a copyright notice

#ifndef TIME_MSGS__ACTION__DETAIL__TIME__BUILDER_HPP_
#define TIME_MSGS__ACTION__DETAIL__TIME__BUILDER_HPP_

#include "time_msgs/action/detail/time__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace time_msgs
{

namespace action
{

namespace builder
{

class Init_Time_Goal_second
{
public:
  explicit Init_Time_Goal_second(::time_msgs::action::Time_Goal & msg)
  : msg_(msg)
  {}
  ::time_msgs::action::Time_Goal second(::time_msgs::action::Time_Goal::_second_type arg)
  {
    msg_.second = std::move(arg);
    return std::move(msg_);
  }

private:
  ::time_msgs::action::Time_Goal msg_;
};

class Init_Time_Goal_minute
{
public:
  explicit Init_Time_Goal_minute(::time_msgs::action::Time_Goal & msg)
  : msg_(msg)
  {}
  Init_Time_Goal_second minute(::time_msgs::action::Time_Goal::_minute_type arg)
  {
    msg_.minute = std::move(arg);
    return Init_Time_Goal_second(msg_);
  }

private:
  ::time_msgs::action::Time_Goal msg_;
};

class Init_Time_Goal_hour
{
public:
  explicit Init_Time_Goal_hour(::time_msgs::action::Time_Goal & msg)
  : msg_(msg)
  {}
  Init_Time_Goal_minute hour(::time_msgs::action::Time_Goal::_hour_type arg)
  {
    msg_.hour = std::move(arg);
    return Init_Time_Goal_minute(msg_);
  }

private:
  ::time_msgs::action::Time_Goal msg_;
};

class Init_Time_Goal_day
{
public:
  explicit Init_Time_Goal_day(::time_msgs::action::Time_Goal & msg)
  : msg_(msg)
  {}
  Init_Time_Goal_hour day(::time_msgs::action::Time_Goal::_day_type arg)
  {
    msg_.day = std::move(arg);
    return Init_Time_Goal_hour(msg_);
  }

private:
  ::time_msgs::action::Time_Goal msg_;
};

class Init_Time_Goal_month
{
public:
  explicit Init_Time_Goal_month(::time_msgs::action::Time_Goal & msg)
  : msg_(msg)
  {}
  Init_Time_Goal_day month(::time_msgs::action::Time_Goal::_month_type arg)
  {
    msg_.month = std::move(arg);
    return Init_Time_Goal_day(msg_);
  }

private:
  ::time_msgs::action::Time_Goal msg_;
};

class Init_Time_Goal_year
{
public:
  Init_Time_Goal_year()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Time_Goal_month year(::time_msgs::action::Time_Goal::_year_type arg)
  {
    msg_.year = std::move(arg);
    return Init_Time_Goal_month(msg_);
  }

private:
  ::time_msgs::action::Time_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::time_msgs::action::Time_Goal>()
{
  return time_msgs::action::builder::Init_Time_Goal_year();
}

}  // namespace time_msgs


namespace time_msgs
{

namespace action
{

namespace builder
{

class Init_Time_Result_current_time
{
public:
  Init_Time_Result_current_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::time_msgs::action::Time_Result current_time(::time_msgs::action::Time_Result::_current_time_type arg)
  {
    msg_.current_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::time_msgs::action::Time_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::time_msgs::action::Time_Result>()
{
  return time_msgs::action::builder::Init_Time_Result_current_time();
}

}  // namespace time_msgs


namespace time_msgs
{

namespace action
{

namespace builder
{

class Init_Time_Feedback_response_time
{
public:
  Init_Time_Feedback_response_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::time_msgs::action::Time_Feedback response_time(::time_msgs::action::Time_Feedback::_response_time_type arg)
  {
    msg_.response_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::time_msgs::action::Time_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::time_msgs::action::Time_Feedback>()
{
  return time_msgs::action::builder::Init_Time_Feedback_response_time();
}

}  // namespace time_msgs


namespace time_msgs
{

namespace action
{

namespace builder
{

class Init_Time_SendGoal_Request_goal
{
public:
  explicit Init_Time_SendGoal_Request_goal(::time_msgs::action::Time_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::time_msgs::action::Time_SendGoal_Request goal(::time_msgs::action::Time_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::time_msgs::action::Time_SendGoal_Request msg_;
};

class Init_Time_SendGoal_Request_goal_id
{
public:
  Init_Time_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Time_SendGoal_Request_goal goal_id(::time_msgs::action::Time_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Time_SendGoal_Request_goal(msg_);
  }

private:
  ::time_msgs::action::Time_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::time_msgs::action::Time_SendGoal_Request>()
{
  return time_msgs::action::builder::Init_Time_SendGoal_Request_goal_id();
}

}  // namespace time_msgs


namespace time_msgs
{

namespace action
{

namespace builder
{

class Init_Time_SendGoal_Response_stamp
{
public:
  explicit Init_Time_SendGoal_Response_stamp(::time_msgs::action::Time_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::time_msgs::action::Time_SendGoal_Response stamp(::time_msgs::action::Time_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::time_msgs::action::Time_SendGoal_Response msg_;
};

class Init_Time_SendGoal_Response_accepted
{
public:
  Init_Time_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Time_SendGoal_Response_stamp accepted(::time_msgs::action::Time_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Time_SendGoal_Response_stamp(msg_);
  }

private:
  ::time_msgs::action::Time_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::time_msgs::action::Time_SendGoal_Response>()
{
  return time_msgs::action::builder::Init_Time_SendGoal_Response_accepted();
}

}  // namespace time_msgs


namespace time_msgs
{

namespace action
{

namespace builder
{

class Init_Time_GetResult_Request_goal_id
{
public:
  Init_Time_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::time_msgs::action::Time_GetResult_Request goal_id(::time_msgs::action::Time_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::time_msgs::action::Time_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::time_msgs::action::Time_GetResult_Request>()
{
  return time_msgs::action::builder::Init_Time_GetResult_Request_goal_id();
}

}  // namespace time_msgs


namespace time_msgs
{

namespace action
{

namespace builder
{

class Init_Time_GetResult_Response_result
{
public:
  explicit Init_Time_GetResult_Response_result(::time_msgs::action::Time_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::time_msgs::action::Time_GetResult_Response result(::time_msgs::action::Time_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::time_msgs::action::Time_GetResult_Response msg_;
};

class Init_Time_GetResult_Response_status
{
public:
  Init_Time_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Time_GetResult_Response_result status(::time_msgs::action::Time_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Time_GetResult_Response_result(msg_);
  }

private:
  ::time_msgs::action::Time_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::time_msgs::action::Time_GetResult_Response>()
{
  return time_msgs::action::builder::Init_Time_GetResult_Response_status();
}

}  // namespace time_msgs


namespace time_msgs
{

namespace action
{

namespace builder
{

class Init_Time_FeedbackMessage_feedback
{
public:
  explicit Init_Time_FeedbackMessage_feedback(::time_msgs::action::Time_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::time_msgs::action::Time_FeedbackMessage feedback(::time_msgs::action::Time_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::time_msgs::action::Time_FeedbackMessage msg_;
};

class Init_Time_FeedbackMessage_goal_id
{
public:
  Init_Time_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Time_FeedbackMessage_feedback goal_id(::time_msgs::action::Time_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Time_FeedbackMessage_feedback(msg_);
  }

private:
  ::time_msgs::action::Time_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::time_msgs::action::Time_FeedbackMessage>()
{
  return time_msgs::action::builder::Init_Time_FeedbackMessage_goal_id();
}

}  // namespace time_msgs

#endif  // TIME_MSGS__ACTION__DETAIL__TIME__BUILDER_HPP_
