// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from time_msgs:action/Time.idl
// generated code does not contain a copyright notice

#ifndef TIME_MSGS__ACTION__DETAIL__TIME__FUNCTIONS_H_
#define TIME_MSGS__ACTION__DETAIL__TIME__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "time_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "time_msgs/action/detail/time__struct.h"

/// Initialize action/Time message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * time_msgs__action__Time_Goal
 * )) before or use
 * time_msgs__action__Time_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__action__Time_Goal__init(time_msgs__action__Time_Goal * msg);

/// Finalize action/Time message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_Goal__fini(time_msgs__action__Time_Goal * msg);

/// Create action/Time message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * time_msgs__action__Time_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__action__Time_Goal *
time_msgs__action__Time_Goal__create();

/// Destroy action/Time message.
/**
 * It calls
 * time_msgs__action__Time_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_Goal__destroy(time_msgs__action__Time_Goal * msg);


/// Initialize array of action/Time messages.
/**
 * It allocates the memory for the number of elements and calls
 * time_msgs__action__Time_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__action__Time_Goal__Sequence__init(time_msgs__action__Time_Goal__Sequence * array, size_t size);

/// Finalize array of action/Time messages.
/**
 * It calls
 * time_msgs__action__Time_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_Goal__Sequence__fini(time_msgs__action__Time_Goal__Sequence * array);

/// Create array of action/Time messages.
/**
 * It allocates the memory for the array and calls
 * time_msgs__action__Time_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__action__Time_Goal__Sequence *
time_msgs__action__Time_Goal__Sequence__create(size_t size);

/// Destroy array of action/Time messages.
/**
 * It calls
 * time_msgs__action__Time_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_Goal__Sequence__destroy(time_msgs__action__Time_Goal__Sequence * array);

/// Initialize action/Time message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * time_msgs__action__Time_Result
 * )) before or use
 * time_msgs__action__Time_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__action__Time_Result__init(time_msgs__action__Time_Result * msg);

/// Finalize action/Time message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_Result__fini(time_msgs__action__Time_Result * msg);

/// Create action/Time message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * time_msgs__action__Time_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__action__Time_Result *
time_msgs__action__Time_Result__create();

/// Destroy action/Time message.
/**
 * It calls
 * time_msgs__action__Time_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_Result__destroy(time_msgs__action__Time_Result * msg);


/// Initialize array of action/Time messages.
/**
 * It allocates the memory for the number of elements and calls
 * time_msgs__action__Time_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__action__Time_Result__Sequence__init(time_msgs__action__Time_Result__Sequence * array, size_t size);

/// Finalize array of action/Time messages.
/**
 * It calls
 * time_msgs__action__Time_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_Result__Sequence__fini(time_msgs__action__Time_Result__Sequence * array);

/// Create array of action/Time messages.
/**
 * It allocates the memory for the array and calls
 * time_msgs__action__Time_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__action__Time_Result__Sequence *
time_msgs__action__Time_Result__Sequence__create(size_t size);

/// Destroy array of action/Time messages.
/**
 * It calls
 * time_msgs__action__Time_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_Result__Sequence__destroy(time_msgs__action__Time_Result__Sequence * array);

/// Initialize action/Time message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * time_msgs__action__Time_Feedback
 * )) before or use
 * time_msgs__action__Time_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__action__Time_Feedback__init(time_msgs__action__Time_Feedback * msg);

/// Finalize action/Time message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_Feedback__fini(time_msgs__action__Time_Feedback * msg);

/// Create action/Time message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * time_msgs__action__Time_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__action__Time_Feedback *
time_msgs__action__Time_Feedback__create();

/// Destroy action/Time message.
/**
 * It calls
 * time_msgs__action__Time_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_Feedback__destroy(time_msgs__action__Time_Feedback * msg);


/// Initialize array of action/Time messages.
/**
 * It allocates the memory for the number of elements and calls
 * time_msgs__action__Time_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__action__Time_Feedback__Sequence__init(time_msgs__action__Time_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Time messages.
/**
 * It calls
 * time_msgs__action__Time_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_Feedback__Sequence__fini(time_msgs__action__Time_Feedback__Sequence * array);

/// Create array of action/Time messages.
/**
 * It allocates the memory for the array and calls
 * time_msgs__action__Time_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__action__Time_Feedback__Sequence *
time_msgs__action__Time_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Time messages.
/**
 * It calls
 * time_msgs__action__Time_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_Feedback__Sequence__destroy(time_msgs__action__Time_Feedback__Sequence * array);

/// Initialize action/Time message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * time_msgs__action__Time_SendGoal_Request
 * )) before or use
 * time_msgs__action__Time_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__action__Time_SendGoal_Request__init(time_msgs__action__Time_SendGoal_Request * msg);

/// Finalize action/Time message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_SendGoal_Request__fini(time_msgs__action__Time_SendGoal_Request * msg);

/// Create action/Time message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * time_msgs__action__Time_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__action__Time_SendGoal_Request *
time_msgs__action__Time_SendGoal_Request__create();

/// Destroy action/Time message.
/**
 * It calls
 * time_msgs__action__Time_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_SendGoal_Request__destroy(time_msgs__action__Time_SendGoal_Request * msg);


/// Initialize array of action/Time messages.
/**
 * It allocates the memory for the number of elements and calls
 * time_msgs__action__Time_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__action__Time_SendGoal_Request__Sequence__init(time_msgs__action__Time_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Time messages.
/**
 * It calls
 * time_msgs__action__Time_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_SendGoal_Request__Sequence__fini(time_msgs__action__Time_SendGoal_Request__Sequence * array);

/// Create array of action/Time messages.
/**
 * It allocates the memory for the array and calls
 * time_msgs__action__Time_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__action__Time_SendGoal_Request__Sequence *
time_msgs__action__Time_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Time messages.
/**
 * It calls
 * time_msgs__action__Time_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_SendGoal_Request__Sequence__destroy(time_msgs__action__Time_SendGoal_Request__Sequence * array);

/// Initialize action/Time message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * time_msgs__action__Time_SendGoal_Response
 * )) before or use
 * time_msgs__action__Time_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__action__Time_SendGoal_Response__init(time_msgs__action__Time_SendGoal_Response * msg);

/// Finalize action/Time message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_SendGoal_Response__fini(time_msgs__action__Time_SendGoal_Response * msg);

/// Create action/Time message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * time_msgs__action__Time_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__action__Time_SendGoal_Response *
time_msgs__action__Time_SendGoal_Response__create();

/// Destroy action/Time message.
/**
 * It calls
 * time_msgs__action__Time_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_SendGoal_Response__destroy(time_msgs__action__Time_SendGoal_Response * msg);


/// Initialize array of action/Time messages.
/**
 * It allocates the memory for the number of elements and calls
 * time_msgs__action__Time_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__action__Time_SendGoal_Response__Sequence__init(time_msgs__action__Time_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Time messages.
/**
 * It calls
 * time_msgs__action__Time_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_SendGoal_Response__Sequence__fini(time_msgs__action__Time_SendGoal_Response__Sequence * array);

/// Create array of action/Time messages.
/**
 * It allocates the memory for the array and calls
 * time_msgs__action__Time_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__action__Time_SendGoal_Response__Sequence *
time_msgs__action__Time_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Time messages.
/**
 * It calls
 * time_msgs__action__Time_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_SendGoal_Response__Sequence__destroy(time_msgs__action__Time_SendGoal_Response__Sequence * array);

/// Initialize action/Time message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * time_msgs__action__Time_GetResult_Request
 * )) before or use
 * time_msgs__action__Time_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__action__Time_GetResult_Request__init(time_msgs__action__Time_GetResult_Request * msg);

/// Finalize action/Time message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_GetResult_Request__fini(time_msgs__action__Time_GetResult_Request * msg);

/// Create action/Time message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * time_msgs__action__Time_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__action__Time_GetResult_Request *
time_msgs__action__Time_GetResult_Request__create();

/// Destroy action/Time message.
/**
 * It calls
 * time_msgs__action__Time_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_GetResult_Request__destroy(time_msgs__action__Time_GetResult_Request * msg);


/// Initialize array of action/Time messages.
/**
 * It allocates the memory for the number of elements and calls
 * time_msgs__action__Time_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__action__Time_GetResult_Request__Sequence__init(time_msgs__action__Time_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Time messages.
/**
 * It calls
 * time_msgs__action__Time_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_GetResult_Request__Sequence__fini(time_msgs__action__Time_GetResult_Request__Sequence * array);

/// Create array of action/Time messages.
/**
 * It allocates the memory for the array and calls
 * time_msgs__action__Time_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__action__Time_GetResult_Request__Sequence *
time_msgs__action__Time_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Time messages.
/**
 * It calls
 * time_msgs__action__Time_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_GetResult_Request__Sequence__destroy(time_msgs__action__Time_GetResult_Request__Sequence * array);

/// Initialize action/Time message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * time_msgs__action__Time_GetResult_Response
 * )) before or use
 * time_msgs__action__Time_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__action__Time_GetResult_Response__init(time_msgs__action__Time_GetResult_Response * msg);

/// Finalize action/Time message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_GetResult_Response__fini(time_msgs__action__Time_GetResult_Response * msg);

/// Create action/Time message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * time_msgs__action__Time_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__action__Time_GetResult_Response *
time_msgs__action__Time_GetResult_Response__create();

/// Destroy action/Time message.
/**
 * It calls
 * time_msgs__action__Time_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_GetResult_Response__destroy(time_msgs__action__Time_GetResult_Response * msg);


/// Initialize array of action/Time messages.
/**
 * It allocates the memory for the number of elements and calls
 * time_msgs__action__Time_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__action__Time_GetResult_Response__Sequence__init(time_msgs__action__Time_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Time messages.
/**
 * It calls
 * time_msgs__action__Time_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_GetResult_Response__Sequence__fini(time_msgs__action__Time_GetResult_Response__Sequence * array);

/// Create array of action/Time messages.
/**
 * It allocates the memory for the array and calls
 * time_msgs__action__Time_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__action__Time_GetResult_Response__Sequence *
time_msgs__action__Time_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Time messages.
/**
 * It calls
 * time_msgs__action__Time_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_GetResult_Response__Sequence__destroy(time_msgs__action__Time_GetResult_Response__Sequence * array);

/// Initialize action/Time message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * time_msgs__action__Time_FeedbackMessage
 * )) before or use
 * time_msgs__action__Time_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__action__Time_FeedbackMessage__init(time_msgs__action__Time_FeedbackMessage * msg);

/// Finalize action/Time message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_FeedbackMessage__fini(time_msgs__action__Time_FeedbackMessage * msg);

/// Create action/Time message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * time_msgs__action__Time_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__action__Time_FeedbackMessage *
time_msgs__action__Time_FeedbackMessage__create();

/// Destroy action/Time message.
/**
 * It calls
 * time_msgs__action__Time_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_FeedbackMessage__destroy(time_msgs__action__Time_FeedbackMessage * msg);


/// Initialize array of action/Time messages.
/**
 * It allocates the memory for the number of elements and calls
 * time_msgs__action__Time_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__action__Time_FeedbackMessage__Sequence__init(time_msgs__action__Time_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Time messages.
/**
 * It calls
 * time_msgs__action__Time_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_FeedbackMessage__Sequence__fini(time_msgs__action__Time_FeedbackMessage__Sequence * array);

/// Create array of action/Time messages.
/**
 * It allocates the memory for the array and calls
 * time_msgs__action__Time_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__action__Time_FeedbackMessage__Sequence *
time_msgs__action__Time_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Time messages.
/**
 * It calls
 * time_msgs__action__Time_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__action__Time_FeedbackMessage__Sequence__destroy(time_msgs__action__Time_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TIME_MSGS__ACTION__DETAIL__TIME__FUNCTIONS_H_
