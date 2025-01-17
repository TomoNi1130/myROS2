// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from study_interface:msg/Cloud.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "study_interface/msg/cloud.h"


#ifndef STUDY_INTERFACE__MSG__DETAIL__CLOUD__STRUCT_H_
#define STUDY_INTERFACE__MSG__DETAIL__CLOUD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Cloud in the package study_interface.
typedef struct study_interface__msg__Cloud
{
  double cloudx[150];
  double cloudy[150];
} study_interface__msg__Cloud;

// Struct for a sequence of study_interface__msg__Cloud.
typedef struct study_interface__msg__Cloud__Sequence
{
  study_interface__msg__Cloud * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} study_interface__msg__Cloud__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STUDY_INTERFACE__MSG__DETAIL__CLOUD__STRUCT_H_
