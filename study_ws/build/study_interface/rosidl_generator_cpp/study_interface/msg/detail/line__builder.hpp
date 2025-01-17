// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from study_interface:msg/Line.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "study_interface/msg/line.hpp"


#ifndef STUDY_INTERFACE__MSG__DETAIL__LINE__BUILDER_HPP_
#define STUDY_INTERFACE__MSG__DETAIL__LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "study_interface/msg/detail/line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace study_interface
{

namespace msg
{

namespace builder
{

class Init_Line_theta
{
public:
  explicit Init_Line_theta(::study_interface::msg::Line & msg)
  : msg_(msg)
  {}
  ::study_interface::msg::Line theta(::study_interface::msg::Line::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::study_interface::msg::Line msg_;
};

class Init_Line_distance
{
public:
  explicit Init_Line_distance(::study_interface::msg::Line & msg)
  : msg_(msg)
  {}
  Init_Line_theta distance(::study_interface::msg::Line::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Line_theta(msg_);
  }

private:
  ::study_interface::msg::Line msg_;
};

class Init_Line_c
{
public:
  explicit Init_Line_c(::study_interface::msg::Line & msg)
  : msg_(msg)
  {}
  Init_Line_distance c(::study_interface::msg::Line::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_Line_distance(msg_);
  }

private:
  ::study_interface::msg::Line msg_;
};

class Init_Line_b
{
public:
  explicit Init_Line_b(::study_interface::msg::Line & msg)
  : msg_(msg)
  {}
  Init_Line_c b(::study_interface::msg::Line::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Line_c(msg_);
  }

private:
  ::study_interface::msg::Line msg_;
};

class Init_Line_a
{
public:
  explicit Init_Line_a(::study_interface::msg::Line & msg)
  : msg_(msg)
  {}
  Init_Line_b a(::study_interface::msg::Line::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Line_b(msg_);
  }

private:
  ::study_interface::msg::Line msg_;
};

class Init_Line_high_y
{
public:
  explicit Init_Line_high_y(::study_interface::msg::Line & msg)
  : msg_(msg)
  {}
  Init_Line_a high_y(::study_interface::msg::Line::_high_y_type arg)
  {
    msg_.high_y = std::move(arg);
    return Init_Line_a(msg_);
  }

private:
  ::study_interface::msg::Line msg_;
};

class Init_Line_low_y
{
public:
  explicit Init_Line_low_y(::study_interface::msg::Line & msg)
  : msg_(msg)
  {}
  Init_Line_high_y low_y(::study_interface::msg::Line::_low_y_type arg)
  {
    msg_.low_y = std::move(arg);
    return Init_Line_high_y(msg_);
  }

private:
  ::study_interface::msg::Line msg_;
};

class Init_Line_high_x
{
public:
  explicit Init_Line_high_x(::study_interface::msg::Line & msg)
  : msg_(msg)
  {}
  Init_Line_low_y high_x(::study_interface::msg::Line::_high_x_type arg)
  {
    msg_.high_x = std::move(arg);
    return Init_Line_low_y(msg_);
  }

private:
  ::study_interface::msg::Line msg_;
};

class Init_Line_low_x
{
public:
  Init_Line_low_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Line_high_x low_x(::study_interface::msg::Line::_low_x_type arg)
  {
    msg_.low_x = std::move(arg);
    return Init_Line_high_x(msg_);
  }

private:
  ::study_interface::msg::Line msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::study_interface::msg::Line>()
{
  return study_interface::msg::builder::Init_Line_low_x();
}

}  // namespace study_interface

#endif  // STUDY_INTERFACE__MSG__DETAIL__LINE__BUILDER_HPP_
