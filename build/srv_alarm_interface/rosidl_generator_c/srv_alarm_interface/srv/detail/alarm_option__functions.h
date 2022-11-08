// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from srv_alarm_interface:srv/AlarmOption.idl
// generated code does not contain a copyright notice

#ifndef SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM_OPTION__FUNCTIONS_H_
#define SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM_OPTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "srv_alarm_interface/msg/rosidl_generator_c__visibility_control.h"

#include "srv_alarm_interface/srv/detail/alarm_option__struct.h"

/// Initialize srv/AlarmOption message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * srv_alarm_interface__srv__AlarmOption_Request
 * )) before or use
 * srv_alarm_interface__srv__AlarmOption_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_alarm_interface
bool
srv_alarm_interface__srv__AlarmOption_Request__init(srv_alarm_interface__srv__AlarmOption_Request * msg);

/// Finalize srv/AlarmOption message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_alarm_interface
void
srv_alarm_interface__srv__AlarmOption_Request__fini(srv_alarm_interface__srv__AlarmOption_Request * msg);

/// Create srv/AlarmOption message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * srv_alarm_interface__srv__AlarmOption_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_alarm_interface
srv_alarm_interface__srv__AlarmOption_Request *
srv_alarm_interface__srv__AlarmOption_Request__create();

/// Destroy srv/AlarmOption message.
/**
 * It calls
 * srv_alarm_interface__srv__AlarmOption_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_alarm_interface
void
srv_alarm_interface__srv__AlarmOption_Request__destroy(srv_alarm_interface__srv__AlarmOption_Request * msg);


/// Initialize array of srv/AlarmOption messages.
/**
 * It allocates the memory for the number of elements and calls
 * srv_alarm_interface__srv__AlarmOption_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_alarm_interface
bool
srv_alarm_interface__srv__AlarmOption_Request__Sequence__init(srv_alarm_interface__srv__AlarmOption_Request__Sequence * array, size_t size);

/// Finalize array of srv/AlarmOption messages.
/**
 * It calls
 * srv_alarm_interface__srv__AlarmOption_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_alarm_interface
void
srv_alarm_interface__srv__AlarmOption_Request__Sequence__fini(srv_alarm_interface__srv__AlarmOption_Request__Sequence * array);

/// Create array of srv/AlarmOption messages.
/**
 * It allocates the memory for the array and calls
 * srv_alarm_interface__srv__AlarmOption_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_alarm_interface
srv_alarm_interface__srv__AlarmOption_Request__Sequence *
srv_alarm_interface__srv__AlarmOption_Request__Sequence__create(size_t size);

/// Destroy array of srv/AlarmOption messages.
/**
 * It calls
 * srv_alarm_interface__srv__AlarmOption_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_alarm_interface
void
srv_alarm_interface__srv__AlarmOption_Request__Sequence__destroy(srv_alarm_interface__srv__AlarmOption_Request__Sequence * array);

/// Initialize srv/AlarmOption message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * srv_alarm_interface__srv__AlarmOption_Response
 * )) before or use
 * srv_alarm_interface__srv__AlarmOption_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_alarm_interface
bool
srv_alarm_interface__srv__AlarmOption_Response__init(srv_alarm_interface__srv__AlarmOption_Response * msg);

/// Finalize srv/AlarmOption message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_alarm_interface
void
srv_alarm_interface__srv__AlarmOption_Response__fini(srv_alarm_interface__srv__AlarmOption_Response * msg);

/// Create srv/AlarmOption message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * srv_alarm_interface__srv__AlarmOption_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_alarm_interface
srv_alarm_interface__srv__AlarmOption_Response *
srv_alarm_interface__srv__AlarmOption_Response__create();

/// Destroy srv/AlarmOption message.
/**
 * It calls
 * srv_alarm_interface__srv__AlarmOption_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_alarm_interface
void
srv_alarm_interface__srv__AlarmOption_Response__destroy(srv_alarm_interface__srv__AlarmOption_Response * msg);


/// Initialize array of srv/AlarmOption messages.
/**
 * It allocates the memory for the number of elements and calls
 * srv_alarm_interface__srv__AlarmOption_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_alarm_interface
bool
srv_alarm_interface__srv__AlarmOption_Response__Sequence__init(srv_alarm_interface__srv__AlarmOption_Response__Sequence * array, size_t size);

/// Finalize array of srv/AlarmOption messages.
/**
 * It calls
 * srv_alarm_interface__srv__AlarmOption_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_alarm_interface
void
srv_alarm_interface__srv__AlarmOption_Response__Sequence__fini(srv_alarm_interface__srv__AlarmOption_Response__Sequence * array);

/// Create array of srv/AlarmOption messages.
/**
 * It allocates the memory for the array and calls
 * srv_alarm_interface__srv__AlarmOption_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_alarm_interface
srv_alarm_interface__srv__AlarmOption_Response__Sequence *
srv_alarm_interface__srv__AlarmOption_Response__Sequence__create(size_t size);

/// Destroy array of srv/AlarmOption messages.
/**
 * It calls
 * srv_alarm_interface__srv__AlarmOption_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srv_alarm_interface
void
srv_alarm_interface__srv__AlarmOption_Response__Sequence__destroy(srv_alarm_interface__srv__AlarmOption_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SRV_ALARM_INTERFACE__SRV__DETAIL__ALARM_OPTION__FUNCTIONS_H_
