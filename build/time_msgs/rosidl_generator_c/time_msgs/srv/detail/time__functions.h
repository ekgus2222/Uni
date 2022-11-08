// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from time_msgs:srv/Time.idl
// generated code does not contain a copyright notice

#ifndef TIME_MSGS__SRV__DETAIL__TIME__FUNCTIONS_H_
#define TIME_MSGS__SRV__DETAIL__TIME__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "time_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "time_msgs/srv/detail/time__struct.h"

/// Initialize srv/Time message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * time_msgs__srv__Time_Request
 * )) before or use
 * time_msgs__srv__Time_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__srv__Time_Request__init(time_msgs__srv__Time_Request * msg);

/// Finalize srv/Time message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__srv__Time_Request__fini(time_msgs__srv__Time_Request * msg);

/// Create srv/Time message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * time_msgs__srv__Time_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__srv__Time_Request *
time_msgs__srv__Time_Request__create();

/// Destroy srv/Time message.
/**
 * It calls
 * time_msgs__srv__Time_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__srv__Time_Request__destroy(time_msgs__srv__Time_Request * msg);


/// Initialize array of srv/Time messages.
/**
 * It allocates the memory for the number of elements and calls
 * time_msgs__srv__Time_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__srv__Time_Request__Sequence__init(time_msgs__srv__Time_Request__Sequence * array, size_t size);

/// Finalize array of srv/Time messages.
/**
 * It calls
 * time_msgs__srv__Time_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__srv__Time_Request__Sequence__fini(time_msgs__srv__Time_Request__Sequence * array);

/// Create array of srv/Time messages.
/**
 * It allocates the memory for the array and calls
 * time_msgs__srv__Time_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__srv__Time_Request__Sequence *
time_msgs__srv__Time_Request__Sequence__create(size_t size);

/// Destroy array of srv/Time messages.
/**
 * It calls
 * time_msgs__srv__Time_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__srv__Time_Request__Sequence__destroy(time_msgs__srv__Time_Request__Sequence * array);

/// Initialize srv/Time message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * time_msgs__srv__Time_Response
 * )) before or use
 * time_msgs__srv__Time_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__srv__Time_Response__init(time_msgs__srv__Time_Response * msg);

/// Finalize srv/Time message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__srv__Time_Response__fini(time_msgs__srv__Time_Response * msg);

/// Create srv/Time message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * time_msgs__srv__Time_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__srv__Time_Response *
time_msgs__srv__Time_Response__create();

/// Destroy srv/Time message.
/**
 * It calls
 * time_msgs__srv__Time_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__srv__Time_Response__destroy(time_msgs__srv__Time_Response * msg);


/// Initialize array of srv/Time messages.
/**
 * It allocates the memory for the number of elements and calls
 * time_msgs__srv__Time_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
bool
time_msgs__srv__Time_Response__Sequence__init(time_msgs__srv__Time_Response__Sequence * array, size_t size);

/// Finalize array of srv/Time messages.
/**
 * It calls
 * time_msgs__srv__Time_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__srv__Time_Response__Sequence__fini(time_msgs__srv__Time_Response__Sequence * array);

/// Create array of srv/Time messages.
/**
 * It allocates the memory for the array and calls
 * time_msgs__srv__Time_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
time_msgs__srv__Time_Response__Sequence *
time_msgs__srv__Time_Response__Sequence__create(size_t size);

/// Destroy array of srv/Time messages.
/**
 * It calls
 * time_msgs__srv__Time_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_msgs
void
time_msgs__srv__Time_Response__Sequence__destroy(time_msgs__srv__Time_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TIME_MSGS__SRV__DETAIL__TIME__FUNCTIONS_H_
