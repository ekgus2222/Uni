// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from time_msgs:msg/Time.idl
// generated code does not contain a copyright notice
#include "time_msgs/msg/detail/time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `remained_time`
#include "rosidl_runtime_c/string_functions.h"

bool
time_msgs__msg__Time__init(time_msgs__msg__Time * msg)
{
  if (!msg) {
    return false;
  }
  // is_first_alarm
  // remained_time
  if (!rosidl_runtime_c__String__init(&msg->remained_time)) {
    time_msgs__msg__Time__fini(msg);
    return false;
  }
  return true;
}

void
time_msgs__msg__Time__fini(time_msgs__msg__Time * msg)
{
  if (!msg) {
    return;
  }
  // is_first_alarm
  // remained_time
  rosidl_runtime_c__String__fini(&msg->remained_time);
}

time_msgs__msg__Time *
time_msgs__msg__Time__create()
{
  time_msgs__msg__Time * msg = (time_msgs__msg__Time *)malloc(sizeof(time_msgs__msg__Time));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(time_msgs__msg__Time));
  bool success = time_msgs__msg__Time__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
time_msgs__msg__Time__destroy(time_msgs__msg__Time * msg)
{
  if (msg) {
    time_msgs__msg__Time__fini(msg);
  }
  free(msg);
}


bool
time_msgs__msg__Time__Sequence__init(time_msgs__msg__Time__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  time_msgs__msg__Time * data = NULL;
  if (size) {
    data = (time_msgs__msg__Time *)calloc(size, sizeof(time_msgs__msg__Time));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = time_msgs__msg__Time__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        time_msgs__msg__Time__fini(&data[i - 1]);
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
time_msgs__msg__Time__Sequence__fini(time_msgs__msg__Time__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      time_msgs__msg__Time__fini(&array->data[i]);
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

time_msgs__msg__Time__Sequence *
time_msgs__msg__Time__Sequence__create(size_t size)
{
  time_msgs__msg__Time__Sequence * array = (time_msgs__msg__Time__Sequence *)malloc(sizeof(time_msgs__msg__Time__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = time_msgs__msg__Time__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
time_msgs__msg__Time__Sequence__destroy(time_msgs__msg__Time__Sequence * array)
{
  if (array) {
    time_msgs__msg__Time__Sequence__fini(array);
  }
  free(array);
}
