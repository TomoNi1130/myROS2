// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from study_interface:msg/Cloud.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "study_interface/msg/cloud.hpp"


#ifndef STUDY_INTERFACE__MSG__DETAIL__CLOUD__TRAITS_HPP_
#define STUDY_INTERFACE__MSG__DETAIL__CLOUD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "study_interface/msg/detail/cloud__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace study_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Cloud & msg,
  std::ostream & out)
{
  out << "{";
  // member: cloudx
  {
    if (msg.cloudx.size() == 0) {
      out << "cloudx: []";
    } else {
      out << "cloudx: [";
      size_t pending_items = msg.cloudx.size();
      for (auto item : msg.cloudx) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cloudy
  {
    if (msg.cloudy.size() == 0) {
      out << "cloudy: []";
    } else {
      out << "cloudy: [";
      size_t pending_items = msg.cloudy.size();
      for (auto item : msg.cloudy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Cloud & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cloudx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cloudx.size() == 0) {
      out << "cloudx: []\n";
    } else {
      out << "cloudx:\n";
      for (auto item : msg.cloudx) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cloudy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cloudy.size() == 0) {
      out << "cloudy: []\n";
    } else {
      out << "cloudy:\n";
      for (auto item : msg.cloudy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Cloud & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace study_interface

namespace rosidl_generator_traits
{

[[deprecated("use study_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const study_interface::msg::Cloud & msg,
  std::ostream & out, size_t indentation = 0)
{
  study_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use study_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const study_interface::msg::Cloud & msg)
{
  return study_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<study_interface::msg::Cloud>()
{
  return "study_interface::msg::Cloud";
}

template<>
inline const char * name<study_interface::msg::Cloud>()
{
  return "study_interface/msg/Cloud";
}

template<>
struct has_fixed_size<study_interface::msg::Cloud>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<study_interface::msg::Cloud>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<study_interface::msg::Cloud>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STUDY_INTERFACE__MSG__DETAIL__CLOUD__TRAITS_HPP_
