// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from myrobot_interfaces:msg/HWstatus.idl
// generated code does not contain a copyright notice

#ifndef MYROBOT_INTERFACES__MSG__DETAIL__H_WSTATUS__STRUCT_H_
#define MYROBOT_INTERFACES__MSG__DETAIL__H_WSTATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name_robot'
// Member 'debug_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HWstatus in the package myrobot_interfaces.
typedef struct myrobot_interfaces__msg__HWstatus
{
  rosidl_runtime_c__String name_robot;
  int64_t number_robot;
  int64_t temperature;
  bool motor;
  rosidl_runtime_c__String debug_message;
} myrobot_interfaces__msg__HWstatus;

// Struct for a sequence of myrobot_interfaces__msg__HWstatus.
typedef struct myrobot_interfaces__msg__HWstatus__Sequence
{
  myrobot_interfaces__msg__HWstatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myrobot_interfaces__msg__HWstatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYROBOT_INTERFACES__MSG__DETAIL__H_WSTATUS__STRUCT_H_
