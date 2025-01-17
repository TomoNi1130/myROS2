// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from study_interface:msg/Line.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "study_interface/msg/line.hpp"


#ifndef STUDY_INTERFACE__MSG__DETAIL__LINE__TRAITS_HPP_
#define STUDY_INTERFACE__MSG__DETAIL__LINE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "study_interface/msg/detail/line__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace study_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Line & msg,
  std::ostream & out)
{
  out << "{";
  // member: low_x
  {
    if (msg.low_x.size() == 0) {
      out << "low_x: []";
    } else {
      out << "low_x: [";
      size_t pending_items = msg.low_x.size();
      for (auto item : msg.low_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: high_x
  {
    if (msg.high_x.size() == 0) {
      out << "high_x: []";
    } else {
      out << "high_x: [";
      size_t pending_items = msg.high_x.size();
      for (auto item : msg.high_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: low_y
  {
    if (msg.low_y.size() == 0) {
      out << "low_y: []";
    } else {
      out << "low_y: [";
      size_t pending_items = msg.low_y.size();
      for (auto item : msg.low_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: high_y
  {
    if (msg.high_y.size() == 0) {
      out << "high_y: []";
    } else {
      out << "high_y: [";
      size_t pending_items = msg.high_y.size();
      for (auto item : msg.high_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: a
  {
    if (msg.a.size() == 0) {
      out << "a: []";
    } else {
      out << "a: [";
      size_t pending_items = msg.a.size();
      for (auto item : msg.a) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: b
  {
    if (msg.b.size() == 0) {
      out << "b: []";
    } else {
      out << "b: [";
      size_t pending_items = msg.b.size();
      for (auto item : msg.b) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: c
  {
    if (msg.c.size() == 0) {
      out << "c: []";
    } else {
      out << "c: [";
      size_t pending_items = msg.c.size();
      for (auto item : msg.c) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: distance
  {
    if (msg.distance.size() == 0) {
      out << "distance: []";
    } else {
      out << "distance: [";
      size_t pending_items = msg.distance.size();
      for (auto item : msg.distance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: theta
  {
    if (msg.theta.size() == 0) {
      out << "theta: []";
    } else {
      out << "theta: [";
      size_t pending_items = msg.theta.size();
      for (auto item : msg.theta) {
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
  const Line & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: low_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.low_x.size() == 0) {
      out << "low_x: []\n";
    } else {
      out << "low_x:\n";
      for (auto item : msg.low_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: high_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.high_x.size() == 0) {
      out << "high_x: []\n";
    } else {
      out << "high_x:\n";
      for (auto item : msg.high_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: low_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.low_y.size() == 0) {
      out << "low_y: []\n";
    } else {
      out << "low_y:\n";
      for (auto item : msg.low_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: high_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.high_y.size() == 0) {
      out << "high_y: []\n";
    } else {
      out << "high_y:\n";
      for (auto item : msg.high_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.a.size() == 0) {
      out << "a: []\n";
    } else {
      out << "a:\n";
      for (auto item : msg.a) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.b.size() == 0) {
      out << "b: []\n";
    } else {
      out << "b:\n";
      for (auto item : msg.b) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.c.size() == 0) {
      out << "c: []\n";
    } else {
      out << "c:\n";
      for (auto item : msg.c) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.distance.size() == 0) {
      out << "distance: []\n";
    } else {
      out << "distance:\n";
      for (auto item : msg.distance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.theta.size() == 0) {
      out << "theta: []\n";
    } else {
      out << "theta:\n";
      for (auto item : msg.theta) {
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

inline std::string to_yaml(const Line & msg, bool use_flow_style = false)
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
  const study_interface::msg::Line & msg,
  std::ostream & out, size_t indentation = 0)
{
  study_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use study_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const study_interface::msg::Line & msg)
{
  return study_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<study_interface::msg::Line>()
{
  return "study_interface::msg::Line";
}

template<>
inline const char * name<study_interface::msg::Line>()
{
  return "study_interface/msg/Line";
}

template<>
struct has_fixed_size<study_interface::msg::Line>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<study_interface::msg::Line>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<study_interface::msg::Line>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STUDY_INTERFACE__MSG__DETAIL__LINE__TRAITS_HPP_
