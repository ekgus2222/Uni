// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_srv_action_interface_example:action/ArithmeticChecker.idl
// generated code does not contain a copyright notice
#include "msg_srv_action_interface_example/action/detail/arithmetic_checker__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__init(msg_srv_action_interface_example__action__ArithmeticChecker_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // goal_sum
  return true;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__fini(msg_srv_action_interface_example__action__ArithmeticChecker_Goal * msg)
{
  if (!msg) {
    return;
  }
  // goal_sum
}

msg_srv_action_interface_example__action__ArithmeticChecker_Goal *
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__create()
{
  msg_srv_action_interface_example__action__ArithmeticChecker_Goal * msg = (msg_srv_action_interface_example__action__ArithmeticChecker_Goal *)malloc(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Goal));
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_Goal * msg)
{
  if (msg) {
    msg_srv_action_interface_example__action__ArithmeticChecker_Goal__fini(msg);
  }
  free(msg);
}


bool
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_srv_action_interface_example__action__ArithmeticChecker_Goal * data = NULL;
  if (size) {
    data = (msg_srv_action_interface_example__action__ArithmeticChecker_Goal *)calloc(size, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_srv_action_interface_example__action__ArithmeticChecker_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_srv_action_interface_example__action__ArithmeticChecker_Goal__fini(&data[i - 1]);
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
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_srv_action_interface_example__action__ArithmeticChecker_Goal__fini(&array->data[i]);
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

msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__create(size_t size)
{
  msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence * array = (msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence *)malloc(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence * array)
{
  if (array) {
    msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `all_formula`
#include "rosidl_runtime_c/string_functions.h"

bool
msg_srv_action_interface_example__action__ArithmeticChecker_Result__init(msg_srv_action_interface_example__action__ArithmeticChecker_Result * msg)
{
  if (!msg) {
    return false;
  }
  // all_formula
  if (!rosidl_runtime_c__String__Sequence__init(&msg->all_formula, 0)) {
    msg_srv_action_interface_example__action__ArithmeticChecker_Result__fini(msg);
    return false;
  }
  // total_sum
  return true;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_Result__fini(msg_srv_action_interface_example__action__ArithmeticChecker_Result * msg)
{
  if (!msg) {
    return;
  }
  // all_formula
  rosidl_runtime_c__String__Sequence__fini(&msg->all_formula);
  // total_sum
}

msg_srv_action_interface_example__action__ArithmeticChecker_Result *
msg_srv_action_interface_example__action__ArithmeticChecker_Result__create()
{
  msg_srv_action_interface_example__action__ArithmeticChecker_Result * msg = (msg_srv_action_interface_example__action__ArithmeticChecker_Result *)malloc(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Result));
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_Result__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_Result * msg)
{
  if (msg) {
    msg_srv_action_interface_example__action__ArithmeticChecker_Result__fini(msg);
  }
  free(msg);
}


bool
msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_srv_action_interface_example__action__ArithmeticChecker_Result * data = NULL;
  if (size) {
    data = (msg_srv_action_interface_example__action__ArithmeticChecker_Result *)calloc(size, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_srv_action_interface_example__action__ArithmeticChecker_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_srv_action_interface_example__action__ArithmeticChecker_Result__fini(&data[i - 1]);
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
msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_srv_action_interface_example__action__ArithmeticChecker_Result__fini(&array->data[i]);
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

msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__create(size_t size)
{
  msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence * array = (msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence *)malloc(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence * array)
{
  if (array) {
    msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `formula`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__init(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // formula
  if (!rosidl_runtime_c__String__Sequence__init(&msg->formula, 0)) {
    msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__fini(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // formula
  rosidl_runtime_c__String__Sequence__fini(&msg->formula);
}

msg_srv_action_interface_example__action__ArithmeticChecker_Feedback *
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__create()
{
  msg_srv_action_interface_example__action__ArithmeticChecker_Feedback * msg = (msg_srv_action_interface_example__action__ArithmeticChecker_Feedback *)malloc(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback));
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback * msg)
{
  if (msg) {
    msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__fini(msg);
  }
  free(msg);
}


bool
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_srv_action_interface_example__action__ArithmeticChecker_Feedback * data = NULL;
  if (size) {
    data = (msg_srv_action_interface_example__action__ArithmeticChecker_Feedback *)calloc(size, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__fini(&data[i - 1]);
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
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__fini(&array->data[i]);
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

msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__create(size_t size)
{
  msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence * array = (msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence *)malloc(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence * array)
{
  if (array) {
    msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__functions.h"

bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__init(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!msg_srv_action_interface_example__action__ArithmeticChecker_Goal__init(&msg->goal)) {
    msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__fini(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  msg_srv_action_interface_example__action__ArithmeticChecker_Goal__fini(&msg->goal);
}

msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request *
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__create()
{
  msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request * msg = (msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request *)malloc(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request));
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request * msg)
{
  if (msg) {
    msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request * data = NULL;
  if (size) {
    data = (msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request *)calloc(size, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__fini(&data[i - 1]);
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
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__fini(&array->data[i]);
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

msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__create(size_t size)
{
  msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence * array = (msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence *)malloc(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence * array)
{
  if (array) {
    msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__init(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__fini(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response *
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__create()
{
  msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response * msg = (msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response *)malloc(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response));
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response * msg)
{
  if (msg) {
    msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response * data = NULL;
  if (size) {
    data = (msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response *)calloc(size, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__fini(&data[i - 1]);
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
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__fini(&array->data[i]);
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

msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__create(size_t size)
{
  msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence * array = (msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence *)malloc(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence * array)
{
  if (array) {
    msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__init(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__fini(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request *
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__create()
{
  msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request * msg = (msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request *)malloc(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request));
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request * msg)
{
  if (msg) {
    msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request * data = NULL;
  if (size) {
    data = (msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request *)calloc(size, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__fini(&data[i - 1]);
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
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__fini(&array->data[i]);
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

msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__create(size_t size)
{
  msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence * array = (msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence *)malloc(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence * array)
{
  if (array) {
    msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__functions.h"

bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__init(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!msg_srv_action_interface_example__action__ArithmeticChecker_Result__init(&msg->result)) {
    msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__fini(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  msg_srv_action_interface_example__action__ArithmeticChecker_Result__fini(&msg->result);
}

msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response *
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__create()
{
  msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response * msg = (msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response *)malloc(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response));
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response * msg)
{
  if (msg) {
    msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response * data = NULL;
  if (size) {
    data = (msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response *)calloc(size, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__fini(&data[i - 1]);
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
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__fini(&array->data[i]);
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

msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__create(size_t size)
{
  msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence * array = (msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence *)malloc(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence * array)
{
  if (array) {
    msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__functions.h"

bool
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__init(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__init(&msg->feedback)) {
    msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__fini(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__fini(&msg->feedback);
}

msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage *
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__create()
{
  msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage * msg = (msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage *)malloc(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage));
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage * msg)
{
  if (msg) {
    msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage * data = NULL;
  if (size) {
    data = (msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage *)calloc(size, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__fini(&data[i - 1]);
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
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__fini(&array->data[i]);
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

msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__create(size_t size)
{
  msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence * array = (msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence *)malloc(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence * array)
{
  if (array) {
    msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
