// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from study_interface:msg/Cloud.idl
// generated code does not contain a copyright notice
#include "study_interface/msg/detail/cloud__rosidl_typesupport_fastrtps_cpp.hpp"
#include "study_interface/msg/detail/cloud__functions.h"
#include "study_interface/msg/detail/cloud__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace study_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_study_interface
cdr_serialize(
  const study_interface::msg::Cloud & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cloudx
  {
    cdr << ros_message.cloudx;
  }

  // Member: cloudy
  {
    cdr << ros_message.cloudy;
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_study_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  study_interface::msg::Cloud & ros_message)
{
  // Member: cloudx
  {
    cdr >> ros_message.cloudx;
  }

  // Member: cloudy
  {
    cdr >> ros_message.cloudy;
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_study_interface
get_serialized_size(
  const study_interface::msg::Cloud & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cloudx
  {
    size_t array_size = 150;
    size_t item_size = sizeof(ros_message.cloudx[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cloudy
  {
    size_t array_size = 150;
    size_t item_size = sizeof(ros_message.cloudy[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_study_interface
max_serialized_size_Cloud(
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

  // Member: cloudx
  {
    size_t array_size = 150;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: cloudy
  {
    size_t array_size = 150;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = study_interface::msg::Cloud;
    is_plain =
      (
      offsetof(DataType, cloudy) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_study_interface
cdr_serialize_key(
  const study_interface::msg::Cloud & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cloudx
  {
    cdr << ros_message.cloudx;
  }

  // Member: cloudy
  {
    cdr << ros_message.cloudy;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_study_interface
get_serialized_size_key(
  const study_interface::msg::Cloud & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cloudx
  {
    size_t array_size = 150;
    size_t item_size = sizeof(ros_message.cloudx[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cloudy
  {
    size_t array_size = 150;
    size_t item_size = sizeof(ros_message.cloudy[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_study_interface
max_serialized_size_key_Cloud(
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

  // Member: cloudx
  {
    size_t array_size = 150;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cloudy
  {
    size_t array_size = 150;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = study_interface::msg::Cloud;
    is_plain =
      (
      offsetof(DataType, cloudy) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _Cloud__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const study_interface::msg::Cloud *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Cloud__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<study_interface::msg::Cloud *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Cloud__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const study_interface::msg::Cloud *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Cloud__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Cloud(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Cloud__callbacks = {
  "study_interface::msg",
  "Cloud",
  _Cloud__cdr_serialize,
  _Cloud__cdr_deserialize,
  _Cloud__get_serialized_size,
  _Cloud__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Cloud__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Cloud__callbacks,
  get_message_typesupport_handle_function,
  &study_interface__msg__Cloud__get_type_hash,
  &study_interface__msg__Cloud__get_type_description,
  &study_interface__msg__Cloud__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace study_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_study_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<study_interface::msg::Cloud>()
{
  return &study_interface::msg::typesupport_fastrtps_cpp::_Cloud__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, study_interface, msg, Cloud)() {
  return &study_interface::msg::typesupport_fastrtps_cpp::_Cloud__handle;
}

#ifdef __cplusplus
}
#endif
