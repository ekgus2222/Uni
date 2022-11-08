// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from msg_srv_action_interface_example:action/ArithmeticChecker.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_EXAMPLE__ACTION__DETAIL__ARITHMETIC_CHECKER__FUNCTIONS_H_
#define MSG_SRV_ACTION_INTERFACE_EXAMPLE__ACTION__DETAIL__ARITHMETIC_CHECKER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "msg_srv_action_interface_example/msg/rosidl_generator_c__visibility_control.h"

#include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.h"

/// Initialize action/ArithmeticChecker message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_srv_action_interface_example__action__ArithmeticChecker_Goal
 * )) before or use
 * msg_srv_action_interface_example__action__ArithmeticChecker_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__init(msg_srv_action_interface_example__action__ArithmeticChecker_Goal * msg);

/// Finalize action/ArithmeticChecker message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__fini(msg_srv_action_interface_example__action__ArithmeticChecker_Goal * msg);

/// Create action/ArithmeticChecker message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
msg_srv_action_interface_example__action__ArithmeticChecker_Goal *
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__create();

/// Destroy action/ArithmeticChecker message.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_Goal * msg);


/// Initialize array of action/ArithmeticChecker messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence * array, size_t size);

/// Finalize array of action/ArithmeticChecker messages.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence * array);

/// Create array of action/ArithmeticChecker messages.
/**
 * It allocates the memory for the array and calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__create(size_t size);

/// Destroy array of action/ArithmeticChecker messages.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence * array);

/// Initialize action/ArithmeticChecker message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_srv_action_interface_example__action__ArithmeticChecker_Result
 * )) before or use
 * msg_srv_action_interface_example__action__ArithmeticChecker_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__action__ArithmeticChecker_Result__init(msg_srv_action_interface_example__action__ArithmeticChecker_Result * msg);

/// Finalize action/ArithmeticChecker message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_Result__fini(msg_srv_action_interface_example__action__ArithmeticChecker_Result * msg);

/// Create action/ArithmeticChecker message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
msg_srv_action_interface_example__action__ArithmeticChecker_Result *
msg_srv_action_interface_example__action__ArithmeticChecker_Result__create();

/// Destroy action/ArithmeticChecker message.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_Result__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_Result * msg);


/// Initialize array of action/ArithmeticChecker messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence * array, size_t size);

/// Finalize array of action/ArithmeticChecker messages.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence * array);

/// Create array of action/ArithmeticChecker messages.
/**
 * It allocates the memory for the array and calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__create(size_t size);

/// Destroy array of action/ArithmeticChecker messages.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence * array);

/// Initialize action/ArithmeticChecker message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_srv_action_interface_example__action__ArithmeticChecker_Feedback
 * )) before or use
 * msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__init(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback * msg);

/// Finalize action/ArithmeticChecker message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__fini(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback * msg);

/// Create action/ArithmeticChecker message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback *
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__create();

/// Destroy action/ArithmeticChecker message.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback * msg);


/// Initialize array of action/ArithmeticChecker messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ArithmeticChecker messages.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence * array);

/// Create array of action/ArithmeticChecker messages.
/**
 * It allocates the memory for the array and calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ArithmeticChecker messages.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence * array);

/// Initialize action/ArithmeticChecker message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request
 * )) before or use
 * msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__init(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request * msg);

/// Finalize action/ArithmeticChecker message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__fini(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request * msg);

/// Create action/ArithmeticChecker message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request *
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__create();

/// Destroy action/ArithmeticChecker message.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request * msg);


/// Initialize array of action/ArithmeticChecker messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ArithmeticChecker messages.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence * array);

/// Create array of action/ArithmeticChecker messages.
/**
 * It allocates the memory for the array and calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ArithmeticChecker messages.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence * array);

/// Initialize action/ArithmeticChecker message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response
 * )) before or use
 * msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__init(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response * msg);

/// Finalize action/ArithmeticChecker message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__fini(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response * msg);

/// Create action/ArithmeticChecker message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response *
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__create();

/// Destroy action/ArithmeticChecker message.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response * msg);


/// Initialize array of action/ArithmeticChecker messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ArithmeticChecker messages.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence * array);

/// Create array of action/ArithmeticChecker messages.
/**
 * It allocates the memory for the array and calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ArithmeticChecker messages.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence * array);

/// Initialize action/ArithmeticChecker message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request
 * )) before or use
 * msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__init(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request * msg);

/// Finalize action/ArithmeticChecker message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__fini(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request * msg);

/// Create action/ArithmeticChecker message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request *
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__create();

/// Destroy action/ArithmeticChecker message.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request * msg);


/// Initialize array of action/ArithmeticChecker messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ArithmeticChecker messages.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence * array);

/// Create array of action/ArithmeticChecker messages.
/**
 * It allocates the memory for the array and calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ArithmeticChecker messages.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence * array);

/// Initialize action/ArithmeticChecker message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response
 * )) before or use
 * msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__init(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response * msg);

/// Finalize action/ArithmeticChecker message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__fini(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response * msg);

/// Create action/ArithmeticChecker message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response *
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__create();

/// Destroy action/ArithmeticChecker message.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response * msg);


/// Initialize array of action/ArithmeticChecker messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ArithmeticChecker messages.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence * array);

/// Create array of action/ArithmeticChecker messages.
/**
 * It allocates the memory for the array and calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ArithmeticChecker messages.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence * array);

/// Initialize action/ArithmeticChecker message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage
 * )) before or use
 * msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__init(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage * msg);

/// Finalize action/ArithmeticChecker message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__fini(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage * msg);

/// Create action/ArithmeticChecker message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage *
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__create();

/// Destroy action/ArithmeticChecker message.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage * msg);


/// Initialize array of action/ArithmeticChecker messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
bool
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ArithmeticChecker messages.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence * array);

/// Create array of action/ArithmeticChecker messages.
/**
 * It allocates the memory for the array and calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ArithmeticChecker messages.
/**
 * It calls
 * msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_action_interface_example
void
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MSG_SRV_ACTION_INTERFACE_EXAMPLE__ACTION__DETAIL__ARITHMETIC_CHECKER__FUNCTIONS_H_
