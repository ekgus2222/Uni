// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from time_msgs:action/Time.idl
// generated code does not contain a copyright notice

#ifndef TIME_MSGS__ACTION__DETAIL__TIME__STRUCT_H_
#define TIME_MSGS__ACTION__DETAIL__TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Time in the package time_msgs.
typedef struct time_msgs__action__Time_Goal
{
  int32_t year;
  int32_t month;
  int32_t day;
  int32_t hour;
  int32_t minute;
  int32_t second;
} time_msgs__action__Time_Goal;

// Struct for a sequence of time_msgs__action__Time_Goal.
typedef struct time_msgs__action__Time_Goal__Sequence
{
  time_msgs__action__Time_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} time_msgs__action__Time_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_time'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/Time in the package time_msgs.
typedef struct time_msgs__action__Time_Result
{
  rosidl_runtime_c__int32__Sequence current_time;
} time_msgs__action__Time_Result;

// Struct for a sequence of time_msgs__action__Time_Result.
typedef struct time_msgs__action__Time_Result__Sequence
{
  time_msgs__action__Time_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} time_msgs__action__Time_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response_time'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/Time in the package time_msgs.
typedef struct time_msgs__action__Time_Feedback
{
  rosidl_runtime_c__int32__Sequence response_time;
} time_msgs__action__Time_Feedback;

// Struct for a sequence of time_msgs__action__Time_Feedback.
typedef struct time_msgs__action__Time_Feedback__Sequence
{
  time_msgs__action__Time_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} time_msgs__action__Time_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "time_msgs/action/detail/time__struct.h"

// Struct defined in action/Time in the package time_msgs.
typedef struct time_msgs__action__Time_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  time_msgs__action__Time_Goal goal;
} time_msgs__action__Time_SendGoal_Request;

// Struct for a sequence of time_msgs__action__Time_SendGoal_Request.
typedef struct time_msgs__action__Time_SendGoal_Request__Sequence
{
  time_msgs__action__Time_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} time_msgs__action__Time_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Time in the package time_msgs.
typedef struct time_msgs__action__Time_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} time_msgs__action__Time_SendGoal_Response;

// Struct for a sequence of time_msgs__action__Time_SendGoal_Response.
typedef struct time_msgs__action__Time_SendGoal_Response__Sequence
{
  time_msgs__action__Time_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} time_msgs__action__Time_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Time in the package time_msgs.
typedef struct time_msgs__action__Time_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} time_msgs__action__Time_GetResult_Request;

// Struct for a sequence of time_msgs__action__Time_GetResult_Request.
typedef struct time_msgs__action__Time_GetResult_Request__Sequence
{
  time_msgs__action__Time_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} time_msgs__action__Time_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "time_msgs/action/detail/time__struct.h"

// Struct defined in action/Time in the package time_msgs.
typedef struct time_msgs__action__Time_GetResult_Response
{
  int8_t status;
  time_msgs__action__Time_Result result;
} time_msgs__action__Time_GetResult_Response;

// Struct for a sequence of time_msgs__action__Time_GetResult_Response.
typedef struct time_msgs__action__Time_GetResult_Response__Sequence
{
  time_msgs__action__Time_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} time_msgs__action__Time_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "time_msgs/action/detail/time__struct.h"

// Struct defined in action/Time in the package time_msgs.
typedef struct time_msgs__action__Time_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  time_msgs__action__Time_Feedback feedback;
} time_msgs__action__Time_FeedbackMessage;

// Struct for a sequence of time_msgs__action__Time_FeedbackMessage.
typedef struct time_msgs__action__Time_FeedbackMessage__Sequence
{
  time_msgs__action__Time_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} time_msgs__action__Time_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIME_MSGS__ACTION__DETAIL__TIME__STRUCT_H_
