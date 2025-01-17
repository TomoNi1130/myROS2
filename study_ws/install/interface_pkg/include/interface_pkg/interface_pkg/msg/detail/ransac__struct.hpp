// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_pkg:msg/Ransac.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interface_pkg/msg/ransac.hpp"


#ifndef INTERFACE_PKG__MSG__DETAIL__RANSAC__STRUCT_HPP_
#define INTERFACE_PKG__MSG__DETAIL__RANSAC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_pkg__msg__Ransac __attribute__((deprecated))
#else
# define DEPRECATED__interface_pkg__msg__Ransac __declspec(deprecated)
#endif

namespace interface_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ransac_
{
  using Type = Ransac_<ContainerAllocator>;

  explicit Ransac_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->low_x = 0.0;
      this->high_x = 0.0;
      this->low_y = 0.0;
      this->high_y = 0.0;
      this->a = 0.0;
      this->b = 0.0;
      this->c = 0.0;
      this->distance = 0.0;
      this->theta = 0.0;
    }
  }

  explicit Ransac_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->low_x = 0.0;
      this->high_x = 0.0;
      this->low_y = 0.0;
      this->high_y = 0.0;
      this->a = 0.0;
      this->b = 0.0;
      this->c = 0.0;
      this->distance = 0.0;
      this->theta = 0.0;
    }
  }

  // field types and members
  using _low_x_type =
    double;
  _low_x_type low_x;
  using _high_x_type =
    double;
  _high_x_type high_x;
  using _low_y_type =
    double;
  _low_y_type low_y;
  using _high_y_type =
    double;
  _high_y_type high_y;
  using _a_type =
    double;
  _a_type a;
  using _b_type =
    double;
  _b_type b;
  using _c_type =
    double;
  _c_type c;
  using _distance_type =
    double;
  _distance_type distance;
  using _theta_type =
    double;
  _theta_type theta;

  // setters for named parameter idiom
  Type & set__low_x(
    const double & _arg)
  {
    this->low_x = _arg;
    return *this;
  }
  Type & set__high_x(
    const double & _arg)
  {
    this->high_x = _arg;
    return *this;
  }
  Type & set__low_y(
    const double & _arg)
  {
    this->low_y = _arg;
    return *this;
  }
  Type & set__high_y(
    const double & _arg)
  {
    this->high_y = _arg;
    return *this;
  }
  Type & set__a(
    const double & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const double & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const double & _arg)
  {
    this->c = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_pkg::msg::Ransac_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_pkg::msg::Ransac_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_pkg::msg::Ransac_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_pkg::msg::Ransac_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_pkg::msg::Ransac_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_pkg::msg::Ransac_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_pkg::msg::Ransac_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_pkg::msg::Ransac_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_pkg::msg::Ransac_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_pkg::msg::Ransac_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_pkg__msg__Ransac
    std::shared_ptr<interface_pkg::msg::Ransac_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_pkg__msg__Ransac
    std::shared_ptr<interface_pkg::msg::Ransac_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ransac_ & other) const
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
  bool operator!=(const Ransac_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ransac_

// alias to use template instance with default allocator
using Ransac =
  interface_pkg::msg::Ransac_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_pkg

#endif  // INTERFACE_PKG__MSG__DETAIL__RANSAC__STRUCT_HPP_
