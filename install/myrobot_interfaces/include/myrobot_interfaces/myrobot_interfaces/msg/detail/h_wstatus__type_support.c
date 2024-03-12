// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from myrobot_interfaces:msg/HWstatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "myrobot_interfaces/msg/detail/h_wstatus__rosidl_typesupport_introspection_c.h"
#include "myrobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "myrobot_interfaces/msg/detail/h_wstatus__functions.h"
#include "myrobot_interfaces/msg/detail/h_wstatus__struct.h"


// Include directives for member types
// Member `name_robot`
// Member `debug_message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void myrobot_interfaces__msg__HWstatus__rosidl_typesupport_introspection_c__HWstatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  myrobot_interfaces__msg__HWstatus__init(message_memory);
}

void myrobot_interfaces__msg__HWstatus__rosidl_typesupport_introspection_c__HWstatus_fini_function(void * message_memory)
{
  myrobot_interfaces__msg__HWstatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember myrobot_interfaces__msg__HWstatus__rosidl_typesupport_introspection_c__HWstatus_message_member_array[5] = {
  {
    "name_robot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myrobot_interfaces__msg__HWstatus, name_robot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "number_robot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myrobot_interfaces__msg__HWstatus, number_robot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myrobot_interfaces__msg__HWstatus, temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myrobot_interfaces__msg__HWstatus, motor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "debug_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myrobot_interfaces__msg__HWstatus, debug_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers myrobot_interfaces__msg__HWstatus__rosidl_typesupport_introspection_c__HWstatus_message_members = {
  "myrobot_interfaces__msg",  // message namespace
  "HWstatus",  // message name
  5,  // number of fields
  sizeof(myrobot_interfaces__msg__HWstatus),
  myrobot_interfaces__msg__HWstatus__rosidl_typesupport_introspection_c__HWstatus_message_member_array,  // message members
  myrobot_interfaces__msg__HWstatus__rosidl_typesupport_introspection_c__HWstatus_init_function,  // function to initialize message memory (memory has to be allocated)
  myrobot_interfaces__msg__HWstatus__rosidl_typesupport_introspection_c__HWstatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t myrobot_interfaces__msg__HWstatus__rosidl_typesupport_introspection_c__HWstatus_message_type_support_handle = {
  0,
  &myrobot_interfaces__msg__HWstatus__rosidl_typesupport_introspection_c__HWstatus_message_members,
  get_message_typesupport_handle_function,
  &myrobot_interfaces__msg__HWstatus__get_type_hash,
  &myrobot_interfaces__msg__HWstatus__get_type_description,
  &myrobot_interfaces__msg__HWstatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_myrobot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myrobot_interfaces, msg, HWstatus)() {
  if (!myrobot_interfaces__msg__HWstatus__rosidl_typesupport_introspection_c__HWstatus_message_type_support_handle.typesupport_identifier) {
    myrobot_interfaces__msg__HWstatus__rosidl_typesupport_introspection_c__HWstatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &myrobot_interfaces__msg__HWstatus__rosidl_typesupport_introspection_c__HWstatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
