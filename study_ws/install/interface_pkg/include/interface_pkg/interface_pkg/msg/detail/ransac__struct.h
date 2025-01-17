// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_pkg:msg/Ransac.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interface_pkg/msg/ransac.h"


#ifndef INTERFACE_PKG__MSG__DETAIL__RANSAC__STRUCT_H_
#define INTERFACE_PKG__MSG__DETAIL__RANSAC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Ransac in the package interface_pkg.
typedef struct interface_pkg__msg__Ransac
{
  double low_x;
  double high_x;
  double low_y;
  double high_y;
  double a;
  double b;
  double c;
  double distance;
  double theta;
} interface_pkg__msg__Ransac;

// Struct for a sequence of interface_pkg__msg__Ransac.
typedef struct interface_pkg__msg__Ransac__Sequence
{
  interface_pkg__msg__Ransac * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_pkg__msg__Ransac__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PKG__MSG__DETAIL__RANSAC__STRUCT_H_
