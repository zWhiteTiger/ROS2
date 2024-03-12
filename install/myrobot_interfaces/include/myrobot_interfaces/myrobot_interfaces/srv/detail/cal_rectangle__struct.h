// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from myrobot_interfaces:srv/CalRectangle.idl
// generated code does not contain a copyright notice

#ifndef MYROBOT_INTERFACES__SRV__DETAIL__CAL_RECTANGLE__STRUCT_H_
#define MYROBOT_INTERFACES__SRV__DETAIL__CAL_RECTANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CalRectangle in the package myrobot_interfaces.
typedef struct myrobot_interfaces__srv__CalRectangle_Request
{
  double length;
  double width;
} myrobot_interfaces__srv__CalRectangle_Request;

// Struct for a sequence of myrobot_interfaces__srv__CalRectangle_Request.
typedef struct myrobot_interfaces__srv__CalRectangle_Request__Sequence
{
  myrobot_interfaces__srv__CalRectangle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myrobot_interfaces__srv__CalRectangle_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/CalRectangle in the package myrobot_interfaces.
typedef struct myrobot_interfaces__srv__CalRectangle_Response
{
  double area_rectangle;
} myrobot_interfaces__srv__CalRectangle_Response;

// Struct for a sequence of myrobot_interfaces__srv__CalRectangle_Response.
typedef struct myrobot_interfaces__srv__CalRectangle_Response__Sequence
{
  myrobot_interfaces__srv__CalRectangle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myrobot_interfaces__srv__CalRectangle_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  myrobot_interfaces__srv__CalRectangle_Event__request__MAX_SIZE = 1
};
// response
enum
{
  myrobot_interfaces__srv__CalRectangle_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CalRectangle in the package myrobot_interfaces.
typedef struct myrobot_interfaces__srv__CalRectangle_Event
{
  service_msgs__msg__ServiceEventInfo info;
  myrobot_interfaces__srv__CalRectangle_Request__Sequence request;
  myrobot_interfaces__srv__CalRectangle_Response__Sequence response;
} myrobot_interfaces__srv__CalRectangle_Event;

// Struct for a sequence of myrobot_interfaces__srv__CalRectangle_Event.
typedef struct myrobot_interfaces__srv__CalRectangle_Event__Sequence
{
  myrobot_interfaces__srv__CalRectangle_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myrobot_interfaces__srv__CalRectangle_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYROBOT_INTERFACES__SRV__DETAIL__CAL_RECTANGLE__STRUCT_H_
