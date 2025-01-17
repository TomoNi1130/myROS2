// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from study_interface:msg/Cloud.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "study_interface/msg/detail/cloud__functions.h"
#include "study_interface/msg/detail/cloud__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace study_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Cloud_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) study_interface::msg::Cloud(_init);
}

void Cloud_fini_function(void * message_memory)
{
  auto typed_message = static_cast<study_interface::msg::Cloud *>(message_memory);
  typed_message->~Cloud();
}

size_t size_function__Cloud__cloudx(const void * untyped_member)
{
  (void)untyped_member;
  return 150;
}

const void * get_const_function__Cloud__cloudx(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 150> *>(untyped_member);
  return &member[index];
}

void * get_function__Cloud__cloudx(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 150> *>(untyped_member);
  return &member[index];
}

void fetch_function__Cloud__cloudx(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Cloud__cloudx(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Cloud__cloudx(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Cloud__cloudx(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__Cloud__cloudy(const void * untyped_member)
{
  (void)untyped_member;
  return 150;
}

const void * get_const_function__Cloud__cloudy(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 150> *>(untyped_member);
  return &member[index];
}

void * get_function__Cloud__cloudy(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 150> *>(untyped_member);
  return &member[index];
}

void fetch_function__Cloud__cloudy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Cloud__cloudy(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Cloud__cloudy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Cloud__cloudy(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Cloud_message_member_array[2] = {
  {
    "cloudx",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    150,  // array size
    false,  // is upper bound
    offsetof(study_interface::msg::Cloud, cloudx),  // bytes offset in struct
    nullptr,  // default value
    size_function__Cloud__cloudx,  // size() function pointer
    get_const_function__Cloud__cloudx,  // get_const(index) function pointer
    get_function__Cloud__cloudx,  // get(index) function pointer
    fetch_function__Cloud__cloudx,  // fetch(index, &value) function pointer
    assign_function__Cloud__cloudx,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cloudy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    150,  // array size
    false,  // is upper bound
    offsetof(study_interface::msg::Cloud, cloudy),  // bytes offset in struct
    nullptr,  // default value
    size_function__Cloud__cloudy,  // size() function pointer
    get_const_function__Cloud__cloudy,  // get_const(index) function pointer
    get_function__Cloud__cloudy,  // get(index) function pointer
    fetch_function__Cloud__cloudy,  // fetch(index, &value) function pointer
    assign_function__Cloud__cloudy,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Cloud_message_members = {
  "study_interface::msg",  // message namespace
  "Cloud",  // message name
  2,  // number of fields
  sizeof(study_interface::msg::Cloud),
  false,  // has_any_key_member_
  Cloud_message_member_array,  // message members
  Cloud_init_function,  // function to initialize message memory (memory has to be allocated)
  Cloud_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Cloud_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Cloud_message_members,
  get_message_typesupport_handle_function,
  &study_interface__msg__Cloud__get_type_hash,
  &study_interface__msg__Cloud__get_type_description,
  &study_interface__msg__Cloud__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace study_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<study_interface::msg::Cloud>()
{
  return &::study_interface::msg::rosidl_typesupport_introspection_cpp::Cloud_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, study_interface, msg, Cloud)() {
  return &::study_interface::msg::rosidl_typesupport_introspection_cpp::Cloud_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
