// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from study_interface:msg/Circle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "study_interface/msg/circle.h"


#ifndef STUDY_INTERFACE__MSG__DETAIL__CIRCLE__STRUCT_H_
#define STUDY_INTERFACE__MSG__DETAIL__CIRCLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'centerx'
// Member 'centery'
// Member 'radius'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Circle in the package study_interface.
typedef struct study_interface__msg__Circle
{
  rosidl_runtime_c__double__Sequence centerx;
  rosidl_runtime_c__double__Sequence centery;
  rosidl_runtime_c__double__Sequence radius;
} study_interface__msg__Circle;

// Struct for a sequence of study_interface__msg__Circle.
typedef struct study_interface__msg__Circle__Sequence
{
  study_interface__msg__Circle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} study_interface__msg__Circle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STUDY_INTERFACE__MSG__DETAIL__CIRCLE__STRUCT_H_
