// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from study_interface:msg/Circle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "study_interface/msg/circle.hpp"


#ifndef STUDY_INTERFACE__MSG__DETAIL__CIRCLE__STRUCT_HPP_
#define STUDY_INTERFACE__MSG__DETAIL__CIRCLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__study_interface__msg__Circle __attribute__((deprecated))
#else
# define DEPRECATED__study_interface__msg__Circle __declspec(deprecated)
#endif

namespace study_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Circle_
{
  using Type = Circle_<ContainerAllocator>;

  explicit Circle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Circle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _centerx_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _centerx_type centerx;
  using _centery_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _centery_type centery;
  using _radius_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _radius_type radius;

  // setters for named parameter idiom
  Type & set__centerx(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->centerx = _arg;
    return *this;
  }
  Type & set__centery(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->centery = _arg;
    return *this;
  }
  Type & set__radius(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->radius = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    study_interface::msg::Circle_<ContainerAllocator> *;
  using ConstRawPtr =
    const study_interface::msg::Circle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<study_interface::msg::Circle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<study_interface::msg::Circle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      study_interface::msg::Circle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<study_interface::msg::Circle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      study_interface::msg::Circle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<study_interface::msg::Circle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<study_interface::msg::Circle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<study_interface::msg::Circle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__study_interface__msg__Circle
    std::shared_ptr<study_interface::msg::Circle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__study_interface__msg__Circle
    std::shared_ptr<study_interface::msg::Circle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Circle_ & other) const
  {
    if (this->centerx != other.centerx) {
      return false;
    }
    if (this->centery != other.centery) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const Circle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Circle_

// alias to use template instance with default allocator
using Circle =
  study_interface::msg::Circle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace study_interface

#endif  // STUDY_INTERFACE__MSG__DETAIL__CIRCLE__STRUCT_HPP_
