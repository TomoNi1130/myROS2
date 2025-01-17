// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interface_pkg:msg/Ransac.idl
// generated code does not contain a copyright notice

#include "interface_pkg/msg/detail/ransac__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interface_pkg
const rosidl_type_hash_t *
interface_pkg__msg__Ransac__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x04, 0x2a, 0x84, 0x39, 0x36, 0xc3, 0x85, 0x58,
      0x49, 0xb2, 0xb4, 0x2b, 0x33, 0xc4, 0x33, 0xce,
      0x00, 0x6a, 0xb7, 0x54, 0x6e, 0x0b, 0xab, 0x27,
      0x68, 0x9d, 0x53, 0x08, 0x11, 0xb1, 0x26, 0xf1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interface_pkg__msg__Ransac__TYPE_NAME[] = "interface_pkg/msg/Ransac";

// Define type names, field names, and default values
static char interface_pkg__msg__Ransac__FIELD_NAME__low_x[] = "low_x";
static char interface_pkg__msg__Ransac__FIELD_NAME__high_x[] = "high_x";
static char interface_pkg__msg__Ransac__FIELD_NAME__low_y[] = "low_y";
static char interface_pkg__msg__Ransac__FIELD_NAME__high_y[] = "high_y";
static char interface_pkg__msg__Ransac__FIELD_NAME__a[] = "a";
static char interface_pkg__msg__Ransac__FIELD_NAME__b[] = "b";
static char interface_pkg__msg__Ransac__FIELD_NAME__c[] = "c";
static char interface_pkg__msg__Ransac__FIELD_NAME__distance[] = "distance";
static char interface_pkg__msg__Ransac__FIELD_NAME__theta[] = "theta";

static rosidl_runtime_c__type_description__Field interface_pkg__msg__Ransac__FIELDS[] = {
  {
    {interface_pkg__msg__Ransac__FIELD_NAME__low_x, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interface_pkg__msg__Ransac__FIELD_NAME__high_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interface_pkg__msg__Ransac__FIELD_NAME__low_y, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interface_pkg__msg__Ransac__FIELD_NAME__high_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interface_pkg__msg__Ransac__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interface_pkg__msg__Ransac__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interface_pkg__msg__Ransac__FIELD_NAME__c, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interface_pkg__msg__Ransac__FIELD_NAME__distance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interface_pkg__msg__Ransac__FIELD_NAME__theta, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interface_pkg__msg__Ransac__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interface_pkg__msg__Ransac__TYPE_NAME, 24, 24},
      {interface_pkg__msg__Ransac__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 low_x\n"
  "float64 high_x\n"
  "float64 low_y\n"
  "float64 high_y\n"
  "float64 a\n"
  "float64 b\n"
  "float64 c\n"
  "float64 distance\n"
  "float64 theta";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interface_pkg__msg__Ransac__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interface_pkg__msg__Ransac__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 119, 119},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interface_pkg__msg__Ransac__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interface_pkg__msg__Ransac__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
