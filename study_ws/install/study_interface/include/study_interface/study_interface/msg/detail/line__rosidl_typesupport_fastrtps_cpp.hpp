// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from study_interface:msg/Line.idl
// generated code does not contain a copyright notice

#ifndef STUDY_INTERFACE__MSG__DETAIL__LINE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define STUDY_INTERFACE__MSG__DETAIL__LINE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "study_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "study_interface/msg/detail/line__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace study_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_study_interface
cdr_serialize(
  const study_interface::msg::Line & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_study_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  study_interface::msg::Line & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_study_interface
get_serialized_size(
  const study_interface::msg::Line & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_study_interface
max_serialized_size_Line(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_study_interface
cdr_serialize_key(
  const study_interface::msg::Line & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_study_interface
get_serialized_size_key(
  const study_interface::msg::Line & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_study_interface
max_serialized_size_key_Line(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace study_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_study_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, study_interface, msg, Line)();

#ifdef __cplusplus
}
#endif

#endif  // STUDY_INTERFACE__MSG__DETAIL__LINE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
