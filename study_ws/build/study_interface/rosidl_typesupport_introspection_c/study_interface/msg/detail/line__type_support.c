// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from study_interface:msg/Line.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "study_interface/msg/detail/line__rosidl_typesupport_introspection_c.h"
#include "study_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "study_interface/msg/detail/line__functions.h"
#include "study_interface/msg/detail/line__struct.h"


// Include directives for member types
// Member `low_x`
// Member `high_x`
// Member `low_y`
// Member `high_y`
// Member `a`
// Member `b`
// Member `c`
// Member `distance`
// Member `theta`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void study_interface__msg__Line__rosidl_typesupport_introspection_c__Line_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  study_interface__msg__Line__init(message_memory);
}

void study_interface__msg__Line__rosidl_typesupport_introspection_c__Line_fini_function(void * message_memory)
{
  study_interface__msg__Line__fini(message_memory);
}

size_t study_interface__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__low_x(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__low_x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__low_x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void study_interface__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__low_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__low_x(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void study_interface__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__low_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__low_x(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool study_interface__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__low_x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t study_interface__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__high_x(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__high_x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__high_x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void study_interface__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__high_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__high_x(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void study_interface__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__high_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__high_x(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool study_interface__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__high_x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t study_interface__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__low_y(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__low_y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__low_y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void study_interface__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__low_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__low_y(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void study_interface__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__low_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__low_y(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool study_interface__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__low_y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t study_interface__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__high_y(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__high_y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__high_y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void study_interface__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__high_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__high_y(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void study_interface__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__high_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__high_y(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool study_interface__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__high_y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t study_interface__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__a(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__a(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__a(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void study_interface__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__a(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__a(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void study_interface__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__a(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__a(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool study_interface__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__a(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t study_interface__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__b(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__b(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__b(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void study_interface__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__b(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__b(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void study_interface__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__b(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__b(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool study_interface__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__b(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t study_interface__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__c(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__c(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__c(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void study_interface__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__c(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void study_interface__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__c(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool study_interface__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__c(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t study_interface__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__distance(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__distance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__distance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void study_interface__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__distance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__distance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void study_interface__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__distance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__distance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool study_interface__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__distance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t study_interface__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__theta(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__theta(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__theta(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void study_interface__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__theta(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__theta(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void study_interface__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__theta(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__theta(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool study_interface__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__theta(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember study_interface__msg__Line__rosidl_typesupport_introspection_c__Line_message_member_array[9] = {
  {
    "low_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(study_interface__msg__Line, low_x),  // bytes offset in struct
    NULL,  // default value
    study_interface__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__low_x,  // size() function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__low_x,  // get_const(index) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__low_x,  // get(index) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__low_x,  // fetch(index, &value) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__low_x,  // assign(index, value) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__low_x  // resize(index) function pointer
  },
  {
    "high_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(study_interface__msg__Line, high_x),  // bytes offset in struct
    NULL,  // default value
    study_interface__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__high_x,  // size() function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__high_x,  // get_const(index) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__high_x,  // get(index) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__high_x,  // fetch(index, &value) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__high_x,  // assign(index, value) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__high_x  // resize(index) function pointer
  },
  {
    "low_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(study_interface__msg__Line, low_y),  // bytes offset in struct
    NULL,  // default value
    study_interface__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__low_y,  // size() function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__low_y,  // get_const(index) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__low_y,  // get(index) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__low_y,  // fetch(index, &value) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__low_y,  // assign(index, value) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__low_y  // resize(index) function pointer
  },
  {
    "high_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(study_interface__msg__Line, high_y),  // bytes offset in struct
    NULL,  // default value
    study_interface__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__high_y,  // size() function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__high_y,  // get_const(index) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__high_y,  // get(index) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__high_y,  // fetch(index, &value) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__high_y,  // assign(index, value) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__high_y  // resize(index) function pointer
  },
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(study_interface__msg__Line, a),  // bytes offset in struct
    NULL,  // default value
    study_interface__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__a,  // size() function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__a,  // get_const(index) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__a,  // get(index) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__a,  // fetch(index, &value) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__a,  // assign(index, value) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__a  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(study_interface__msg__Line, b),  // bytes offset in struct
    NULL,  // default value
    study_interface__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__b,  // size() function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__b,  // get_const(index) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__b,  // get(index) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__b,  // fetch(index, &value) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__b,  // assign(index, value) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__b  // resize(index) function pointer
  },
  {
    "c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(study_interface__msg__Line, c),  // bytes offset in struct
    NULL,  // default value
    study_interface__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__c,  // size() function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__c,  // get_const(index) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__c,  // get(index) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__c,  // fetch(index, &value) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__c,  // assign(index, value) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__c  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(study_interface__msg__Line, distance),  // bytes offset in struct
    NULL,  // default value
    study_interface__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__distance,  // size() function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__distance,  // get_const(index) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__distance,  // get(index) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__distance,  // fetch(index, &value) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__distance,  // assign(index, value) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__distance  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(study_interface__msg__Line, theta),  // bytes offset in struct
    NULL,  // default value
    study_interface__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__theta,  // size() function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__theta,  // get_const(index) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__theta,  // get(index) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__theta,  // fetch(index, &value) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__theta,  // assign(index, value) function pointer
    study_interface__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__theta  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers study_interface__msg__Line__rosidl_typesupport_introspection_c__Line_message_members = {
  "study_interface__msg",  // message namespace
  "Line",  // message name
  9,  // number of fields
  sizeof(study_interface__msg__Line),
  false,  // has_any_key_member_
  study_interface__msg__Line__rosidl_typesupport_introspection_c__Line_message_member_array,  // message members
  study_interface__msg__Line__rosidl_typesupport_introspection_c__Line_init_function,  // function to initialize message memory (memory has to be allocated)
  study_interface__msg__Line__rosidl_typesupport_introspection_c__Line_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t study_interface__msg__Line__rosidl_typesupport_introspection_c__Line_message_type_support_handle = {
  0,
  &study_interface__msg__Line__rosidl_typesupport_introspection_c__Line_message_members,
  get_message_typesupport_handle_function,
  &study_interface__msg__Line__get_type_hash,
  &study_interface__msg__Line__get_type_description,
  &study_interface__msg__Line__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_study_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, study_interface, msg, Line)() {
  if (!study_interface__msg__Line__rosidl_typesupport_introspection_c__Line_message_type_support_handle.typesupport_identifier) {
    study_interface__msg__Line__rosidl_typesupport_introspection_c__Line_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &study_interface__msg__Line__rosidl_typesupport_introspection_c__Line_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
