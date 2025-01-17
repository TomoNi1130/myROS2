// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from study_interface:msg/Line.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "study_interface/msg/line.h"


#ifndef STUDY_INTERFACE__MSG__DETAIL__LINE__STRUCT_H_
#define STUDY_INTERFACE__MSG__DETAIL__LINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'low_x'
// Member 'high_x'
// Member 'low_y'
// Member 'high_y'
// Member 'a'
// Member 'b'
// Member 'c'
// Member 'distance'
// Member 'theta'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Line in the package study_interface.
typedef struct study_interface__msg__Line
{
  rosidl_runtime_c__double__Sequence low_x;
  rosidl_runtime_c__double__Sequence high_x;
  rosidl_runtime_c__double__Sequence low_y;
  rosidl_runtime_c__double__Sequence high_y;
  rosidl_runtime_c__double__Sequence a;
  rosidl_runtime_c__double__Sequence b;
  rosidl_runtime_c__double__Sequence c;
  rosidl_runtime_c__double__Sequence distance;
  rosidl_runtime_c__double__Sequence theta;
} study_interface__msg__Line;

// Struct for a sequence of study_interface__msg__Line.
typedef struct study_interface__msg__Line__Sequence
{
  study_interface__msg__Line * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} study_interface__msg__Line__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STUDY_INTERFACE__MSG__DETAIL__LINE__STRUCT_H_
