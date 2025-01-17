// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from study_interface:msg/Circle.idl
// generated code does not contain a copyright notice

#include "study_interface/msg/detail/circle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_study_interface
const rosidl_type_hash_t *
study_interface__msg__Circle__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xed, 0x11, 0x28, 0x5f, 0x8a, 0xca, 0xbc, 0x35,
      0xec, 0xf7, 0x80, 0x5e, 0x9d, 0x18, 0x2d, 0xf6,
      0x64, 0x8f, 0x88, 0x9d, 0x72, 0x2f, 0xe7, 0xc2,
      0x2c, 0x54, 0x74, 0x08, 0x75, 0x2e, 0x8b, 0xad,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char study_interface__msg__Circle__TYPE_NAME[] = "study_interface/msg/Circle";

// Define type names, field names, and default values
static char study_interface__msg__Circle__FIELD_NAME__centerx[] = "centerx";
static char study_interface__msg__Circle__FIELD_NAME__centery[] = "centery";
static char study_interface__msg__Circle__FIELD_NAME__radius[] = "radius";

static rosidl_runtime_c__type_description__Field study_interface__msg__Circle__FIELDS[] = {
  {
    {study_interface__msg__Circle__FIELD_NAME__centerx, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {study_interface__msg__Circle__FIELD_NAME__centery, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {study_interface__msg__Circle__FIELD_NAME__radius, 6, 6},
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
study_interface__msg__Circle__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {study_interface__msg__Circle__TYPE_NAME, 26, 26},
      {study_interface__msg__Circle__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64[] centerx\n"
  "float64[] centery\n"
  "float64[] radius";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
study_interface__msg__Circle__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {study_interface__msg__Circle__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 53, 53},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
study_interface__msg__Circle__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *study_interface__msg__Circle__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
