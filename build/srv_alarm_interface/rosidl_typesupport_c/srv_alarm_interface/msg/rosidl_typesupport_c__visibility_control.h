// generated from
// rosidl_typesupport_c/resource/rosidl_typesupport_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef SRV_ALARM_INTERFACE__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_
#define SRV_ALARM_INTERFACE__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_C_EXPORT_srv_alarm_interface __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_C_IMPORT_srv_alarm_interface __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_C_EXPORT_srv_alarm_interface __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_C_IMPORT_srv_alarm_interface __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_C_BUILDING_DLL_srv_alarm_interface
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_srv_alarm_interface ROSIDL_TYPESUPPORT_C_EXPORT_srv_alarm_interface
  #else
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_srv_alarm_interface ROSIDL_TYPESUPPORT_C_IMPORT_srv_alarm_interface
  #endif
#else
  #define ROSIDL_TYPESUPPORT_C_EXPORT_srv_alarm_interface __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_C_IMPORT_srv_alarm_interface
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_srv_alarm_interface __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_srv_alarm_interface
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // SRV_ALARM_INTERFACE__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_
