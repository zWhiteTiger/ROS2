// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from myrobot_interfaces:msg/HWstatus.idl
// generated code does not contain a copyright notice

#ifndef MYROBOT_INTERFACES__MSG__DETAIL__H_WSTATUS__FUNCTIONS_H_
#define MYROBOT_INTERFACES__MSG__DETAIL__H_WSTATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "myrobot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "myrobot_interfaces/msg/detail/h_wstatus__struct.h"

/// Initialize msg/HWstatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * myrobot_interfaces__msg__HWstatus
 * )) before or use
 * myrobot_interfaces__msg__HWstatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_myrobot_interfaces
bool
myrobot_interfaces__msg__HWstatus__init(myrobot_interfaces__msg__HWstatus * msg);

/// Finalize msg/HWstatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_myrobot_interfaces
void
myrobot_interfaces__msg__HWstatus__fini(myrobot_interfaces__msg__HWstatus * msg);

/// Create msg/HWstatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * myrobot_interfaces__msg__HWstatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_myrobot_interfaces
myrobot_interfaces__msg__HWstatus *
myrobot_interfaces__msg__HWstatus__create();

/// Destroy msg/HWstatus message.
/**
 * It calls
 * myrobot_interfaces__msg__HWstatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_myrobot_interfaces
void
myrobot_interfaces__msg__HWstatus__destroy(myrobot_interfaces__msg__HWstatus * msg);

/// Check for msg/HWstatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_myrobot_interfaces
bool
myrobot_interfaces__msg__HWstatus__are_equal(const myrobot_interfaces__msg__HWstatus * lhs, const myrobot_interfaces__msg__HWstatus * rhs);

/// Copy a msg/HWstatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_myrobot_interfaces
bool
myrobot_interfaces__msg__HWstatus__copy(
  const myrobot_interfaces__msg__HWstatus * input,
  myrobot_interfaces__msg__HWstatus * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_myrobot_interfaces
const rosidl_type_hash_t *
myrobot_interfaces__msg__HWstatus__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_myrobot_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
myrobot_interfaces__msg__HWstatus__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_myrobot_interfaces
const rosidl_runtime_c__type_description__TypeSource *
myrobot_interfaces__msg__HWstatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_myrobot_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
myrobot_interfaces__msg__HWstatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/HWstatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * myrobot_interfaces__msg__HWstatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_myrobot_interfaces
bool
myrobot_interfaces__msg__HWstatus__Sequence__init(myrobot_interfaces__msg__HWstatus__Sequence * array, size_t size);

/// Finalize array of msg/HWstatus messages.
/**
 * It calls
 * myrobot_interfaces__msg__HWstatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_myrobot_interfaces
void
myrobot_interfaces__msg__HWstatus__Sequence__fini(myrobot_interfaces__msg__HWstatus__Sequence * array);

/// Create array of msg/HWstatus messages.
/**
 * It allocates the memory for the array and calls
 * myrobot_interfaces__msg__HWstatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_myrobot_interfaces
myrobot_interfaces__msg__HWstatus__Sequence *
myrobot_interfaces__msg__HWstatus__Sequence__create(size_t size);

/// Destroy array of msg/HWstatus messages.
/**
 * It calls
 * myrobot_interfaces__msg__HWstatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_myrobot_interfaces
void
myrobot_interfaces__msg__HWstatus__Sequence__destroy(myrobot_interfaces__msg__HWstatus__Sequence * array);

/// Check for msg/HWstatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_myrobot_interfaces
bool
myrobot_interfaces__msg__HWstatus__Sequence__are_equal(const myrobot_interfaces__msg__HWstatus__Sequence * lhs, const myrobot_interfaces__msg__HWstatus__Sequence * rhs);

/// Copy an array of msg/HWstatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_myrobot_interfaces
bool
myrobot_interfaces__msg__HWstatus__Sequence__copy(
  const myrobot_interfaces__msg__HWstatus__Sequence * input,
  myrobot_interfaces__msg__HWstatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MYROBOT_INTERFACES__MSG__DETAIL__H_WSTATUS__FUNCTIONS_H_
