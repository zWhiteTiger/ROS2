// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from myrobot_interfaces:msg/HWstatus.idl
// generated code does not contain a copyright notice
#include "myrobot_interfaces/msg/detail/h_wstatus__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name_robot`
// Member `debug_message`
#include "rosidl_runtime_c/string_functions.h"

bool
myrobot_interfaces__msg__HWstatus__init(myrobot_interfaces__msg__HWstatus * msg)
{
  if (!msg) {
    return false;
  }
  // name_robot
  if (!rosidl_runtime_c__String__init(&msg->name_robot)) {
    myrobot_interfaces__msg__HWstatus__fini(msg);
    return false;
  }
  // number_robot
  // temperature
  // motor
  // debug_message
  if (!rosidl_runtime_c__String__init(&msg->debug_message)) {
    myrobot_interfaces__msg__HWstatus__fini(msg);
    return false;
  }
  return true;
}

void
myrobot_interfaces__msg__HWstatus__fini(myrobot_interfaces__msg__HWstatus * msg)
{
  if (!msg) {
    return;
  }
  // name_robot
  rosidl_runtime_c__String__fini(&msg->name_robot);
  // number_robot
  // temperature
  // motor
  // debug_message
  rosidl_runtime_c__String__fini(&msg->debug_message);
}

bool
myrobot_interfaces__msg__HWstatus__are_equal(const myrobot_interfaces__msg__HWstatus * lhs, const myrobot_interfaces__msg__HWstatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name_robot
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name_robot), &(rhs->name_robot)))
  {
    return false;
  }
  // number_robot
  if (lhs->number_robot != rhs->number_robot) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // motor
  if (lhs->motor != rhs->motor) {
    return false;
  }
  // debug_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->debug_message), &(rhs->debug_message)))
  {
    return false;
  }
  return true;
}

bool
myrobot_interfaces__msg__HWstatus__copy(
  const myrobot_interfaces__msg__HWstatus * input,
  myrobot_interfaces__msg__HWstatus * output)
{
  if (!input || !output) {
    return false;
  }
  // name_robot
  if (!rosidl_runtime_c__String__copy(
      &(input->name_robot), &(output->name_robot)))
  {
    return false;
  }
  // number_robot
  output->number_robot = input->number_robot;
  // temperature
  output->temperature = input->temperature;
  // motor
  output->motor = input->motor;
  // debug_message
  if (!rosidl_runtime_c__String__copy(
      &(input->debug_message), &(output->debug_message)))
  {
    return false;
  }
  return true;
}

myrobot_interfaces__msg__HWstatus *
myrobot_interfaces__msg__HWstatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myrobot_interfaces__msg__HWstatus * msg = (myrobot_interfaces__msg__HWstatus *)allocator.allocate(sizeof(myrobot_interfaces__msg__HWstatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(myrobot_interfaces__msg__HWstatus));
  bool success = myrobot_interfaces__msg__HWstatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
myrobot_interfaces__msg__HWstatus__destroy(myrobot_interfaces__msg__HWstatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    myrobot_interfaces__msg__HWstatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
myrobot_interfaces__msg__HWstatus__Sequence__init(myrobot_interfaces__msg__HWstatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myrobot_interfaces__msg__HWstatus * data = NULL;

  if (size) {
    data = (myrobot_interfaces__msg__HWstatus *)allocator.zero_allocate(size, sizeof(myrobot_interfaces__msg__HWstatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = myrobot_interfaces__msg__HWstatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        myrobot_interfaces__msg__HWstatus__fini(&data[i - 1]);
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
myrobot_interfaces__msg__HWstatus__Sequence__fini(myrobot_interfaces__msg__HWstatus__Sequence * array)
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
      myrobot_interfaces__msg__HWstatus__fini(&array->data[i]);
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

myrobot_interfaces__msg__HWstatus__Sequence *
myrobot_interfaces__msg__HWstatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myrobot_interfaces__msg__HWstatus__Sequence * array = (myrobot_interfaces__msg__HWstatus__Sequence *)allocator.allocate(sizeof(myrobot_interfaces__msg__HWstatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = myrobot_interfaces__msg__HWstatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
myrobot_interfaces__msg__HWstatus__Sequence__destroy(myrobot_interfaces__msg__HWstatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    myrobot_interfaces__msg__HWstatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
myrobot_interfaces__msg__HWstatus__Sequence__are_equal(const myrobot_interfaces__msg__HWstatus__Sequence * lhs, const myrobot_interfaces__msg__HWstatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!myrobot_interfaces__msg__HWstatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
myrobot_interfaces__msg__HWstatus__Sequence__copy(
  const myrobot_interfaces__msg__HWstatus__Sequence * input,
  myrobot_interfaces__msg__HWstatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(myrobot_interfaces__msg__HWstatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    myrobot_interfaces__msg__HWstatus * data =
      (myrobot_interfaces__msg__HWstatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!myrobot_interfaces__msg__HWstatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          myrobot_interfaces__msg__HWstatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!myrobot_interfaces__msg__HWstatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
