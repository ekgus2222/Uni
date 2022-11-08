// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from time_msgs:action/Time.idl
// generated code does not contain a copyright notice

#ifndef TIME_MSGS__ACTION__DETAIL__TIME__TRAITS_HPP_
#define TIME_MSGS__ACTION__DETAIL__TIME__TRAITS_HPP_

#include "time_msgs/action/detail/time__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<time_msgs::action::Time_Goal>()
{
  return "time_msgs::action::Time_Goal";
}

template<>
inline const char * name<time_msgs::action::Time_Goal>()
{
  return "time_msgs/action/Time_Goal";
}

template<>
struct has_fixed_size<time_msgs::action::Time_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<time_msgs::action::Time_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<time_msgs::action::Time_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<time_msgs::action::Time_Result>()
{
  return "time_msgs::action::Time_Result";
}

template<>
inline const char * name<time_msgs::action::Time_Result>()
{
  return "time_msgs/action/Time_Result";
}

template<>
struct has_fixed_size<time_msgs::action::Time_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<time_msgs::action::Time_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<time_msgs::action::Time_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<time_msgs::action::Time_Feedback>()
{
  return "time_msgs::action::Time_Feedback";
}

template<>
inline const char * name<time_msgs::action::Time_Feedback>()
{
  return "time_msgs/action/Time_Feedback";
}

template<>
struct has_fixed_size<time_msgs::action::Time_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<time_msgs::action::Time_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<time_msgs::action::Time_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "time_msgs/action/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<time_msgs::action::Time_SendGoal_Request>()
{
  return "time_msgs::action::Time_SendGoal_Request";
}

template<>
inline const char * name<time_msgs::action::Time_SendGoal_Request>()
{
  return "time_msgs/action/Time_SendGoal_Request";
}

template<>
struct has_fixed_size<time_msgs::action::Time_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<time_msgs::action::Time_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<time_msgs::action::Time_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<time_msgs::action::Time_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<time_msgs::action::Time_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<time_msgs::action::Time_SendGoal_Response>()
{
  return "time_msgs::action::Time_SendGoal_Response";
}

template<>
inline const char * name<time_msgs::action::Time_SendGoal_Response>()
{
  return "time_msgs/action/Time_SendGoal_Response";
}

template<>
struct has_fixed_size<time_msgs::action::Time_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<time_msgs::action::Time_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<time_msgs::action::Time_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<time_msgs::action::Time_SendGoal>()
{
  return "time_msgs::action::Time_SendGoal";
}

template<>
inline const char * name<time_msgs::action::Time_SendGoal>()
{
  return "time_msgs/action/Time_SendGoal";
}

template<>
struct has_fixed_size<time_msgs::action::Time_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<time_msgs::action::Time_SendGoal_Request>::value &&
    has_fixed_size<time_msgs::action::Time_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<time_msgs::action::Time_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<time_msgs::action::Time_SendGoal_Request>::value &&
    has_bounded_size<time_msgs::action::Time_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<time_msgs::action::Time_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<time_msgs::action::Time_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<time_msgs::action::Time_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<time_msgs::action::Time_GetResult_Request>()
{
  return "time_msgs::action::Time_GetResult_Request";
}

template<>
inline const char * name<time_msgs::action::Time_GetResult_Request>()
{
  return "time_msgs/action/Time_GetResult_Request";
}

template<>
struct has_fixed_size<time_msgs::action::Time_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<time_msgs::action::Time_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<time_msgs::action::Time_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "time_msgs/action/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<time_msgs::action::Time_GetResult_Response>()
{
  return "time_msgs::action::Time_GetResult_Response";
}

template<>
inline const char * name<time_msgs::action::Time_GetResult_Response>()
{
  return "time_msgs/action/Time_GetResult_Response";
}

template<>
struct has_fixed_size<time_msgs::action::Time_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<time_msgs::action::Time_Result>::value> {};

template<>
struct has_bounded_size<time_msgs::action::Time_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<time_msgs::action::Time_Result>::value> {};

template<>
struct is_message<time_msgs::action::Time_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<time_msgs::action::Time_GetResult>()
{
  return "time_msgs::action::Time_GetResult";
}

template<>
inline const char * name<time_msgs::action::Time_GetResult>()
{
  return "time_msgs/action/Time_GetResult";
}

template<>
struct has_fixed_size<time_msgs::action::Time_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<time_msgs::action::Time_GetResult_Request>::value &&
    has_fixed_size<time_msgs::action::Time_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<time_msgs::action::Time_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<time_msgs::action::Time_GetResult_Request>::value &&
    has_bounded_size<time_msgs::action::Time_GetResult_Response>::value
  >
{
};

template<>
struct is_service<time_msgs::action::Time_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<time_msgs::action::Time_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<time_msgs::action::Time_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "time_msgs/action/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<time_msgs::action::Time_FeedbackMessage>()
{
  return "time_msgs::action::Time_FeedbackMessage";
}

template<>
inline const char * name<time_msgs::action::Time_FeedbackMessage>()
{
  return "time_msgs/action/Time_FeedbackMessage";
}

template<>
struct has_fixed_size<time_msgs::action::Time_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<time_msgs::action::Time_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<time_msgs::action::Time_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<time_msgs::action::Time_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<time_msgs::action::Time_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<time_msgs::action::Time>
  : std::true_type
{
};

template<>
struct is_action_goal<time_msgs::action::Time_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<time_msgs::action::Time_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<time_msgs::action::Time_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // TIME_MSGS__ACTION__DETAIL__TIME__TRAITS_HPP_
