// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from interface_pkg:msg/Ransac.idl
// generated code does not contain a copyright notice
#ifndef INTERFACE_PKG__MSG__DETAIL__RANSAC__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define INTERFACE_PKG__MSG__DETAIL__RANSAC__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "interface_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interface_pkg/msg/detail/ransac__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_pkg
bool cdr_serialize_interface_pkg__msg__Ransac(
  const interface_pkg__msg__Ransac * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_pkg
bool cdr_deserialize_interface_pkg__msg__Ransac(
  eprosima::fastcdr::Cdr &,
  interface_pkg__msg__Ransac * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_pkg
size_t get_serialized_size_interface_pkg__msg__Ransac(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_pkg
size_t max_serialized_size_interface_pkg__msg__Ransac(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_pkg
bool cdr_serialize_key_interface_pkg__msg__Ransac(
  const interface_pkg__msg__Ransac * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_pkg
size_t get_serialized_size_key_interface_pkg__msg__Ransac(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_pkg
size_t max_serialized_size_key_interface_pkg__msg__Ransac(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface_pkg, msg, Ransac)();

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PKG__MSG__DETAIL__RANSAC__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
