// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from study_interface:msg/Circle.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "study_interface/msg/detail/circle__functions.h"
#include "study_interface/msg/detail/circle__struct.hpp"
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

void Circle_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) study_interface::msg::Circle(_init);
}

void Circle_fini_function(void * message_memory)
{
  auto typed_message = static_cast<study_interface::msg::Circle *>(message_memory);
  typed_message->~Circle();
}

size_t size_function__Circle__centerx(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Circle__centerx(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Circle__centerx(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__Circle__centerx(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Circle__centerx(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Circle__centerx(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Circle__centerx(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__Circle__centerx(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Circle__centery(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Circle__centery(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Circle__centery(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__Circle__centery(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Circle__centery(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Circle__centery(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Circle__centery(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__Circle__centery(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Circle__radius(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Circle__radius(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Circle__radius(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__Circle__radius(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Circle__radius(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Circle__radius(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Circle__radius(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__Circle__radius(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Circle_message_member_array[3] = {
  {
    "centerx",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(study_interface::msg::Circle, centerx),  // bytes offset in struct
    nullptr,  // default value
    size_function__Circle__centerx,  // size() function pointer
    get_const_function__Circle__centerx,  // get_const(index) function pointer
    get_function__Circle__centerx,  // get(index) function pointer
    fetch_function__Circle__centerx,  // fetch(index, &value) function pointer
    assign_function__Circle__centerx,  // assign(index, value) function pointer
    resize_function__Circle__centerx  // resize(index) function pointer
  },
  {
    "centery",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(study_interface::msg::Circle, centery),  // bytes offset in struct
    nullptr,  // default value
    size_function__Circle__centery,  // size() function pointer
    get_const_function__Circle__centery,  // get_const(index) function pointer
    get_function__Circle__centery,  // get(index) function pointer
    fetch_function__Circle__centery,  // fetch(index, &value) function pointer
    assign_function__Circle__centery,  // assign(index, value) function pointer
    resize_function__Circle__centery  // resize(index) function pointer
  },
  {
    "radius",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(study_interface::msg::Circle, radius),  // bytes offset in struct
    nullptr,  // default value
    size_function__Circle__radius,  // size() function pointer
    get_const_function__Circle__radius,  // get_const(index) function pointer
    get_function__Circle__radius,  // get(index) function pointer
    fetch_function__Circle__radius,  // fetch(index, &value) function pointer
    assign_function__Circle__radius,  // assign(index, value) function pointer
    resize_function__Circle__radius  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Circle_message_members = {
  "study_interface::msg",  // message namespace
  "Circle",  // message name
  3,  // number of fields
  sizeof(study_interface::msg::Circle),
  false,  // has_any_key_member_
  Circle_message_member_array,  // message members
  Circle_init_function,  // function to initialize message memory (memory has to be allocated)
  Circle_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Circle_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Circle_message_members,
  get_message_typesupport_handle_function,
  &study_interface__msg__Circle__get_type_hash,
  &study_interface__msg__Circle__get_type_description,
  &study_interface__msg__Circle__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace study_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<study_interface::msg::Circle>()
{
  return &::study_interface::msg::rosidl_typesupport_introspection_cpp::Circle_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, study_interface, msg, Circle)() {
  return &::study_interface::msg::rosidl_typesupport_introspection_cpp::Circle_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
