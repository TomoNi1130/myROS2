// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from study_interface:msg/Circle.idl
// generated code does not contain a copyright notice
#ifndef STUDY_INTERFACE__MSG__DETAIL__CIRCLE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define STUDY_INTERFACE__MSG__DETAIL__CIRCLE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "study_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "study_interface/msg/detail/circle__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_study_interface
bool cdr_serialize_study_interface__msg__Circle(
  const study_interface__msg__Circle * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_study_interface
bool cdr_deserialize_study_interface__msg__Circle(
  eprosima::fastcdr::Cdr &,
  study_interface__msg__Circle * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_study_interface
size_t get_serialized_size_study_interface__msg__Circle(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_study_interface
size_t max_serialized_size_study_interface__msg__Circle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_study_interface
bool cdr_serialize_key_study_interface__msg__Circle(
  const study_interface__msg__Circle * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_study_interface
size_t get_serialized_size_key_study_interface__msg__Circle(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_study_interface
size_t max_serialized_size_key_study_interface__msg__Circle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_study_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, study_interface, msg, Circle)();

#ifdef __cplusplus
}
#endif

#endif  // STUDY_INTERFACE__MSG__DETAIL__CIRCLE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
