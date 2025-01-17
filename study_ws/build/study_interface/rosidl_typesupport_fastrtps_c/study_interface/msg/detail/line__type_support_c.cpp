// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from study_interface:msg/Line.idl
// generated code does not contain a copyright notice
#include "study_interface/msg/detail/line__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "study_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "study_interface/msg/detail/line__struct.h"
#include "study_interface/msg/detail/line__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // a, b, c, distance, high_x, high_y, low_x, low_y, theta
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // a, b, c, distance, high_x, high_y, low_x, low_y, theta

// forward declare type support functions


using _Line__ros_msg_type = study_interface__msg__Line;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_study_interface
bool cdr_serialize_study_interface__msg__Line(
  const study_interface__msg__Line * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: low_x
  {
    size_t size = ros_message->low_x.size;
    auto array_ptr = ros_message->low_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: high_x
  {
    size_t size = ros_message->high_x.size;
    auto array_ptr = ros_message->high_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: low_y
  {
    size_t size = ros_message->low_y.size;
    auto array_ptr = ros_message->low_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: high_y
  {
    size_t size = ros_message->high_y.size;
    auto array_ptr = ros_message->high_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: a
  {
    size_t size = ros_message->a.size;
    auto array_ptr = ros_message->a.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: b
  {
    size_t size = ros_message->b.size;
    auto array_ptr = ros_message->b.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: c
  {
    size_t size = ros_message->c.size;
    auto array_ptr = ros_message->c.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: distance
  {
    size_t size = ros_message->distance.size;
    auto array_ptr = ros_message->distance.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: theta
  {
    size_t size = ros_message->theta.size;
    auto array_ptr = ros_message->theta.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_study_interface
bool cdr_deserialize_study_interface__msg__Line(
  eprosima::fastcdr::Cdr & cdr,
  study_interface__msg__Line * ros_message)
{
  // Field name: low_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->low_x.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->low_x);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->low_x, size)) {
      fprintf(stderr, "failed to create array for field 'low_x'");
      return false;
    }
    auto array_ptr = ros_message->low_x.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: high_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->high_x.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->high_x);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->high_x, size)) {
      fprintf(stderr, "failed to create array for field 'high_x'");
      return false;
    }
    auto array_ptr = ros_message->high_x.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: low_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->low_y.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->low_y);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->low_y, size)) {
      fprintf(stderr, "failed to create array for field 'low_y'");
      return false;
    }
    auto array_ptr = ros_message->low_y.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: high_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->high_y.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->high_y);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->high_y, size)) {
      fprintf(stderr, "failed to create array for field 'high_y'");
      return false;
    }
    auto array_ptr = ros_message->high_y.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: a
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->a.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->a);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->a, size)) {
      fprintf(stderr, "failed to create array for field 'a'");
      return false;
    }
    auto array_ptr = ros_message->a.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: b
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->b.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->b);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->b, size)) {
      fprintf(stderr, "failed to create array for field 'b'");
      return false;
    }
    auto array_ptr = ros_message->b.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: c
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->c.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->c);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->c, size)) {
      fprintf(stderr, "failed to create array for field 'c'");
      return false;
    }
    auto array_ptr = ros_message->c.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: distance
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->distance.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->distance);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->distance, size)) {
      fprintf(stderr, "failed to create array for field 'distance'");
      return false;
    }
    auto array_ptr = ros_message->distance.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: theta
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->theta.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->theta);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->theta, size)) {
      fprintf(stderr, "failed to create array for field 'theta'");
      return false;
    }
    auto array_ptr = ros_message->theta.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_study_interface
size_t get_serialized_size_study_interface__msg__Line(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Line__ros_msg_type * ros_message = static_cast<const _Line__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: low_x
  {
    size_t array_size = ros_message->low_x.size;
    auto array_ptr = ros_message->low_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: high_x
  {
    size_t array_size = ros_message->high_x.size;
    auto array_ptr = ros_message->high_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: low_y
  {
    size_t array_size = ros_message->low_y.size;
    auto array_ptr = ros_message->low_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: high_y
  {
    size_t array_size = ros_message->high_y.size;
    auto array_ptr = ros_message->high_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: a
  {
    size_t array_size = ros_message->a.size;
    auto array_ptr = ros_message->a.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: b
  {
    size_t array_size = ros_message->b.size;
    auto array_ptr = ros_message->b.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: c
  {
    size_t array_size = ros_message->c.size;
    auto array_ptr = ros_message->c.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: distance
  {
    size_t array_size = ros_message->distance.size;
    auto array_ptr = ros_message->distance.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: theta
  {
    size_t array_size = ros_message->theta.size;
    auto array_ptr = ros_message->theta.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_study_interface
size_t max_serialized_size_study_interface__msg__Line(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: low_x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: high_x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: low_y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: high_y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: a
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: b
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: c
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: distance
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: theta
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = study_interface__msg__Line;
    is_plain =
      (
      offsetof(DataType, theta) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_study_interface
bool cdr_serialize_key_study_interface__msg__Line(
  const study_interface__msg__Line * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: low_x
  {
    size_t size = ros_message->low_x.size;
    auto array_ptr = ros_message->low_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: high_x
  {
    size_t size = ros_message->high_x.size;
    auto array_ptr = ros_message->high_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: low_y
  {
    size_t size = ros_message->low_y.size;
    auto array_ptr = ros_message->low_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: high_y
  {
    size_t size = ros_message->high_y.size;
    auto array_ptr = ros_message->high_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: a
  {
    size_t size = ros_message->a.size;
    auto array_ptr = ros_message->a.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: b
  {
    size_t size = ros_message->b.size;
    auto array_ptr = ros_message->b.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: c
  {
    size_t size = ros_message->c.size;
    auto array_ptr = ros_message->c.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: distance
  {
    size_t size = ros_message->distance.size;
    auto array_ptr = ros_message->distance.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: theta
  {
    size_t size = ros_message->theta.size;
    auto array_ptr = ros_message->theta.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_study_interface
size_t get_serialized_size_key_study_interface__msg__Line(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Line__ros_msg_type * ros_message = static_cast<const _Line__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: low_x
  {
    size_t array_size = ros_message->low_x.size;
    auto array_ptr = ros_message->low_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: high_x
  {
    size_t array_size = ros_message->high_x.size;
    auto array_ptr = ros_message->high_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: low_y
  {
    size_t array_size = ros_message->low_y.size;
    auto array_ptr = ros_message->low_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: high_y
  {
    size_t array_size = ros_message->high_y.size;
    auto array_ptr = ros_message->high_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: a
  {
    size_t array_size = ros_message->a.size;
    auto array_ptr = ros_message->a.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: b
  {
    size_t array_size = ros_message->b.size;
    auto array_ptr = ros_message->b.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: c
  {
    size_t array_size = ros_message->c.size;
    auto array_ptr = ros_message->c.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: distance
  {
    size_t array_size = ros_message->distance.size;
    auto array_ptr = ros_message->distance.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: theta
  {
    size_t array_size = ros_message->theta.size;
    auto array_ptr = ros_message->theta.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_study_interface
size_t max_serialized_size_key_study_interface__msg__Line(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: low_x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: high_x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: low_y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: high_y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: a
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: b
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: c
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: distance
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: theta
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = study_interface__msg__Line;
    is_plain =
      (
      offsetof(DataType, theta) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Line__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const study_interface__msg__Line * ros_message = static_cast<const study_interface__msg__Line *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_study_interface__msg__Line(ros_message, cdr);
}

static bool _Line__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  study_interface__msg__Line * ros_message = static_cast<study_interface__msg__Line *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_study_interface__msg__Line(cdr, ros_message);
}

static uint32_t _Line__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_study_interface__msg__Line(
      untyped_ros_message, 0));
}

static size_t _Line__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_study_interface__msg__Line(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Line = {
  "study_interface::msg",
  "Line",
  _Line__cdr_serialize,
  _Line__cdr_deserialize,
  _Line__get_serialized_size,
  _Line__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Line__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Line,
  get_message_typesupport_handle_function,
  &study_interface__msg__Line__get_type_hash,
  &study_interface__msg__Line__get_type_description,
  &study_interface__msg__Line__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, study_interface, msg, Line)() {
  return &_Line__type_support;
}

#if defined(__cplusplus)
}
#endif
