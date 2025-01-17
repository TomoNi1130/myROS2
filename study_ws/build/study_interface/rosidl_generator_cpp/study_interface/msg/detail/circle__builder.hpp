// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from study_interface:msg/Circle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "study_interface/msg/circle.hpp"


#ifndef STUDY_INTERFACE__MSG__DETAIL__CIRCLE__BUILDER_HPP_
#define STUDY_INTERFACE__MSG__DETAIL__CIRCLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "study_interface/msg/detail/circle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace study_interface
{

namespace msg
{

namespace builder
{

class Init_Circle_radius
{
public:
  explicit Init_Circle_radius(::study_interface::msg::Circle & msg)
  : msg_(msg)
  {}
  ::study_interface::msg::Circle radius(::study_interface::msg::Circle::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::study_interface::msg::Circle msg_;
};

class Init_Circle_centery
{
public:
  explicit Init_Circle_centery(::study_interface::msg::Circle & msg)
  : msg_(msg)
  {}
  Init_Circle_radius centery(::study_interface::msg::Circle::_centery_type arg)
  {
    msg_.centery = std::move(arg);
    return Init_Circle_radius(msg_);
  }

private:
  ::study_interface::msg::Circle msg_;
};

class Init_Circle_centerx
{
public:
  Init_Circle_centerx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Circle_centery centerx(::study_interface::msg::Circle::_centerx_type arg)
  {
    msg_.centerx = std::move(arg);
    return Init_Circle_centery(msg_);
  }

private:
  ::study_interface::msg::Circle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::study_interface::msg::Circle>()
{
  return study_interface::msg::builder::Init_Circle_centerx();
}

}  // namespace study_interface

#endif  // STUDY_INTERFACE__MSG__DETAIL__CIRCLE__BUILDER_HPP_
