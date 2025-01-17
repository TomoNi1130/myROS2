// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from study_interface:msg/Cloud.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "study_interface/msg/cloud.hpp"


#ifndef STUDY_INTERFACE__MSG__DETAIL__CLOUD__BUILDER_HPP_
#define STUDY_INTERFACE__MSG__DETAIL__CLOUD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "study_interface/msg/detail/cloud__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace study_interface
{

namespace msg
{

namespace builder
{

class Init_Cloud_cloudy
{
public:
  explicit Init_Cloud_cloudy(::study_interface::msg::Cloud & msg)
  : msg_(msg)
  {}
  ::study_interface::msg::Cloud cloudy(::study_interface::msg::Cloud::_cloudy_type arg)
  {
    msg_.cloudy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::study_interface::msg::Cloud msg_;
};

class Init_Cloud_cloudx
{
public:
  Init_Cloud_cloudx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cloud_cloudy cloudx(::study_interface::msg::Cloud::_cloudx_type arg)
  {
    msg_.cloudx = std::move(arg);
    return Init_Cloud_cloudy(msg_);
  }

private:
  ::study_interface::msg::Cloud msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::study_interface::msg::Cloud>()
{
  return study_interface::msg::builder::Init_Cloud_cloudx();
}

}  // namespace study_interface

#endif  // STUDY_INTERFACE__MSG__DETAIL__CLOUD__BUILDER_HPP_
