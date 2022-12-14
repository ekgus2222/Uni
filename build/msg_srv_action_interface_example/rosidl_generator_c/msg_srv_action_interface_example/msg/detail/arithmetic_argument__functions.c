// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_srv_action_interface_example:msg/ArithmeticArgument.idl
// generated code does not contain a copyright notice
#include "msg_srv_action_interface_example/msg/detail/arithmetic_argument__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
msg_srv_action_interface_example__msg__ArithmeticArgument__init(msg_srv_action_interface_example__msg__ArithmeticArgument * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    msg_srv_action_interface_example__msg__ArithmeticArgument__fini(msg);
    return false;
  }
  // argument_a
  // argument_b
  return true;
}

void
msg_srv_action_interface_example__msg__ArithmeticArgument__fini(msg_srv_action_interface_example__msg__ArithmeticArgument * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // argument_a
  // argument_b
}

msg_srv_action_interface_example__msg__ArithmeticArgument *
msg_srv_action_interface_example__msg__ArithmeticArgument__create()
{
  msg_srv_action_interface_example__msg__ArithmeticArgument * msg = (msg_srv_action_interface_example__msg__ArithmeticArgument *)malloc(sizeof(msg_srv_action_interface_example__msg__ArithmeticArgument));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_srv_action_interface_example__msg__ArithmeticArgument));
  bool success = msg_srv_action_interface_example__msg__ArithmeticArgument__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_srv_action_interface_example__msg__ArithmeticArgument__destroy(msg_srv_action_interface_example__msg__ArithmeticArgument * msg)
{
  if (msg) {
    msg_srv_action_interface_example__msg__ArithmeticArgument__fini(msg);
  }
  free(msg);
}


bool
msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence__init(msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_srv_action_interface_example__msg__ArithmeticArgument * data = NULL;
  if (size) {
    data = (msg_srv_action_interface_example__msg__ArithmeticArgument *)calloc(size, sizeof(msg_srv_action_interface_example__msg__ArithmeticArgument));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_srv_action_interface_example__msg__ArithmeticArgument__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_srv_action_interface_example__msg__ArithmeticArgument__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence__fini(msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_srv_action_interface_example__msg__ArithmeticArgument__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence *
msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence__create(size_t size)
{
  msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence * array = (msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence *)malloc(sizeof(msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence__destroy(msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence * array)
{
  if (array) {
    msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence__fini(array);
  }
  free(array);
}
