// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from study_interface:msg/Line.idl
// generated code does not contain a copyright notice

#include "study_interface/msg/detail/line__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_study_interface
const rosidl_type_hash_t *
study_interface__msg__Line__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdb, 0x13, 0xc6, 0x1a, 0x14, 0x2b, 0xed, 0x6d,
      0xce, 0x5c, 0x9b, 0x28, 0x52, 0x08, 0xfb, 0xd4,
      0xc8, 0x4c, 0x75, 0x45, 0x1c, 0xc9, 0xb1, 0x17,
      0x5e, 0xde, 0x15, 0xf0, 0x82, 0x5f, 0x46, 0x87,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char study_interface__msg__Line__TYPE_NAME[] = "study_interface/msg/Line";

// Define type names, field names, and default values
static char study_interface__msg__Line__FIELD_NAME__low_x[] = "low_x";
static char study_interface__msg__Line__FIELD_NAME__high_x[] = "high_x";
static char study_interface__msg__Line__FIELD_NAME__low_y[] = "low_y";
static char study_interface__msg__Line__FIELD_NAME__high_y[] = "high_y";
static char study_interface__msg__Line__FIELD_NAME__a[] = "a";
static char study_interface__msg__Line__FIELD_NAME__b[] = "b";
static char study_interface__msg__Line__FIELD_NAME__c[] = "c";
static char study_interface__msg__Line__FIELD_NAME__distance[] = "distance";
static char study_interface__msg__Line__FIELD_NAME__theta[] = "theta";

static rosidl_runtime_c__type_description__Field study_interface__msg__Line__FIELDS[] = {
  {
    {study_interface__msg__Line__FIELD_NAME__low_x, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {study_interface__msg__Line__FIELD_NAME__high_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {study_interface__msg__Line__FIELD_NAME__low_y, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {study_interface__msg__Line__FIELD_NAME__high_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {study_interface__msg__Line__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {study_interface__msg__Line__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {study_interface__msg__Line__FIELD_NAME__c, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {study_interface__msg__Line__FIELD_NAME__distance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {study_interface__msg__Line__FIELD_NAME__theta, 5, 5},
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
study_interface__msg__Line__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {study_interface__msg__Line__TYPE_NAME, 24, 24},
      {study_interface__msg__Line__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64[] low_x\n"
  "float64[] high_x\n"
  "float64[] low_y\n"
  "float64[] high_y\n"
  "float64[] a\n"
  "float64[] b\n"
  "float64[] c\n"
  "float64[] distance\n"
  "float64[] theta";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
study_interface__msg__Line__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {study_interface__msg__Line__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 137, 137},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
study_interface__msg__Line__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *study_interface__msg__Line__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
