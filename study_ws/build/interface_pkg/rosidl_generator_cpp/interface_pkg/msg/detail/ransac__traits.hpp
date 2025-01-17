// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_pkg:msg/Ransac.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interface_pkg/msg/ransac.hpp"


#ifndef INTERFACE_PKG__MSG__DETAIL__RANSAC__TRAITS_HPP_
#define INTERFACE_PKG__MSG__DETAIL__RANSAC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_pkg/msg/detail/ransac__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ransac & msg,
  std::ostream & out)
{
  out << "{";
  // member: low_x
  {
    out << "low_x: ";
    rosidl_generator_traits::value_to_yaml(msg.low_x, out);
    out << ", ";
  }

  // member: high_x
  {
    out << "high_x: ";
    rosidl_generator_traits::value_to_yaml(msg.high_x, out);
    out << ", ";
  }

  // member: low_y
  {
    out << "low_y: ";
    rosidl_generator_traits::value_to_yaml(msg.low_y, out);
    out << ", ";
  }

  // member: high_y
  {
    out << "high_y: ";
    rosidl_generator_traits::value_to_yaml(msg.high_y, out);
    out << ", ";
  }

  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ransac & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: low_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_x: ";
    rosidl_generator_traits::value_to_yaml(msg.low_x, out);
    out << "\n";
  }

  // member: high_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "high_x: ";
    rosidl_generator_traits::value_to_yaml(msg.high_x, out);
    out << "\n";
  }

  // member: low_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_y: ";
    rosidl_generator_traits::value_to_yaml(msg.low_y, out);
    out << "\n";
  }

  // member: high_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "high_y: ";
    rosidl_generator_traits::value_to_yaml(msg.high_y, out);
    out << "\n";
  }

  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ransac & msg, bool use_flow_style = false)
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

}  // namespace interface_pkg

namespace rosidl_generator_traits
{

[[deprecated("use interface_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_pkg::msg::Ransac & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_pkg::msg::Ransac & msg)
{
  return interface_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_pkg::msg::Ransac>()
{
  return "interface_pkg::msg::Ransac";
}

template<>
inline const char * name<interface_pkg::msg::Ransac>()
{
  return "interface_pkg/msg/Ransac";
}

template<>
struct has_fixed_size<interface_pkg::msg::Ransac>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_pkg::msg::Ransac>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_pkg::msg::Ransac>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PKG__MSG__DETAIL__RANSAC__TRAITS_HPP_
