// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from myrobot_interfaces:srv/CalRectangle.idl
// generated code does not contain a copyright notice
#include "myrobot_interfaces/srv/detail/cal_rectangle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
myrobot_interfaces__srv__CalRectangle_Request__init(myrobot_interfaces__srv__CalRectangle_Request * msg)
{
  if (!msg) {
    return false;
  }
  // length
  // width
  return true;
}

void
myrobot_interfaces__srv__CalRectangle_Request__fini(myrobot_interfaces__srv__CalRectangle_Request * msg)
{
  if (!msg) {
    return;
  }
  // length
  // width
}

bool
myrobot_interfaces__srv__CalRectangle_Request__are_equal(const myrobot_interfaces__srv__CalRectangle_Request * lhs, const myrobot_interfaces__srv__CalRectangle_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  return true;
}

bool
myrobot_interfaces__srv__CalRectangle_Request__copy(
  const myrobot_interfaces__srv__CalRectangle_Request * input,
  myrobot_interfaces__srv__CalRectangle_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // length
  output->length = input->length;
  // width
  output->width = input->width;
  return true;
}

myrobot_interfaces__srv__CalRectangle_Request *
myrobot_interfaces__srv__CalRectangle_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myrobot_interfaces__srv__CalRectangle_Request * msg = (myrobot_interfaces__srv__CalRectangle_Request *)allocator.allocate(sizeof(myrobot_interfaces__srv__CalRectangle_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(myrobot_interfaces__srv__CalRectangle_Request));
  bool success = myrobot_interfaces__srv__CalRectangle_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
myrobot_interfaces__srv__CalRectangle_Request__destroy(myrobot_interfaces__srv__CalRectangle_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    myrobot_interfaces__srv__CalRectangle_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
myrobot_interfaces__srv__CalRectangle_Request__Sequence__init(myrobot_interfaces__srv__CalRectangle_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myrobot_interfaces__srv__CalRectangle_Request * data = NULL;

  if (size) {
    data = (myrobot_interfaces__srv__CalRectangle_Request *)allocator.zero_allocate(size, sizeof(myrobot_interfaces__srv__CalRectangle_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = myrobot_interfaces__srv__CalRectangle_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        myrobot_interfaces__srv__CalRectangle_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
myrobot_interfaces__srv__CalRectangle_Request__Sequence__fini(myrobot_interfaces__srv__CalRectangle_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      myrobot_interfaces__srv__CalRectangle_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

myrobot_interfaces__srv__CalRectangle_Request__Sequence *
myrobot_interfaces__srv__CalRectangle_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myrobot_interfaces__srv__CalRectangle_Request__Sequence * array = (myrobot_interfaces__srv__CalRectangle_Request__Sequence *)allocator.allocate(sizeof(myrobot_interfaces__srv__CalRectangle_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = myrobot_interfaces__srv__CalRectangle_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
myrobot_interfaces__srv__CalRectangle_Request__Sequence__destroy(myrobot_interfaces__srv__CalRectangle_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    myrobot_interfaces__srv__CalRectangle_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
myrobot_interfaces__srv__CalRectangle_Request__Sequence__are_equal(const myrobot_interfaces__srv__CalRectangle_Request__Sequence * lhs, const myrobot_interfaces__srv__CalRectangle_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!myrobot_interfaces__srv__CalRectangle_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
myrobot_interfaces__srv__CalRectangle_Request__Sequence__copy(
  const myrobot_interfaces__srv__CalRectangle_Request__Sequence * input,
  myrobot_interfaces__srv__CalRectangle_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(myrobot_interfaces__srv__CalRectangle_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    myrobot_interfaces__srv__CalRectangle_Request * data =
      (myrobot_interfaces__srv__CalRectangle_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!myrobot_interfaces__srv__CalRectangle_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          myrobot_interfaces__srv__CalRectangle_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!myrobot_interfaces__srv__CalRectangle_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
myrobot_interfaces__srv__CalRectangle_Response__init(myrobot_interfaces__srv__CalRectangle_Response * msg)
{
  if (!msg) {
    return false;
  }
  // area_rectangle
  return true;
}

void
myrobot_interfaces__srv__CalRectangle_Response__fini(myrobot_interfaces__srv__CalRectangle_Response * msg)
{
  if (!msg) {
    return;
  }
  // area_rectangle
}

bool
myrobot_interfaces__srv__CalRectangle_Response__are_equal(const myrobot_interfaces__srv__CalRectangle_Response * lhs, const myrobot_interfaces__srv__CalRectangle_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // area_rectangle
  if (lhs->area_rectangle != rhs->area_rectangle) {
    return false;
  }
  return true;
}

bool
myrobot_interfaces__srv__CalRectangle_Response__copy(
  const myrobot_interfaces__srv__CalRectangle_Response * input,
  myrobot_interfaces__srv__CalRectangle_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // area_rectangle
  output->area_rectangle = input->area_rectangle;
  return true;
}

myrobot_interfaces__srv__CalRectangle_Response *
myrobot_interfaces__srv__CalRectangle_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myrobot_interfaces__srv__CalRectangle_Response * msg = (myrobot_interfaces__srv__CalRectangle_Response *)allocator.allocate(sizeof(myrobot_interfaces__srv__CalRectangle_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(myrobot_interfaces__srv__CalRectangle_Response));
  bool success = myrobot_interfaces__srv__CalRectangle_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
myrobot_interfaces__srv__CalRectangle_Response__destroy(myrobot_interfaces__srv__CalRectangle_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    myrobot_interfaces__srv__CalRectangle_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
myrobot_interfaces__srv__CalRectangle_Response__Sequence__init(myrobot_interfaces__srv__CalRectangle_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myrobot_interfaces__srv__CalRectangle_Response * data = NULL;

  if (size) {
    data = (myrobot_interfaces__srv__CalRectangle_Response *)allocator.zero_allocate(size, sizeof(myrobot_interfaces__srv__CalRectangle_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = myrobot_interfaces__srv__CalRectangle_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        myrobot_interfaces__srv__CalRectangle_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
myrobot_interfaces__srv__CalRectangle_Response__Sequence__fini(myrobot_interfaces__srv__CalRectangle_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      myrobot_interfaces__srv__CalRectangle_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

myrobot_interfaces__srv__CalRectangle_Response__Sequence *
myrobot_interfaces__srv__CalRectangle_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myrobot_interfaces__srv__CalRectangle_Response__Sequence * array = (myrobot_interfaces__srv__CalRectangle_Response__Sequence *)allocator.allocate(sizeof(myrobot_interfaces__srv__CalRectangle_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = myrobot_interfaces__srv__CalRectangle_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
myrobot_interfaces__srv__CalRectangle_Response__Sequence__destroy(myrobot_interfaces__srv__CalRectangle_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    myrobot_interfaces__srv__CalRectangle_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
myrobot_interfaces__srv__CalRectangle_Response__Sequence__are_equal(const myrobot_interfaces__srv__CalRectangle_Response__Sequence * lhs, const myrobot_interfaces__srv__CalRectangle_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!myrobot_interfaces__srv__CalRectangle_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
myrobot_interfaces__srv__CalRectangle_Response__Sequence__copy(
  const myrobot_interfaces__srv__CalRectangle_Response__Sequence * input,
  myrobot_interfaces__srv__CalRectangle_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(myrobot_interfaces__srv__CalRectangle_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    myrobot_interfaces__srv__CalRectangle_Response * data =
      (myrobot_interfaces__srv__CalRectangle_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!myrobot_interfaces__srv__CalRectangle_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          myrobot_interfaces__srv__CalRectangle_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!myrobot_interfaces__srv__CalRectangle_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "myrobot_interfaces/srv/detail/cal_rectangle__functions.h"

bool
myrobot_interfaces__srv__CalRectangle_Event__init(myrobot_interfaces__srv__CalRectangle_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    myrobot_interfaces__srv__CalRectangle_Event__fini(msg);
    return false;
  }
  // request
  if (!myrobot_interfaces__srv__CalRectangle_Request__Sequence__init(&msg->request, 0)) {
    myrobot_interfaces__srv__CalRectangle_Event__fini(msg);
    return false;
  }
  // response
  if (!myrobot_interfaces__srv__CalRectangle_Response__Sequence__init(&msg->response, 0)) {
    myrobot_interfaces__srv__CalRectangle_Event__fini(msg);
    return false;
  }
  return true;
}

void
myrobot_interfaces__srv__CalRectangle_Event__fini(myrobot_interfaces__srv__CalRectangle_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  myrobot_interfaces__srv__CalRectangle_Request__Sequence__fini(&msg->request);
  // response
  myrobot_interfaces__srv__CalRectangle_Response__Sequence__fini(&msg->response);
}

bool
myrobot_interfaces__srv__CalRectangle_Event__are_equal(const myrobot_interfaces__srv__CalRectangle_Event * lhs, const myrobot_interfaces__srv__CalRectangle_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!myrobot_interfaces__srv__CalRectangle_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!myrobot_interfaces__srv__CalRectangle_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
myrobot_interfaces__srv__CalRectangle_Event__copy(
  const myrobot_interfaces__srv__CalRectangle_Event * input,
  myrobot_interfaces__srv__CalRectangle_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!myrobot_interfaces__srv__CalRectangle_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!myrobot_interfaces__srv__CalRectangle_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

myrobot_interfaces__srv__CalRectangle_Event *
myrobot_interfaces__srv__CalRectangle_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myrobot_interfaces__srv__CalRectangle_Event * msg = (myrobot_interfaces__srv__CalRectangle_Event *)allocator.allocate(sizeof(myrobot_interfaces__srv__CalRectangle_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(myrobot_interfaces__srv__CalRectangle_Event));
  bool success = myrobot_interfaces__srv__CalRectangle_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
myrobot_interfaces__srv__CalRectangle_Event__destroy(myrobot_interfaces__srv__CalRectangle_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    myrobot_interfaces__srv__CalRectangle_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
myrobot_interfaces__srv__CalRectangle_Event__Sequence__init(myrobot_interfaces__srv__CalRectangle_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myrobot_interfaces__srv__CalRectangle_Event * data = NULL;

  if (size) {
    data = (myrobot_interfaces__srv__CalRectangle_Event *)allocator.zero_allocate(size, sizeof(myrobot_interfaces__srv__CalRectangle_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = myrobot_interfaces__srv__CalRectangle_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        myrobot_interfaces__srv__CalRectangle_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
myrobot_interfaces__srv__CalRectangle_Event__Sequence__fini(myrobot_interfaces__srv__CalRectangle_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      myrobot_interfaces__srv__CalRectangle_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

myrobot_interfaces__srv__CalRectangle_Event__Sequence *
myrobot_interfaces__srv__CalRectangle_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myrobot_interfaces__srv__CalRectangle_Event__Sequence * array = (myrobot_interfaces__srv__CalRectangle_Event__Sequence *)allocator.allocate(sizeof(myrobot_interfaces__srv__CalRectangle_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = myrobot_interfaces__srv__CalRectangle_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
myrobot_interfaces__srv__CalRectangle_Event__Sequence__destroy(myrobot_interfaces__srv__CalRectangle_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    myrobot_interfaces__srv__CalRectangle_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
myrobot_interfaces__srv__CalRectangle_Event__Sequence__are_equal(const myrobot_interfaces__srv__CalRectangle_Event__Sequence * lhs, const myrobot_interfaces__srv__CalRectangle_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!myrobot_interfaces__srv__CalRectangle_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
myrobot_interfaces__srv__CalRectangle_Event__Sequence__copy(
  const myrobot_interfaces__srv__CalRectangle_Event__Sequence * input,
  myrobot_interfaces__srv__CalRectangle_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(myrobot_interfaces__srv__CalRectangle_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    myrobot_interfaces__srv__CalRectangle_Event * data =
      (myrobot_interfaces__srv__CalRectangle_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!myrobot_interfaces__srv__CalRectangle_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          myrobot_interfaces__srv__CalRectangle_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!myrobot_interfaces__srv__CalRectangle_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
