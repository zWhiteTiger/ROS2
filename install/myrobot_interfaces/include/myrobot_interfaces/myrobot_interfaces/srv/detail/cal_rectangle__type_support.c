// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from myrobot_interfaces:srv/CalRectangle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "myrobot_interfaces/srv/detail/cal_rectangle__rosidl_typesupport_introspection_c.h"
#include "myrobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "myrobot_interfaces/srv/detail/cal_rectangle__functions.h"
#include "myrobot_interfaces/srv/detail/cal_rectangle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void myrobot_interfaces__srv__CalRectangle_Request__rosidl_typesupport_introspection_c__CalRectangle_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  myrobot_interfaces__srv__CalRectangle_Request__init(message_memory);
}

void myrobot_interfaces__srv__CalRectangle_Request__rosidl_typesupport_introspection_c__CalRectangle_Request_fini_function(void * message_memory)
{
  myrobot_interfaces__srv__CalRectangle_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember myrobot_interfaces__srv__CalRectangle_Request__rosidl_typesupport_introspection_c__CalRectangle_Request_message_member_array[2] = {
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myrobot_interfaces__srv__CalRectangle_Request, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myrobot_interfaces__srv__CalRectangle_Request, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers myrobot_interfaces__srv__CalRectangle_Request__rosidl_typesupport_introspection_c__CalRectangle_Request_message_members = {
  "myrobot_interfaces__srv",  // message namespace
  "CalRectangle_Request",  // message name
  2,  // number of fields
  sizeof(myrobot_interfaces__srv__CalRectangle_Request),
  myrobot_interfaces__srv__CalRectangle_Request__rosidl_typesupport_introspection_c__CalRectangle_Request_message_member_array,  // message members
  myrobot_interfaces__srv__CalRectangle_Request__rosidl_typesupport_introspection_c__CalRectangle_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  myrobot_interfaces__srv__CalRectangle_Request__rosidl_typesupport_introspection_c__CalRectangle_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t myrobot_interfaces__srv__CalRectangle_Request__rosidl_typesupport_introspection_c__CalRectangle_Request_message_type_support_handle = {
  0,
  &myrobot_interfaces__srv__CalRectangle_Request__rosidl_typesupport_introspection_c__CalRectangle_Request_message_members,
  get_message_typesupport_handle_function,
  &myrobot_interfaces__srv__CalRectangle_Request__get_type_hash,
  &myrobot_interfaces__srv__CalRectangle_Request__get_type_description,
  &myrobot_interfaces__srv__CalRectangle_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_myrobot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myrobot_interfaces, srv, CalRectangle_Request)() {
  if (!myrobot_interfaces__srv__CalRectangle_Request__rosidl_typesupport_introspection_c__CalRectangle_Request_message_type_support_handle.typesupport_identifier) {
    myrobot_interfaces__srv__CalRectangle_Request__rosidl_typesupport_introspection_c__CalRectangle_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &myrobot_interfaces__srv__CalRectangle_Request__rosidl_typesupport_introspection_c__CalRectangle_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "myrobot_interfaces/srv/detail/cal_rectangle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "myrobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "myrobot_interfaces/srv/detail/cal_rectangle__functions.h"
// already included above
// #include "myrobot_interfaces/srv/detail/cal_rectangle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void myrobot_interfaces__srv__CalRectangle_Response__rosidl_typesupport_introspection_c__CalRectangle_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  myrobot_interfaces__srv__CalRectangle_Response__init(message_memory);
}

void myrobot_interfaces__srv__CalRectangle_Response__rosidl_typesupport_introspection_c__CalRectangle_Response_fini_function(void * message_memory)
{
  myrobot_interfaces__srv__CalRectangle_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember myrobot_interfaces__srv__CalRectangle_Response__rosidl_typesupport_introspection_c__CalRectangle_Response_message_member_array[1] = {
  {
    "area_rectangle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myrobot_interfaces__srv__CalRectangle_Response, area_rectangle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers myrobot_interfaces__srv__CalRectangle_Response__rosidl_typesupport_introspection_c__CalRectangle_Response_message_members = {
  "myrobot_interfaces__srv",  // message namespace
  "CalRectangle_Response",  // message name
  1,  // number of fields
  sizeof(myrobot_interfaces__srv__CalRectangle_Response),
  myrobot_interfaces__srv__CalRectangle_Response__rosidl_typesupport_introspection_c__CalRectangle_Response_message_member_array,  // message members
  myrobot_interfaces__srv__CalRectangle_Response__rosidl_typesupport_introspection_c__CalRectangle_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  myrobot_interfaces__srv__CalRectangle_Response__rosidl_typesupport_introspection_c__CalRectangle_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t myrobot_interfaces__srv__CalRectangle_Response__rosidl_typesupport_introspection_c__CalRectangle_Response_message_type_support_handle = {
  0,
  &myrobot_interfaces__srv__CalRectangle_Response__rosidl_typesupport_introspection_c__CalRectangle_Response_message_members,
  get_message_typesupport_handle_function,
  &myrobot_interfaces__srv__CalRectangle_Response__get_type_hash,
  &myrobot_interfaces__srv__CalRectangle_Response__get_type_description,
  &myrobot_interfaces__srv__CalRectangle_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_myrobot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myrobot_interfaces, srv, CalRectangle_Response)() {
  if (!myrobot_interfaces__srv__CalRectangle_Response__rosidl_typesupport_introspection_c__CalRectangle_Response_message_type_support_handle.typesupport_identifier) {
    myrobot_interfaces__srv__CalRectangle_Response__rosidl_typesupport_introspection_c__CalRectangle_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &myrobot_interfaces__srv__CalRectangle_Response__rosidl_typesupport_introspection_c__CalRectangle_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "myrobot_interfaces/srv/detail/cal_rectangle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "myrobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "myrobot_interfaces/srv/detail/cal_rectangle__functions.h"
// already included above
// #include "myrobot_interfaces/srv/detail/cal_rectangle__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "myrobot_interfaces/srv/cal_rectangle.h"
// Member `request`
// Member `response`
// already included above
// #include "myrobot_interfaces/srv/detail/cal_rectangle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__CalRectangle_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  myrobot_interfaces__srv__CalRectangle_Event__init(message_memory);
}

void myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__CalRectangle_Event_fini_function(void * message_memory)
{
  myrobot_interfaces__srv__CalRectangle_Event__fini(message_memory);
}

size_t myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__size_function__CalRectangle_Event__request(
  const void * untyped_member)
{
  const myrobot_interfaces__srv__CalRectangle_Request__Sequence * member =
    (const myrobot_interfaces__srv__CalRectangle_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__get_const_function__CalRectangle_Event__request(
  const void * untyped_member, size_t index)
{
  const myrobot_interfaces__srv__CalRectangle_Request__Sequence * member =
    (const myrobot_interfaces__srv__CalRectangle_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__get_function__CalRectangle_Event__request(
  void * untyped_member, size_t index)
{
  myrobot_interfaces__srv__CalRectangle_Request__Sequence * member =
    (myrobot_interfaces__srv__CalRectangle_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__fetch_function__CalRectangle_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const myrobot_interfaces__srv__CalRectangle_Request * item =
    ((const myrobot_interfaces__srv__CalRectangle_Request *)
    myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__get_const_function__CalRectangle_Event__request(untyped_member, index));
  myrobot_interfaces__srv__CalRectangle_Request * value =
    (myrobot_interfaces__srv__CalRectangle_Request *)(untyped_value);
  *value = *item;
}

void myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__assign_function__CalRectangle_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  myrobot_interfaces__srv__CalRectangle_Request * item =
    ((myrobot_interfaces__srv__CalRectangle_Request *)
    myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__get_function__CalRectangle_Event__request(untyped_member, index));
  const myrobot_interfaces__srv__CalRectangle_Request * value =
    (const myrobot_interfaces__srv__CalRectangle_Request *)(untyped_value);
  *item = *value;
}

bool myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__resize_function__CalRectangle_Event__request(
  void * untyped_member, size_t size)
{
  myrobot_interfaces__srv__CalRectangle_Request__Sequence * member =
    (myrobot_interfaces__srv__CalRectangle_Request__Sequence *)(untyped_member);
  myrobot_interfaces__srv__CalRectangle_Request__Sequence__fini(member);
  return myrobot_interfaces__srv__CalRectangle_Request__Sequence__init(member, size);
}

size_t myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__size_function__CalRectangle_Event__response(
  const void * untyped_member)
{
  const myrobot_interfaces__srv__CalRectangle_Response__Sequence * member =
    (const myrobot_interfaces__srv__CalRectangle_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__get_const_function__CalRectangle_Event__response(
  const void * untyped_member, size_t index)
{
  const myrobot_interfaces__srv__CalRectangle_Response__Sequence * member =
    (const myrobot_interfaces__srv__CalRectangle_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__get_function__CalRectangle_Event__response(
  void * untyped_member, size_t index)
{
  myrobot_interfaces__srv__CalRectangle_Response__Sequence * member =
    (myrobot_interfaces__srv__CalRectangle_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__fetch_function__CalRectangle_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const myrobot_interfaces__srv__CalRectangle_Response * item =
    ((const myrobot_interfaces__srv__CalRectangle_Response *)
    myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__get_const_function__CalRectangle_Event__response(untyped_member, index));
  myrobot_interfaces__srv__CalRectangle_Response * value =
    (myrobot_interfaces__srv__CalRectangle_Response *)(untyped_value);
  *value = *item;
}

void myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__assign_function__CalRectangle_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  myrobot_interfaces__srv__CalRectangle_Response * item =
    ((myrobot_interfaces__srv__CalRectangle_Response *)
    myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__get_function__CalRectangle_Event__response(untyped_member, index));
  const myrobot_interfaces__srv__CalRectangle_Response * value =
    (const myrobot_interfaces__srv__CalRectangle_Response *)(untyped_value);
  *item = *value;
}

bool myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__resize_function__CalRectangle_Event__response(
  void * untyped_member, size_t size)
{
  myrobot_interfaces__srv__CalRectangle_Response__Sequence * member =
    (myrobot_interfaces__srv__CalRectangle_Response__Sequence *)(untyped_member);
  myrobot_interfaces__srv__CalRectangle_Response__Sequence__fini(member);
  return myrobot_interfaces__srv__CalRectangle_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__CalRectangle_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myrobot_interfaces__srv__CalRectangle_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(myrobot_interfaces__srv__CalRectangle_Event, request),  // bytes offset in struct
    NULL,  // default value
    myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__size_function__CalRectangle_Event__request,  // size() function pointer
    myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__get_const_function__CalRectangle_Event__request,  // get_const(index) function pointer
    myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__get_function__CalRectangle_Event__request,  // get(index) function pointer
    myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__fetch_function__CalRectangle_Event__request,  // fetch(index, &value) function pointer
    myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__assign_function__CalRectangle_Event__request,  // assign(index, value) function pointer
    myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__resize_function__CalRectangle_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(myrobot_interfaces__srv__CalRectangle_Event, response),  // bytes offset in struct
    NULL,  // default value
    myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__size_function__CalRectangle_Event__response,  // size() function pointer
    myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__get_const_function__CalRectangle_Event__response,  // get_const(index) function pointer
    myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__get_function__CalRectangle_Event__response,  // get(index) function pointer
    myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__fetch_function__CalRectangle_Event__response,  // fetch(index, &value) function pointer
    myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__assign_function__CalRectangle_Event__response,  // assign(index, value) function pointer
    myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__resize_function__CalRectangle_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__CalRectangle_Event_message_members = {
  "myrobot_interfaces__srv",  // message namespace
  "CalRectangle_Event",  // message name
  3,  // number of fields
  sizeof(myrobot_interfaces__srv__CalRectangle_Event),
  myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__CalRectangle_Event_message_member_array,  // message members
  myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__CalRectangle_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__CalRectangle_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__CalRectangle_Event_message_type_support_handle = {
  0,
  &myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__CalRectangle_Event_message_members,
  get_message_typesupport_handle_function,
  &myrobot_interfaces__srv__CalRectangle_Event__get_type_hash,
  &myrobot_interfaces__srv__CalRectangle_Event__get_type_description,
  &myrobot_interfaces__srv__CalRectangle_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_myrobot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myrobot_interfaces, srv, CalRectangle_Event)() {
  myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__CalRectangle_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__CalRectangle_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myrobot_interfaces, srv, CalRectangle_Request)();
  myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__CalRectangle_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myrobot_interfaces, srv, CalRectangle_Response)();
  if (!myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__CalRectangle_Event_message_type_support_handle.typesupport_identifier) {
    myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__CalRectangle_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__CalRectangle_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "myrobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "myrobot_interfaces/srv/detail/cal_rectangle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers myrobot_interfaces__srv__detail__cal_rectangle__rosidl_typesupport_introspection_c__CalRectangle_service_members = {
  "myrobot_interfaces__srv",  // service namespace
  "CalRectangle",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // myrobot_interfaces__srv__detail__cal_rectangle__rosidl_typesupport_introspection_c__CalRectangle_Request_message_type_support_handle,
  NULL,  // response message
  // myrobot_interfaces__srv__detail__cal_rectangle__rosidl_typesupport_introspection_c__CalRectangle_Response_message_type_support_handle
  NULL  // event_message
  // myrobot_interfaces__srv__detail__cal_rectangle__rosidl_typesupport_introspection_c__CalRectangle_Response_message_type_support_handle
};


static rosidl_service_type_support_t myrobot_interfaces__srv__detail__cal_rectangle__rosidl_typesupport_introspection_c__CalRectangle_service_type_support_handle = {
  0,
  &myrobot_interfaces__srv__detail__cal_rectangle__rosidl_typesupport_introspection_c__CalRectangle_service_members,
  get_service_typesupport_handle_function,
  &myrobot_interfaces__srv__CalRectangle_Request__rosidl_typesupport_introspection_c__CalRectangle_Request_message_type_support_handle,
  &myrobot_interfaces__srv__CalRectangle_Response__rosidl_typesupport_introspection_c__CalRectangle_Response_message_type_support_handle,
  &myrobot_interfaces__srv__CalRectangle_Event__rosidl_typesupport_introspection_c__CalRectangle_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    myrobot_interfaces,
    srv,
    CalRectangle
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    myrobot_interfaces,
    srv,
    CalRectangle
  ),
  &myrobot_interfaces__srv__CalRectangle__get_type_hash,
  &myrobot_interfaces__srv__CalRectangle__get_type_description,
  &myrobot_interfaces__srv__CalRectangle__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myrobot_interfaces, srv, CalRectangle_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myrobot_interfaces, srv, CalRectangle_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myrobot_interfaces, srv, CalRectangle_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_myrobot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myrobot_interfaces, srv, CalRectangle)() {
  if (!myrobot_interfaces__srv__detail__cal_rectangle__rosidl_typesupport_introspection_c__CalRectangle_service_type_support_handle.typesupport_identifier) {
    myrobot_interfaces__srv__detail__cal_rectangle__rosidl_typesupport_introspection_c__CalRectangle_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)myrobot_interfaces__srv__detail__cal_rectangle__rosidl_typesupport_introspection_c__CalRectangle_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myrobot_interfaces, srv, CalRectangle_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myrobot_interfaces, srv, CalRectangle_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myrobot_interfaces, srv, CalRectangle_Event)()->data;
  }

  return &myrobot_interfaces__srv__detail__cal_rectangle__rosidl_typesupport_introspection_c__CalRectangle_service_type_support_handle;
}
