// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from study_interface:msg/Circle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "study_interface/msg/detail/circle__rosidl_typesupport_introspection_c.h"
#include "study_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "study_interface/msg/detail/circle__functions.h"
#include "study_interface/msg/detail/circle__struct.h"


// Include directives for member types
// Member `centerx`
// Member `centery`
// Member `radius`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void study_interface__msg__Circle__rosidl_typesupport_introspection_c__Circle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  study_interface__msg__Circle__init(message_memory);
}

void study_interface__msg__Circle__rosidl_typesupport_introspection_c__Circle_fini_function(void * message_memory)
{
  study_interface__msg__Circle__fini(message_memory);
}

size_t study_interface__msg__Circle__rosidl_typesupport_introspection_c__size_function__Circle__centerx(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * study_interface__msg__Circle__rosidl_typesupport_introspection_c__get_const_function__Circle__centerx(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * study_interface__msg__Circle__rosidl_typesupport_introspection_c__get_function__Circle__centerx(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void study_interface__msg__Circle__rosidl_typesupport_introspection_c__fetch_function__Circle__centerx(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__get_const_function__Circle__centerx(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void study_interface__msg__Circle__rosidl_typesupport_introspection_c__assign_function__Circle__centerx(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__get_function__Circle__centerx(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool study_interface__msg__Circle__rosidl_typesupport_introspection_c__resize_function__Circle__centerx(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t study_interface__msg__Circle__rosidl_typesupport_introspection_c__size_function__Circle__centery(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * study_interface__msg__Circle__rosidl_typesupport_introspection_c__get_const_function__Circle__centery(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * study_interface__msg__Circle__rosidl_typesupport_introspection_c__get_function__Circle__centery(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void study_interface__msg__Circle__rosidl_typesupport_introspection_c__fetch_function__Circle__centery(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__get_const_function__Circle__centery(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void study_interface__msg__Circle__rosidl_typesupport_introspection_c__assign_function__Circle__centery(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__get_function__Circle__centery(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool study_interface__msg__Circle__rosidl_typesupport_introspection_c__resize_function__Circle__centery(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t study_interface__msg__Circle__rosidl_typesupport_introspection_c__size_function__Circle__radius(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * study_interface__msg__Circle__rosidl_typesupport_introspection_c__get_const_function__Circle__radius(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * study_interface__msg__Circle__rosidl_typesupport_introspection_c__get_function__Circle__radius(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void study_interface__msg__Circle__rosidl_typesupport_introspection_c__fetch_function__Circle__radius(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__get_const_function__Circle__radius(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void study_interface__msg__Circle__rosidl_typesupport_introspection_c__assign_function__Circle__radius(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__get_function__Circle__radius(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool study_interface__msg__Circle__rosidl_typesupport_introspection_c__resize_function__Circle__radius(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember study_interface__msg__Circle__rosidl_typesupport_introspection_c__Circle_message_member_array[3] = {
  {
    "centerx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(study_interface__msg__Circle, centerx),  // bytes offset in struct
    NULL,  // default value
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__size_function__Circle__centerx,  // size() function pointer
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__get_const_function__Circle__centerx,  // get_const(index) function pointer
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__get_function__Circle__centerx,  // get(index) function pointer
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__fetch_function__Circle__centerx,  // fetch(index, &value) function pointer
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__assign_function__Circle__centerx,  // assign(index, value) function pointer
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__resize_function__Circle__centerx  // resize(index) function pointer
  },
  {
    "centery",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(study_interface__msg__Circle, centery),  // bytes offset in struct
    NULL,  // default value
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__size_function__Circle__centery,  // size() function pointer
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__get_const_function__Circle__centery,  // get_const(index) function pointer
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__get_function__Circle__centery,  // get(index) function pointer
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__fetch_function__Circle__centery,  // fetch(index, &value) function pointer
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__assign_function__Circle__centery,  // assign(index, value) function pointer
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__resize_function__Circle__centery  // resize(index) function pointer
  },
  {
    "radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(study_interface__msg__Circle, radius),  // bytes offset in struct
    NULL,  // default value
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__size_function__Circle__radius,  // size() function pointer
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__get_const_function__Circle__radius,  // get_const(index) function pointer
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__get_function__Circle__radius,  // get(index) function pointer
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__fetch_function__Circle__radius,  // fetch(index, &value) function pointer
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__assign_function__Circle__radius,  // assign(index, value) function pointer
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__resize_function__Circle__radius  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers study_interface__msg__Circle__rosidl_typesupport_introspection_c__Circle_message_members = {
  "study_interface__msg",  // message namespace
  "Circle",  // message name
  3,  // number of fields
  sizeof(study_interface__msg__Circle),
  false,  // has_any_key_member_
  study_interface__msg__Circle__rosidl_typesupport_introspection_c__Circle_message_member_array,  // message members
  study_interface__msg__Circle__rosidl_typesupport_introspection_c__Circle_init_function,  // function to initialize message memory (memory has to be allocated)
  study_interface__msg__Circle__rosidl_typesupport_introspection_c__Circle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t study_interface__msg__Circle__rosidl_typesupport_introspection_c__Circle_message_type_support_handle = {
  0,
  &study_interface__msg__Circle__rosidl_typesupport_introspection_c__Circle_message_members,
  get_message_typesupport_handle_function,
  &study_interface__msg__Circle__get_type_hash,
  &study_interface__msg__Circle__get_type_description,
  &study_interface__msg__Circle__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_study_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, study_interface, msg, Circle)() {
  if (!study_interface__msg__Circle__rosidl_typesupport_introspection_c__Circle_message_type_support_handle.typesupport_identifier) {
    study_interface__msg__Circle__rosidl_typesupport_introspection_c__Circle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &study_interface__msg__Circle__rosidl_typesupport_introspection_c__Circle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
