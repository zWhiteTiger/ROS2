// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from myrobot_interfaces:msg/HWstatus.idl
// generated code does not contain a copyright notice

#include "myrobot_interfaces/msg/detail/h_wstatus__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_myrobot_interfaces
const rosidl_type_hash_t *
myrobot_interfaces__msg__HWstatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8c, 0x92, 0x64, 0x74, 0x4e, 0xa6, 0xb9, 0x18,
      0xf2, 0xbf, 0x3b, 0x78, 0xb9, 0xb6, 0xe9, 0x02,
      0x5f, 0xb6, 0xc2, 0x6f, 0xb7, 0xca, 0xd7, 0xa0,
      0x8b, 0xa5, 0x5e, 0x6d, 0x5f, 0xa2, 0x7e, 0x8d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char myrobot_interfaces__msg__HWstatus__TYPE_NAME[] = "myrobot_interfaces/msg/HWstatus";

// Define type names, field names, and default values
static char myrobot_interfaces__msg__HWstatus__FIELD_NAME__name_robot[] = "name_robot";
static char myrobot_interfaces__msg__HWstatus__FIELD_NAME__number_robot[] = "number_robot";
static char myrobot_interfaces__msg__HWstatus__FIELD_NAME__temperature[] = "temperature";
static char myrobot_interfaces__msg__HWstatus__FIELD_NAME__motor[] = "motor";
static char myrobot_interfaces__msg__HWstatus__FIELD_NAME__debug_message[] = "debug_message";

static rosidl_runtime_c__type_description__Field myrobot_interfaces__msg__HWstatus__FIELDS[] = {
  {
    {myrobot_interfaces__msg__HWstatus__FIELD_NAME__name_robot, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {myrobot_interfaces__msg__HWstatus__FIELD_NAME__number_robot, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {myrobot_interfaces__msg__HWstatus__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {myrobot_interfaces__msg__HWstatus__FIELD_NAME__motor, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {myrobot_interfaces__msg__HWstatus__FIELD_NAME__debug_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
myrobot_interfaces__msg__HWstatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {myrobot_interfaces__msg__HWstatus__TYPE_NAME, 31, 31},
      {myrobot_interfaces__msg__HWstatus__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name_robot\n"
  "int64 number_robot\n"
  "int64 temperature\n"
  "bool motor\n"
  "string debug_message\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
myrobot_interfaces__msg__HWstatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {myrobot_interfaces__msg__HWstatus__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 89, 89},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
myrobot_interfaces__msg__HWstatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *myrobot_interfaces__msg__HWstatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
