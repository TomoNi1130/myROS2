// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from study_interface:msg/Circle.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "study_interface/msg/detail/circle__struct.h"
#include "study_interface/msg/detail/circle__type_support.h"
#include "study_interface/msg/detail/circle__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace study_interface
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Circle_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Circle_type_support_ids_t;

static const _Circle_type_support_ids_t _Circle_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Circle_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Circle_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Circle_type_support_symbol_names_t _Circle_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, study_interface, msg, Circle)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, study_interface, msg, Circle)),
  }
};

typedef struct _Circle_type_support_data_t
{
  void * data[2];
} _Circle_type_support_data_t;

static _Circle_type_support_data_t _Circle_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Circle_message_typesupport_map = {
  2,
  "study_interface",
  &_Circle_message_typesupport_ids.typesupport_identifier[0],
  &_Circle_message_typesupport_symbol_names.symbol_name[0],
  &_Circle_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Circle_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Circle_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &study_interface__msg__Circle__get_type_hash,
  &study_interface__msg__Circle__get_type_description,
  &study_interface__msg__Circle__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace study_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, study_interface, msg, Circle)() {
  return &::study_interface::msg::rosidl_typesupport_c::Circle_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
