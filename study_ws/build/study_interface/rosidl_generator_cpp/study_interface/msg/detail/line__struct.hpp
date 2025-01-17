// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from study_interface:msg/Line.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "study_interface/msg/line.hpp"


#ifndef STUDY_INTERFACE__MSG__DETAIL__LINE__STRUCT_HPP_
#define STUDY_INTERFACE__MSG__DETAIL__LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__study_interface__msg__Line __attribute__((deprecated))
#else
# define DEPRECATED__study_interface__msg__Line __declspec(deprecated)
#endif

namespace study_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Line_
{
  using Type = Line_<ContainerAllocator>;

  explicit Line_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Line_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _low_x_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _low_x_type low_x;
  using _high_x_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _high_x_type high_x;
  using _low_y_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _low_y_type low_y;
  using _high_y_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _high_y_type high_y;
  using _a_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _a_type a;
  using _b_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _b_type b;
  using _c_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _c_type c;
  using _distance_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _distance_type distance;
  using _theta_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _theta_type theta;

  // setters for named parameter idiom
  Type & set__low_x(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->low_x = _arg;
    return *this;
  }
  Type & set__high_x(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->high_x = _arg;
    return *this;
  }
  Type & set__low_y(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->low_y = _arg;
    return *this;
  }
  Type & set__high_y(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->high_y = _arg;
    return *this;
  }
  Type & set__a(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->c = _arg;
    return *this;
  }
  Type & set__distance(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__theta(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    study_interface::msg::Line_<ContainerAllocator> *;
  using ConstRawPtr =
    const study_interface::msg::Line_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<study_interface::msg::Line_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<study_interface::msg::Line_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      study_interface::msg::Line_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<study_interface::msg::Line_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      study_interface::msg::Line_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<study_interface::msg::Line_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<study_interface::msg::Line_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<study_interface::msg::Line_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__study_interface__msg__Line
    std::shared_ptr<study_interface::msg::Line_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__study_interface__msg__Line
    std::shared_ptr<study_interface::msg::Line_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Line_ & other) const
  {
    if (this->low_x != other.low_x) {
      return false;
    }
    if (this->high_x != other.high_x) {
      return false;
    }
    if (this->low_y != other.low_y) {
      return false;
    }
    if (this->high_y != other.high_y) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const Line_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Line_

// alias to use template instance with default allocator
using Line =
  study_interface::msg::Line_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace study_interface

#endif  // STUDY_INTERFACE__MSG__DETAIL__LINE__STRUCT_HPP_
