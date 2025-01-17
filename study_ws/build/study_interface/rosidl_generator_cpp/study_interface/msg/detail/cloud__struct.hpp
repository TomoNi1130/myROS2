// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from study_interface:msg/Cloud.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "study_interface/msg/cloud.hpp"


#ifndef STUDY_INTERFACE__MSG__DETAIL__CLOUD__STRUCT_HPP_
#define STUDY_INTERFACE__MSG__DETAIL__CLOUD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__study_interface__msg__Cloud __attribute__((deprecated))
#else
# define DEPRECATED__study_interface__msg__Cloud __declspec(deprecated)
#endif

namespace study_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Cloud_
{
  using Type = Cloud_<ContainerAllocator>;

  explicit Cloud_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Cloud_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _cloudx_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _cloudx_type cloudx;
  using _cloudy_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _cloudy_type cloudy;

  // setters for named parameter idiom
  Type & set__cloudx(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->cloudx = _arg;
    return *this;
  }
  Type & set__cloudy(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->cloudy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    study_interface::msg::Cloud_<ContainerAllocator> *;
  using ConstRawPtr =
    const study_interface::msg::Cloud_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<study_interface::msg::Cloud_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<study_interface::msg::Cloud_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      study_interface::msg::Cloud_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<study_interface::msg::Cloud_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      study_interface::msg::Cloud_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<study_interface::msg::Cloud_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<study_interface::msg::Cloud_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<study_interface::msg::Cloud_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__study_interface__msg__Cloud
    std::shared_ptr<study_interface::msg::Cloud_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__study_interface__msg__Cloud
    std::shared_ptr<study_interface::msg::Cloud_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cloud_ & other) const
  {
    if (this->cloudx != other.cloudx) {
      return false;
    }
    if (this->cloudy != other.cloudy) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cloud_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cloud_

// alias to use template instance with default allocator
using Cloud =
  study_interface::msg::Cloud_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace study_interface

#endif  // STUDY_INTERFACE__MSG__DETAIL__CLOUD__STRUCT_HPP_
