// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from study_interface:msg/Cloud.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "study_interface/msg/detail/cloud__rosidl_typesupport_introspection_c.h"
#include "study_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "study_interface/msg/detail/cloud__functions.h"
#include "study_interface/msg/detail/cloud__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void study_interface__msg__Cloud__rosidl_typesupport_introspection_c__Cloud_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  study_interface__msg__Cloud__init(message_memory);
}

void study_interface__msg__Cloud__rosidl_typesupport_introspection_c__Cloud_fini_function(void * message_memory)
{
  study_interface__msg__Cloud__fini(message_memory);
}

size_t study_interface__msg__Cloud__rosidl_typesupport_introspection_c__size_function__Cloud__cloudx(
  const void * untyped_member)
{
  (void)untyped_member;
  return 150;
}

const void * study_interface__msg__Cloud__rosidl_typesupport_introspection_c__get_const_function__Cloud__cloudx(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * study_interface__msg__Cloud__rosidl_typesupport_introspection_c__get_function__Cloud__cloudx(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void study_interface__msg__Cloud__rosidl_typesupport_introspection_c__fetch_function__Cloud__cloudx(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    study_interface__msg__Cloud__rosidl_typesupport_introspection_c__get_const_function__Cloud__cloudx(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void study_interface__msg__Cloud__rosidl_typesupport_introspection_c__assign_function__Cloud__cloudx(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    study_interface__msg__Cloud__rosidl_typesupport_introspection_c__get_function__Cloud__cloudx(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t study_interface__msg__Cloud__rosidl_typesupport_introspection_c__size_function__Cloud__cloudy(
  const void * untyped_member)
{
  (void)untyped_member;
  return 150;
}

const void * study_interface__msg__Cloud__rosidl_typesupport_introspection_c__get_const_function__Cloud__cloudy(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * study_interface__msg__Cloud__rosidl_typesupport_introspection_c__get_function__Cloud__cloudy(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void study_interface__msg__Cloud__rosidl_typesupport_introspection_c__fetch_function__Cloud__cloudy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    study_interface__msg__Cloud__rosidl_typesupport_introspection_c__get_const_function__Cloud__cloudy(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void study_interface__msg__Cloud__rosidl_typesupport_introspection_c__assign_function__Cloud__cloudy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    study_interface__msg__Cloud__rosidl_typesupport_introspection_c__get_function__Cloud__cloudy(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember study_interface__msg__Cloud__rosidl_typesupport_introspection_c__Cloud_message_member_array[2] = {
  {
    "cloudx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    150,  // array size
    false,  // is upper bound
    offsetof(study_interface__msg__Cloud, cloudx),  // bytes offset in struct
    NULL,  // default value
    study_interface__msg__Cloud__rosidl_typesupport_introspection_c__size_function__Cloud__cloudx,  // size() function pointer
    study_interface__msg__Cloud__rosidl_typesupport_introspection_c__get_const_function__Cloud__cloudx,  // get_const(index) function pointer
    study_interface__msg__Cloud__rosidl_typesupport_introspection_c__get_function__Cloud__cloudx,  // get(index) function pointer
    study_interface__msg__Cloud__rosidl_typesupport_introspection_c__fetch_function__Cloud__cloudx,  // fetch(index, &value) function pointer
    study_interface__msg__Cloud__rosidl_typesupport_introspection_c__assign_function__Cloud__cloudx,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cloudy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    150,  // array size
    false,  // is upper bound
    offsetof(study_interface__msg__Cloud, cloudy),  // bytes offset in struct
    NULL,  // default value
    study_interface__msg__Cloud__rosidl_typesupport_introspection_c__size_function__Cloud__cloudy,  // size() function pointer
    study_interface__msg__Cloud__rosidl_typesupport_introspection_c__get_const_function__Cloud__cloudy,  // get_const(index) function pointer
    study_interface__msg__Cloud__rosidl_typesupport_introspection_c__get_function__Cloud__cloudy,  // get(index) function pointer
    study_interface__msg__Cloud__rosidl_typesupport_introspection_c__fetch_function__Cloud__cloudy,  // fetch(index, &value) function pointer
    study_interface__msg__Cloud__rosidl_typesupport_introspection_c__assign_function__Cloud__cloudy,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers study_interface__msg__Cloud__rosidl_typesupport_introspection_c__Cloud_message_members = {
  "study_interface__msg",  // message namespace
  "Cloud",  // message name
  2,  // number of fields
  sizeof(study_interface__msg__Cloud),
  false,  // has_any_key_member_
  study_interface__msg__Cloud__rosidl_typesupport_introspection_c__Cloud_message_member_array,  // message members
  study_interface__msg__Cloud__rosidl_typesupport_introspection_c__Cloud_init_function,  // function to initialize message memory (memory has to be allocated)
  study_interface__msg__Cloud__rosidl_typesupport_introspection_c__Cloud_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t study_interface__msg__Cloud__rosidl_typesupport_introspection_c__Cloud_message_type_support_handle = {
  0,
  &study_interface__msg__Cloud__rosidl_typesupport_introspection_c__Cloud_message_members,
  get_message_typesupport_handle_function,
  &study_interface__msg__Cloud__get_type_hash,
  &study_interface__msg__Cloud__get_type_description,
  &study_interface__msg__Cloud__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_study_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, study_interface, msg, Cloud)() {
  if (!study_interface__msg__Cloud__rosidl_typesupport_introspection_c__Cloud_message_type_support_handle.typesupport_identifier) {
    study_interface__msg__Cloud__rosidl_typesupport_introspection_c__Cloud_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &study_interface__msg__Cloud__rosidl_typesupport_introspection_c__Cloud_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
