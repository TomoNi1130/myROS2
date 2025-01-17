// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from study_interface:msg/Cloud.idl
// generated code does not contain a copyright notice

#include "study_interface/msg/detail/cloud__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_study_interface
const rosidl_type_hash_t *
study_interface__msg__Cloud__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x25, 0xc3, 0x8d, 0xe5, 0x0b, 0x86, 0xdc, 0x98,
      0xfe, 0x4c, 0x6d, 0x00, 0xcc, 0x79, 0xd4, 0x94,
      0x17, 0xa5, 0x94, 0x4b, 0xb3, 0x59, 0xcd, 0x2b,
      0x53, 0xa5, 0x87, 0xfe, 0x61, 0x82, 0x9b, 0x31,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char study_interface__msg__Cloud__TYPE_NAME[] = "study_interface/msg/Cloud";

// Define type names, field names, and default values
static char study_interface__msg__Cloud__FIELD_NAME__cloudx[] = "cloudx";
static char study_interface__msg__Cloud__FIELD_NAME__cloudy[] = "cloudy";

static rosidl_runtime_c__type_description__Field study_interface__msg__Cloud__FIELDS[] = {
  {
    {study_interface__msg__Cloud__FIELD_NAME__cloudx, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {study_interface__msg__Cloud__FIELD_NAME__cloudy, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
study_interface__msg__Cloud__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {study_interface__msg__Cloud__TYPE_NAME, 25, 25},
      {study_interface__msg__Cloud__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64[] cloudx\n"
  "float64[] cloudy";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
study_interface__msg__Cloud__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {study_interface__msg__Cloud__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 34, 34},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
study_interface__msg__Cloud__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *study_interface__msg__Cloud__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
