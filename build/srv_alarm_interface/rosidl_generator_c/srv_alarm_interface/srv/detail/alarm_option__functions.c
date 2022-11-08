// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from srv_alarm_interface:srv/AlarmOption.idl
// generated code does not contain a copyright notice
#include "srv_alarm_interface/srv/detail/alarm_option__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
srv_alarm_interface__srv__AlarmOption_Request__init(srv_alarm_interface__srv__AlarmOption_Request * msg)
{
  if (!msg) {
    return false;
  }
  // alarm_time_request
  // transport_time_request
  return true;
}

void
srv_alarm_interface__srv__AlarmOption_Request__fini(srv_alarm_interface__srv__AlarmOption_Request * msg)
{
  if (!msg) {
    return;
  }
  // alarm_time_request
  // transport_time_request
}

srv_alarm_interface__srv__AlarmOption_Request *
srv_alarm_interface__srv__AlarmOption_Request__create()
{
  srv_alarm_interface__srv__AlarmOption_Request * msg = (srv_alarm_interface__srv__AlarmOption_Request *)malloc(sizeof(srv_alarm_interface__srv__AlarmOption_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(srv_alarm_interface__srv__AlarmOption_Request));
  bool success = srv_alarm_interface__srv__AlarmOption_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
srv_alarm_interface__srv__AlarmOption_Request__destroy(srv_alarm_interface__srv__AlarmOption_Request * msg)
{
  if (msg) {
    srv_alarm_interface__srv__AlarmOption_Request__fini(msg);
  }
  free(msg);
}


bool
srv_alarm_interface__srv__AlarmOption_Request__Sequence__init(srv_alarm_interface__srv__AlarmOption_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  srv_alarm_interface__srv__AlarmOption_Request * data = NULL;
  if (size) {
    data = (srv_alarm_interface__srv__AlarmOption_Request *)calloc(size, sizeof(srv_alarm_interface__srv__AlarmOption_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = srv_alarm_interface__srv__AlarmOption_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        srv_alarm_interface__srv__AlarmOption_Request__fini(&data[i - 1]);
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
srv_alarm_interface__srv__AlarmOption_Request__Sequence__fini(srv_alarm_interface__srv__AlarmOption_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      srv_alarm_interface__srv__AlarmOption_Request__fini(&array->data[i]);
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

srv_alarm_interface__srv__AlarmOption_Request__Sequence *
srv_alarm_interface__srv__AlarmOption_Request__Sequence__create(size_t size)
{
  srv_alarm_interface__srv__AlarmOption_Request__Sequence * array = (srv_alarm_interface__srv__AlarmOption_Request__Sequence *)malloc(sizeof(srv_alarm_interface__srv__AlarmOption_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = srv_alarm_interface__srv__AlarmOption_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
srv_alarm_interface__srv__AlarmOption_Request__Sequence__destroy(srv_alarm_interface__srv__AlarmOption_Request__Sequence * array)
{
  if (array) {
    srv_alarm_interface__srv__AlarmOption_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `alarm_time_response`
// Member `transport_time_response`
#include "rosidl_runtime_c/string_functions.h"

bool
srv_alarm_interface__srv__AlarmOption_Response__init(srv_alarm_interface__srv__AlarmOption_Response * msg)
{
  if (!msg) {
    return false;
  }
  // alarm_time_response
  if (!rosidl_runtime_c__String__init(&msg->alarm_time_response)) {
    srv_alarm_interface__srv__AlarmOption_Response__fini(msg);
    return false;
  }
  // transport_time_response
  if (!rosidl_runtime_c__String__init(&msg->transport_time_response)) {
    srv_alarm_interface__srv__AlarmOption_Response__fini(msg);
    return false;
  }
  return true;
}

void
srv_alarm_interface__srv__AlarmOption_Response__fini(srv_alarm_interface__srv__AlarmOption_Response * msg)
{
  if (!msg) {
    return;
  }
  // alarm_time_response
  rosidl_runtime_c__String__fini(&msg->alarm_time_response);
  // transport_time_response
  rosidl_runtime_c__String__fini(&msg->transport_time_response);
}

srv_alarm_interface__srv__AlarmOption_Response *
srv_alarm_interface__srv__AlarmOption_Response__create()
{
  srv_alarm_interface__srv__AlarmOption_Response * msg = (srv_alarm_interface__srv__AlarmOption_Response *)malloc(sizeof(srv_alarm_interface__srv__AlarmOption_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(srv_alarm_interface__srv__AlarmOption_Response));
  bool success = srv_alarm_interface__srv__AlarmOption_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
srv_alarm_interface__srv__AlarmOption_Response__destroy(srv_alarm_interface__srv__AlarmOption_Response * msg)
{
  if (msg) {
    srv_alarm_interface__srv__AlarmOption_Response__fini(msg);
  }
  free(msg);
}


bool
srv_alarm_interface__srv__AlarmOption_Response__Sequence__init(srv_alarm_interface__srv__AlarmOption_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  srv_alarm_interface__srv__AlarmOption_Response * data = NULL;
  if (size) {
    data = (srv_alarm_interface__srv__AlarmOption_Response *)calloc(size, sizeof(srv_alarm_interface__srv__AlarmOption_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = srv_alarm_interface__srv__AlarmOption_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        srv_alarm_interface__srv__AlarmOption_Response__fini(&data[i - 1]);
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
srv_alarm_interface__srv__AlarmOption_Response__Sequence__fini(srv_alarm_interface__srv__AlarmOption_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      srv_alarm_interface__srv__AlarmOption_Response__fini(&array->data[i]);
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

srv_alarm_interface__srv__AlarmOption_Response__Sequence *
srv_alarm_interface__srv__AlarmOption_Response__Sequence__create(size_t size)
{
  srv_alarm_interface__srv__AlarmOption_Response__Sequence * array = (srv_alarm_interface__srv__AlarmOption_Response__Sequence *)malloc(sizeof(srv_alarm_interface__srv__AlarmOption_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = srv_alarm_interface__srv__AlarmOption_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
srv_alarm_interface__srv__AlarmOption_Response__Sequence__destroy(srv_alarm_interface__srv__AlarmOption_Response__Sequence * array)
{
  if (array) {
    srv_alarm_interface__srv__AlarmOption_Response__Sequence__fini(array);
  }
  free(array);
}
