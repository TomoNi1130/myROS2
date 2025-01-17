// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_pkg:msg/Ransac.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interface_pkg/msg/ransac.hpp"


#ifndef INTERFACE_PKG__MSG__DETAIL__RANSAC__BUILDER_HPP_
#define INTERFACE_PKG__MSG__DETAIL__RANSAC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_pkg/msg/detail/ransac__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_pkg
{

namespace msg
{

namespace builder
{

class Init_Ransac_theta
{
public:
  explicit Init_Ransac_theta(::interface_pkg::msg::Ransac & msg)
  : msg_(msg)
  {}
  ::interface_pkg::msg::Ransac theta(::interface_pkg::msg::Ransac::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_pkg::msg::Ransac msg_;
};

class Init_Ransac_distance
{
public:
  explicit Init_Ransac_distance(::interface_pkg::msg::Ransac & msg)
  : msg_(msg)
  {}
  Init_Ransac_theta distance(::interface_pkg::msg::Ransac::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Ransac_theta(msg_);
  }

private:
  ::interface_pkg::msg::Ransac msg_;
};

class Init_Ransac_c
{
public:
  explicit Init_Ransac_c(::interface_pkg::msg::Ransac & msg)
  : msg_(msg)
  {}
  Init_Ransac_distance c(::interface_pkg::msg::Ransac::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_Ransac_distance(msg_);
  }

private:
  ::interface_pkg::msg::Ransac msg_;
};

class Init_Ransac_b
{
public:
  explicit Init_Ransac_b(::interface_pkg::msg::Ransac & msg)
  : msg_(msg)
  {}
  Init_Ransac_c b(::interface_pkg::msg::Ransac::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Ransac_c(msg_);
  }

private:
  ::interface_pkg::msg::Ransac msg_;
};

class Init_Ransac_a
{
public:
  explicit Init_Ransac_a(::interface_pkg::msg::Ransac & msg)
  : msg_(msg)
  {}
  Init_Ransac_b a(::interface_pkg::msg::Ransac::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Ransac_b(msg_);
  }

private:
  ::interface_pkg::msg::Ransac msg_;
};

class Init_Ransac_high_y
{
public:
  explicit Init_Ransac_high_y(::interface_pkg::msg::Ransac & msg)
  : msg_(msg)
  {}
  Init_Ransac_a high_y(::interface_pkg::msg::Ransac::_high_y_type arg)
  {
    msg_.high_y = std::move(arg);
    return Init_Ransac_a(msg_);
  }

private:
  ::interface_pkg::msg::Ransac msg_;
};

class Init_Ransac_low_y
{
public:
  explicit Init_Ransac_low_y(::interface_pkg::msg::Ransac & msg)
  : msg_(msg)
  {}
  Init_Ransac_high_y low_y(::interface_pkg::msg::Ransac::_low_y_type arg)
  {
    msg_.low_y = std::move(arg);
    return Init_Ransac_high_y(msg_);
  }

private:
  ::interface_pkg::msg::Ransac msg_;
};

class Init_Ransac_high_x
{
public:
  explicit Init_Ransac_high_x(::interface_pkg::msg::Ransac & msg)
  : msg_(msg)
  {}
  Init_Ransac_low_y high_x(::interface_pkg::msg::Ransac::_high_x_type arg)
  {
    msg_.high_x = std::move(arg);
    return Init_Ransac_low_y(msg_);
  }

private:
  ::interface_pkg::msg::Ransac msg_;
};

class Init_Ransac_low_x
{
public:
  Init_Ransac_low_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ransac_high_x low_x(::interface_pkg::msg::Ransac::_low_x_type arg)
  {
    msg_.low_x = std::move(arg);
    return Init_Ransac_high_x(msg_);
  }

private:
  ::interface_pkg::msg::Ransac msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_pkg::msg::Ransac>()
{
  return interface_pkg::msg::builder::Init_Ransac_low_x();
}

}  // namespace interface_pkg

#endif  // INTERFACE_PKG__MSG__DETAIL__RANSAC__BUILDER_HPP_
