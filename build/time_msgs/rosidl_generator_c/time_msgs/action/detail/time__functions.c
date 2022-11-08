// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from time_msgs:action/Time.idl
// generated code does not contain a copyright notice
#include "time_msgs/action/detail/time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
time_msgs__action__Time_Goal__init(time_msgs__action__Time_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // year
  // month
  // day
  // hour
  // minute
  // second
  return true;
}

void
time_msgs__action__Time_Goal__fini(time_msgs__action__Time_Goal * msg)
{
  if (!msg) {
    return;
  }
  // year
  // month
  // day
  // hour
  // minute
  // second
}

time_msgs__action__Time_Goal *
time_msgs__action__Time_Goal__create()
{
  time_msgs__action__Time_Goal * msg = (time_msgs__action__Time_Goal *)malloc(sizeof(time_msgs__action__Time_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(time_msgs__action__Time_Goal));
  bool success = time_msgs__action__Time_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
time_msgs__action__Time_Goal__destroy(time_msgs__action__Time_Goal * msg)
{
  if (msg) {
    time_msgs__action__Time_Goal__fini(msg);
  }
  free(msg);
}


bool
time_msgs__action__Time_Goal__Sequence__init(time_msgs__action__Time_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  time_msgs__action__Time_Goal * data = NULL;
  if (size) {
    data = (time_msgs__action__Time_Goal *)calloc(size, sizeof(time_msgs__action__Time_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = time_msgs__action__Time_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        time_msgs__action__Time_Goal__fini(&data[i - 1]);
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
time_msgs__action__Time_Goal__Sequence__fini(time_msgs__action__Time_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      time_msgs__action__Time_Goal__fini(&array->data[i]);
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

time_msgs__action__Time_Goal__Sequence *
time_msgs__action__Time_Goal__Sequence__create(size_t size)
{
  time_msgs__action__Time_Goal__Sequence * array = (time_msgs__action__Time_Goal__Sequence *)malloc(sizeof(time_msgs__action__Time_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = time_msgs__action__Time_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
time_msgs__action__Time_Goal__Sequence__destroy(time_msgs__action__Time_Goal__Sequence * array)
{
  if (array) {
    time_msgs__action__Time_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `current_time`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
time_msgs__action__Time_Result__init(time_msgs__action__Time_Result * msg)
{
  if (!msg) {
    return false;
  }
  // current_time
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->current_time, 0)) {
    time_msgs__action__Time_Result__fini(msg);
    return false;
  }
  return true;
}

void
time_msgs__action__Time_Result__fini(time_msgs__action__Time_Result * msg)
{
  if (!msg) {
    return;
  }
  // current_time
  rosidl_runtime_c__int32__Sequence__fini(&msg->current_time);
}

time_msgs__action__Time_Result *
time_msgs__action__Time_Result__create()
{
  time_msgs__action__Time_Result * msg = (time_msgs__action__Time_Result *)malloc(sizeof(time_msgs__action__Time_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(time_msgs__action__Time_Result));
  bool success = time_msgs__action__Time_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
time_msgs__action__Time_Result__destroy(time_msgs__action__Time_Result * msg)
{
  if (msg) {
    time_msgs__action__Time_Result__fini(msg);
  }
  free(msg);
}


bool
time_msgs__action__Time_Result__Sequence__init(time_msgs__action__Time_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  time_msgs__action__Time_Result * data = NULL;
  if (size) {
    data = (time_msgs__action__Time_Result *)calloc(size, sizeof(time_msgs__action__Time_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = time_msgs__action__Time_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        time_msgs__action__Time_Result__fini(&data[i - 1]);
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
time_msgs__action__Time_Result__Sequence__fini(time_msgs__action__Time_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      time_msgs__action__Time_Result__fini(&array->data[i]);
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

time_msgs__action__Time_Result__Sequence *
time_msgs__action__Time_Result__Sequence__create(size_t size)
{
  time_msgs__action__Time_Result__Sequence * array = (time_msgs__action__Time_Result__Sequence *)malloc(sizeof(time_msgs__action__Time_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = time_msgs__action__Time_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
time_msgs__action__Time_Result__Sequence__destroy(time_msgs__action__Time_Result__Sequence * array)
{
  if (array) {
    time_msgs__action__Time_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `response_time`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
time_msgs__action__Time_Feedback__init(time_msgs__action__Time_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // response_time
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->response_time, 0)) {
    time_msgs__action__Time_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
time_msgs__action__Time_Feedback__fini(time_msgs__action__Time_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // response_time
  rosidl_runtime_c__int32__Sequence__fini(&msg->response_time);
}

time_msgs__action__Time_Feedback *
time_msgs__action__Time_Feedback__create()
{
  time_msgs__action__Time_Feedback * msg = (time_msgs__action__Time_Feedback *)malloc(sizeof(time_msgs__action__Time_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(time_msgs__action__Time_Feedback));
  bool success = time_msgs__action__Time_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
time_msgs__action__Time_Feedback__destroy(time_msgs__action__Time_Feedback * msg)
{
  if (msg) {
    time_msgs__action__Time_Feedback__fini(msg);
  }
  free(msg);
}


bool
time_msgs__action__Time_Feedback__Sequence__init(time_msgs__action__Time_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  time_msgs__action__Time_Feedback * data = NULL;
  if (size) {
    data = (time_msgs__action__Time_Feedback *)calloc(size, sizeof(time_msgs__action__Time_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = time_msgs__action__Time_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        time_msgs__action__Time_Feedback__fini(&data[i - 1]);
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
time_msgs__action__Time_Feedback__Sequence__fini(time_msgs__action__Time_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      time_msgs__action__Time_Feedback__fini(&array->data[i]);
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

time_msgs__action__Time_Feedback__Sequence *
time_msgs__action__Time_Feedback__Sequence__create(size_t size)
{
  time_msgs__action__Time_Feedback__Sequence * array = (time_msgs__action__Time_Feedback__Sequence *)malloc(sizeof(time_msgs__action__Time_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = time_msgs__action__Time_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
time_msgs__action__Time_Feedback__Sequence__destroy(time_msgs__action__Time_Feedback__Sequence * array)
{
  if (array) {
    time_msgs__action__Time_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "time_msgs/action/detail/time__functions.h"

bool
time_msgs__action__Time_SendGoal_Request__init(time_msgs__action__Time_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    time_msgs__action__Time_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!time_msgs__action__Time_Goal__init(&msg->goal)) {
    time_msgs__action__Time_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
time_msgs__action__Time_SendGoal_Request__fini(time_msgs__action__Time_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  time_msgs__action__Time_Goal__fini(&msg->goal);
}

time_msgs__action__Time_SendGoal_Request *
time_msgs__action__Time_SendGoal_Request__create()
{
  time_msgs__action__Time_SendGoal_Request * msg = (time_msgs__action__Time_SendGoal_Request *)malloc(sizeof(time_msgs__action__Time_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(time_msgs__action__Time_SendGoal_Request));
  bool success = time_msgs__action__Time_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
time_msgs__action__Time_SendGoal_Request__destroy(time_msgs__action__Time_SendGoal_Request * msg)
{
  if (msg) {
    time_msgs__action__Time_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
time_msgs__action__Time_SendGoal_Request__Sequence__init(time_msgs__action__Time_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  time_msgs__action__Time_SendGoal_Request * data = NULL;
  if (size) {
    data = (time_msgs__action__Time_SendGoal_Request *)calloc(size, sizeof(time_msgs__action__Time_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = time_msgs__action__Time_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        time_msgs__action__Time_SendGoal_Request__fini(&data[i - 1]);
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
time_msgs__action__Time_SendGoal_Request__Sequence__fini(time_msgs__action__Time_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      time_msgs__action__Time_SendGoal_Request__fini(&array->data[i]);
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

time_msgs__action__Time_SendGoal_Request__Sequence *
time_msgs__action__Time_SendGoal_Request__Sequence__create(size_t size)
{
  time_msgs__action__Time_SendGoal_Request__Sequence * array = (time_msgs__action__Time_SendGoal_Request__Sequence *)malloc(sizeof(time_msgs__action__Time_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = time_msgs__action__Time_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
time_msgs__action__Time_SendGoal_Request__Sequence__destroy(time_msgs__action__Time_SendGoal_Request__Sequence * array)
{
  if (array) {
    time_msgs__action__Time_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
time_msgs__action__Time_SendGoal_Response__init(time_msgs__action__Time_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    time_msgs__action__Time_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
time_msgs__action__Time_SendGoal_Response__fini(time_msgs__action__Time_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

time_msgs__action__Time_SendGoal_Response *
time_msgs__action__Time_SendGoal_Response__create()
{
  time_msgs__action__Time_SendGoal_Response * msg = (time_msgs__action__Time_SendGoal_Response *)malloc(sizeof(time_msgs__action__Time_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(time_msgs__action__Time_SendGoal_Response));
  bool success = time_msgs__action__Time_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
time_msgs__action__Time_SendGoal_Response__destroy(time_msgs__action__Time_SendGoal_Response * msg)
{
  if (msg) {
    time_msgs__action__Time_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
time_msgs__action__Time_SendGoal_Response__Sequence__init(time_msgs__action__Time_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  time_msgs__action__Time_SendGoal_Response * data = NULL;
  if (size) {
    data = (time_msgs__action__Time_SendGoal_Response *)calloc(size, sizeof(time_msgs__action__Time_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = time_msgs__action__Time_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        time_msgs__action__Time_SendGoal_Response__fini(&data[i - 1]);
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
time_msgs__action__Time_SendGoal_Response__Sequence__fini(time_msgs__action__Time_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      time_msgs__action__Time_SendGoal_Response__fini(&array->data[i]);
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

time_msgs__action__Time_SendGoal_Response__Sequence *
time_msgs__action__Time_SendGoal_Response__Sequence__create(size_t size)
{
  time_msgs__action__Time_SendGoal_Response__Sequence * array = (time_msgs__action__Time_SendGoal_Response__Sequence *)malloc(sizeof(time_msgs__action__Time_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = time_msgs__action__Time_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
time_msgs__action__Time_SendGoal_Response__Sequence__destroy(time_msgs__action__Time_SendGoal_Response__Sequence * array)
{
  if (array) {
    time_msgs__action__Time_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
time_msgs__action__Time_GetResult_Request__init(time_msgs__action__Time_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    time_msgs__action__Time_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
time_msgs__action__Time_GetResult_Request__fini(time_msgs__action__Time_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

time_msgs__action__Time_GetResult_Request *
time_msgs__action__Time_GetResult_Request__create()
{
  time_msgs__action__Time_GetResult_Request * msg = (time_msgs__action__Time_GetResult_Request *)malloc(sizeof(time_msgs__action__Time_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(time_msgs__action__Time_GetResult_Request));
  bool success = time_msgs__action__Time_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
time_msgs__action__Time_GetResult_Request__destroy(time_msgs__action__Time_GetResult_Request * msg)
{
  if (msg) {
    time_msgs__action__Time_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
time_msgs__action__Time_GetResult_Request__Sequence__init(time_msgs__action__Time_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  time_msgs__action__Time_GetResult_Request * data = NULL;
  if (size) {
    data = (time_msgs__action__Time_GetResult_Request *)calloc(size, sizeof(time_msgs__action__Time_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = time_msgs__action__Time_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        time_msgs__action__Time_GetResult_Request__fini(&data[i - 1]);
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
time_msgs__action__Time_GetResult_Request__Sequence__fini(time_msgs__action__Time_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      time_msgs__action__Time_GetResult_Request__fini(&array->data[i]);
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

time_msgs__action__Time_GetResult_Request__Sequence *
time_msgs__action__Time_GetResult_Request__Sequence__create(size_t size)
{
  time_msgs__action__Time_GetResult_Request__Sequence * array = (time_msgs__action__Time_GetResult_Request__Sequence *)malloc(sizeof(time_msgs__action__Time_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = time_msgs__action__Time_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
time_msgs__action__Time_GetResult_Request__Sequence__destroy(time_msgs__action__Time_GetResult_Request__Sequence * array)
{
  if (array) {
    time_msgs__action__Time_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "time_msgs/action/detail/time__functions.h"

bool
time_msgs__action__Time_GetResult_Response__init(time_msgs__action__Time_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!time_msgs__action__Time_Result__init(&msg->result)) {
    time_msgs__action__Time_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
time_msgs__action__Time_GetResult_Response__fini(time_msgs__action__Time_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  time_msgs__action__Time_Result__fini(&msg->result);
}

time_msgs__action__Time_GetResult_Response *
time_msgs__action__Time_GetResult_Response__create()
{
  time_msgs__action__Time_GetResult_Response * msg = (time_msgs__action__Time_GetResult_Response *)malloc(sizeof(time_msgs__action__Time_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(time_msgs__action__Time_GetResult_Response));
  bool success = time_msgs__action__Time_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
time_msgs__action__Time_GetResult_Response__destroy(time_msgs__action__Time_GetResult_Response * msg)
{
  if (msg) {
    time_msgs__action__Time_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
time_msgs__action__Time_GetResult_Response__Sequence__init(time_msgs__action__Time_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  time_msgs__action__Time_GetResult_Response * data = NULL;
  if (size) {
    data = (time_msgs__action__Time_GetResult_Response *)calloc(size, sizeof(time_msgs__action__Time_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = time_msgs__action__Time_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        time_msgs__action__Time_GetResult_Response__fini(&data[i - 1]);
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
time_msgs__action__Time_GetResult_Response__Sequence__fini(time_msgs__action__Time_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      time_msgs__action__Time_GetResult_Response__fini(&array->data[i]);
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

time_msgs__action__Time_GetResult_Response__Sequence *
time_msgs__action__Time_GetResult_Response__Sequence__create(size_t size)
{
  time_msgs__action__Time_GetResult_Response__Sequence * array = (time_msgs__action__Time_GetResult_Response__Sequence *)malloc(sizeof(time_msgs__action__Time_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = time_msgs__action__Time_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
time_msgs__action__Time_GetResult_Response__Sequence__destroy(time_msgs__action__Time_GetResult_Response__Sequence * array)
{
  if (array) {
    time_msgs__action__Time_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "time_msgs/action/detail/time__functions.h"

bool
time_msgs__action__Time_FeedbackMessage__init(time_msgs__action__Time_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    time_msgs__action__Time_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!time_msgs__action__Time_Feedback__init(&msg->feedback)) {
    time_msgs__action__Time_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
time_msgs__action__Time_FeedbackMessage__fini(time_msgs__action__Time_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  time_msgs__action__Time_Feedback__fini(&msg->feedback);
}

time_msgs__action__Time_FeedbackMessage *
time_msgs__action__Time_FeedbackMessage__create()
{
  time_msgs__action__Time_FeedbackMessage * msg = (time_msgs__action__Time_FeedbackMessage *)malloc(sizeof(time_msgs__action__Time_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(time_msgs__action__Time_FeedbackMessage));
  bool success = time_msgs__action__Time_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
time_msgs__action__Time_FeedbackMessage__destroy(time_msgs__action__Time_FeedbackMessage * msg)
{
  if (msg) {
    time_msgs__action__Time_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
time_msgs__action__Time_FeedbackMessage__Sequence__init(time_msgs__action__Time_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  time_msgs__action__Time_FeedbackMessage * data = NULL;
  if (size) {
    data = (time_msgs__action__Time_FeedbackMessage *)calloc(size, sizeof(time_msgs__action__Time_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = time_msgs__action__Time_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        time_msgs__action__Time_FeedbackMessage__fini(&data[i - 1]);
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
time_msgs__action__Time_FeedbackMessage__Sequence__fini(time_msgs__action__Time_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      time_msgs__action__Time_FeedbackMessage__fini(&array->data[i]);
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

time_msgs__action__Time_FeedbackMessage__Sequence *
time_msgs__action__Time_FeedbackMessage__Sequence__create(size_t size)
{
  time_msgs__action__Time_FeedbackMessage__Sequence * array = (time_msgs__action__Time_FeedbackMessage__Sequence *)malloc(sizeof(time_msgs__action__Time_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = time_msgs__action__Time_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
time_msgs__action__Time_FeedbackMessage__Sequence__destroy(time_msgs__action__Time_FeedbackMessage__Sequence * array)
{
  if (array) {
    time_msgs__action__Time_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
