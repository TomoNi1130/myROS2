// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from study_interface:msg/Circle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "study_interface/msg/circle.hpp"


#ifndef STUDY_INTERFACE__MSG__DETAIL__CIRCLE__TRAITS_HPP_
#define STUDY_INTERFACE__MSG__DETAIL__CIRCLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "study_interface/msg/detail/circle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace study_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Circle & msg,
  std::ostream & out)
{
  out << "{";
  // member: centerx
  {
    if (msg.centerx.size() == 0) {
      out << "centerx: []";
    } else {
      out << "centerx: [";
      size_t pending_items = msg.centerx.size();
      for (auto item : msg.centerx) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: centery
  {
    if (msg.centery.size() == 0) {
      out << "centery: []";
    } else {
      out << "centery: [";
      size_t pending_items = msg.centery.size();
      for (auto item : msg.centery) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: radius
  {
    if (msg.radius.size() == 0) {
      out << "radius: []";
    } else {
      out << "radius: [";
      size_t pending_items = msg.radius.size();
      for (auto item : msg.radius) {
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
  const Circle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: centerx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.centerx.size() == 0) {
      out << "centerx: []\n";
    } else {
      out << "centerx:\n";
      for (auto item : msg.centerx) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: centery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.centery.size() == 0) {
      out << "centery: []\n";
    } else {
      out << "centery:\n";
      for (auto item : msg.centery) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.radius.size() == 0) {
      out << "radius: []\n";
    } else {
      out << "radius:\n";
      for (auto item : msg.radius) {
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

inline std::string to_yaml(const Circle & msg, bool use_flow_style = false)
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
  const study_interface::msg::Circle & msg,
  std::ostream & out, size_t indentation = 0)
{
  study_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use study_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const study_interface::msg::Circle & msg)
{
  return study_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<study_interface::msg::Circle>()
{
  return "study_interface::msg::Circle";
}

template<>
inline const char * name<study_interface::msg::Circle>()
{
  return "study_interface/msg/Circle";
}

template<>
struct has_fixed_size<study_interface::msg::Circle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<study_interface::msg::Circle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<study_interface::msg::Circle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STUDY_INTERFACE__MSG__DETAIL__CIRCLE__TRAITS_HPP_
