// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from time_msgs:srv/Time.idl
// generated code does not contain a copyright notice
#include "time_msgs/srv/detail/time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `time_to_work`
// Member `home_address`
// Member `office_address`
// Member `required_time`
// Member `request`
#include "rosidl_runtime_c/string_functions.h"

bool
time_msgs__srv__Time_Request__init(time_msgs__srv__Time_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // time_to_work
  if (!rosidl_runtime_c__String__init(&msg->time_to_work)) {
    time_msgs__srv__Time_Request__fini(msg);
    return false;
  }
  // home_address
  if (!rosidl_runtime_c__String__init(&msg->home_address)) {
    time_msgs__srv__Time_Request__fini(msg);
    return false;
  }
  // office_address
  if (!rosidl_runtime_c__String__init(&msg->office_address)) {
    time_msgs__srv__Time_Request__fini(msg);
    return false;
  }
  // required_time
  if (!rosidl_runtime_c__String__init(&msg->required_time)) {
    time_msgs__srv__Time_Request__fini(msg);
    return false;
  }
  // required_time_cnt
  // request
  if (!rosidl_runtime_c__String__init(&msg->request)) {
    time_msgs__srv__Time_Request__fini(msg);
    return false;
  }
  return true;
}

void
time_msgs__srv__Time_Request__fini(time_msgs__srv__Time_Request * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // time_to_work
  rosidl_runtime_c__String__fini(&msg->time_to_work);
  // home_address
  rosidl_runtime_c__String__fini(&msg->home_address);
  // office_address
  rosidl_runtime_c__String__fini(&msg->office_address);
  // required_time
  rosidl_runtime_c__String__fini(&msg->required_time);
  // required_time_cnt
  // request
  rosidl_runtime_c__String__fini(&msg->request);
}

time_msgs__srv__Time_Request *
time_msgs__srv__Time_Request__create()
{
  time_msgs__srv__Time_Request * msg = (time_msgs__srv__Time_Request *)malloc(sizeof(time_msgs__srv__Time_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(time_msgs__srv__Time_Request));
  bool success = time_msgs__srv__Time_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
time_msgs__srv__Time_Request__destroy(time_msgs__srv__Time_Request * msg)
{
  if (msg) {
    time_msgs__srv__Time_Request__fini(msg);
  }
  free(msg);
}


bool
time_msgs__srv__Time_Request__Sequence__init(time_msgs__srv__Time_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  time_msgs__srv__Time_Request * data = NULL;
  if (size) {
    data = (time_msgs__srv__Time_Request *)calloc(size, sizeof(time_msgs__srv__Time_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = time_msgs__srv__Time_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        time_msgs__srv__Time_Request__fini(&data[i - 1]);
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
time_msgs__srv__Time_Request__Sequence__fini(time_msgs__srv__Time_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      time_msgs__srv__Time_Request__fini(&array->data[i]);
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

time_msgs__srv__Time_Request__Sequence *
time_msgs__srv__Time_Request__Sequence__create(size_t size)
{
  time_msgs__srv__Time_Request__Sequence * array = (time_msgs__srv__Time_Request__Sequence *)malloc(sizeof(time_msgs__srv__Time_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = time_msgs__srv__Time_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
time_msgs__srv__Time_Request__Sequence__destroy(time_msgs__srv__Time_Request__Sequence * array)
{
  if (array) {
    time_msgs__srv__Time_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `alarm_time_response`
// Member `transport_response`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
time_msgs__srv__Time_Response__init(time_msgs__srv__Time_Response * msg)
{
  if (!msg) {
    return false;
  }
  // alarm_time_response
  if (!rosidl_runtime_c__String__init(&msg->alarm_time_response)) {
    time_msgs__srv__Time_Response__fini(msg);
    return false;
  }
  // transport_response
  if (!rosidl_runtime_c__String__init(&msg->transport_response)) {
    time_msgs__srv__Time_Response__fini(msg);
    return false;
  }
  // test
  return true;
}

void
time_msgs__srv__Time_Response__fini(time_msgs__srv__Time_Response * msg)
{
  if (!msg) {
    return;
  }
  // alarm_time_response
  rosidl_runtime_c__String__fini(&msg->alarm_time_response);
  // transport_response
  rosidl_runtime_c__String__fini(&msg->transport_response);
  // test
}

time_msgs__srv__Time_Response *
time_msgs__srv__Time_Response__create()
{
  time_msgs__srv__Time_Response * msg = (time_msgs__srv__Time_Response *)malloc(sizeof(time_msgs__srv__Time_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(time_msgs__srv__Time_Response));
  bool success = time_msgs__srv__Time_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
time_msgs__srv__Time_Response__destroy(time_msgs__srv__Time_Response * msg)
{
  if (msg) {
    time_msgs__srv__Time_Response__fini(msg);
  }
  free(msg);
}


bool
time_msgs__srv__Time_Response__Sequence__init(time_msgs__srv__Time_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  time_msgs__srv__Time_Response * data = NULL;
  if (size) {
    data = (time_msgs__srv__Time_Response *)calloc(size, sizeof(time_msgs__srv__Time_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = time_msgs__srv__Time_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        time_msgs__srv__Time_Response__fini(&data[i - 1]);
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
time_msgs__srv__Time_Response__Sequence__fini(time_msgs__srv__Time_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      time_msgs__srv__Time_Response__fini(&array->data[i]);
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

time_msgs__srv__Time_Response__Sequence *
time_msgs__srv__Time_Response__Sequence__create(size_t size)
{
  time_msgs__srv__Time_Response__Sequence * array = (time_msgs__srv__Time_Response__Sequence *)malloc(sizeof(time_msgs__srv__Time_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = time_msgs__srv__Time_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
time_msgs__srv__Time_Response__Sequence__destroy(time_msgs__srv__Time_Response__Sequence * array)
{
  if (array) {
    time_msgs__srv__Time_Response__Sequence__fini(array);
  }
  free(array);
}
