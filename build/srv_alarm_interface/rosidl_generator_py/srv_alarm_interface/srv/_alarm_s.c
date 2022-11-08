// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from srv_alarm_interface:srv/Alarm.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "srv_alarm_interface/srv/detail/alarm__struct.h"
#include "srv_alarm_interface/srv/detail/alarm__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool srv_alarm_interface__srv__alarm__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("srv_alarm_interface.srv._alarm.Alarm_Request", full_classname_dest, 44) == 0);
  }
  srv_alarm_interface__srv__Alarm_Request * ros_message = _ros_message;
  {  // alarm_request
    PyObject * field = PyObject_GetAttrString(_pymsg, "alarm_request");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alarm_request = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * srv_alarm_interface__srv__alarm__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Alarm_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("srv_alarm_interface.srv._alarm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Alarm_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  srv_alarm_interface__srv__Alarm_Request * ros_message = (srv_alarm_interface__srv__Alarm_Request *)raw_ros_message;
  {  // alarm_request
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->alarm_request);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alarm_request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "srv_alarm_interface/srv/detail/alarm__struct.h"
// already included above
// #include "srv_alarm_interface/srv/detail/alarm__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool srv_alarm_interface__srv__alarm__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("srv_alarm_interface.srv._alarm.Alarm_Response", full_classname_dest, 45) == 0);
  }
  srv_alarm_interface__srv__Alarm_Response * ros_message = _ros_message;
  {  // alarm_response
    PyObject * field = PyObject_GetAttrString(_pymsg, "alarm_response");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->alarm_response, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * srv_alarm_interface__srv__alarm__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Alarm_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("srv_alarm_interface.srv._alarm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Alarm_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  srv_alarm_interface__srv__Alarm_Response * ros_message = (srv_alarm_interface__srv__Alarm_Response *)raw_ros_message;
  {  // alarm_response
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->alarm_response.data,
      strlen(ros_message->alarm_response.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "alarm_response", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
