// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from myrobot_interfaces:msg/HWstatus.idl
// generated code does not contain a copyright notice

#ifndef MYROBOT_INTERFACES__MSG__DETAIL__H_WSTATUS__STRUCT_HPP_
#define MYROBOT_INTERFACES__MSG__DETAIL__H_WSTATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__myrobot_interfaces__msg__HWstatus __attribute__((deprecated))
#else
# define DEPRECATED__myrobot_interfaces__msg__HWstatus __declspec(deprecated)
#endif

namespace myrobot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HWstatus_
{
  using Type = HWstatus_<ContainerAllocator>;

  explicit HWstatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name_robot = "";
      this->number_robot = 0ll;
      this->temperature = 0ll;
      this->motor = false;
      this->debug_message = "";
    }
  }

  explicit HWstatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name_robot(_alloc),
    debug_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name_robot = "";
      this->number_robot = 0ll;
      this->temperature = 0ll;
      this->motor = false;
      this->debug_message = "";
    }
  }

  // field types and members
  using _name_robot_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_robot_type name_robot;
  using _number_robot_type =
    int64_t;
  _number_robot_type number_robot;
  using _temperature_type =
    int64_t;
  _temperature_type temperature;
  using _motor_type =
    bool;
  _motor_type motor;
  using _debug_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _debug_message_type debug_message;

  // setters for named parameter idiom
  Type & set__name_robot(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name_robot = _arg;
    return *this;
  }
  Type & set__number_robot(
    const int64_t & _arg)
  {
    this->number_robot = _arg;
    return *this;
  }
  Type & set__temperature(
    const int64_t & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__motor(
    const bool & _arg)
  {
    this->motor = _arg;
    return *this;
  }
  Type & set__debug_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->debug_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    myrobot_interfaces::msg::HWstatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const myrobot_interfaces::msg::HWstatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<myrobot_interfaces::msg::HWstatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<myrobot_interfaces::msg::HWstatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      myrobot_interfaces::msg::HWstatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<myrobot_interfaces::msg::HWstatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      myrobot_interfaces::msg::HWstatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<myrobot_interfaces::msg::HWstatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<myrobot_interfaces::msg::HWstatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<myrobot_interfaces::msg::HWstatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__myrobot_interfaces__msg__HWstatus
    std::shared_ptr<myrobot_interfaces::msg::HWstatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__myrobot_interfaces__msg__HWstatus
    std::shared_ptr<myrobot_interfaces::msg::HWstatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HWstatus_ & other) const
  {
    if (this->name_robot != other.name_robot) {
      return false;
    }
    if (this->number_robot != other.number_robot) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->motor != other.motor) {
      return false;
    }
    if (this->debug_message != other.debug_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const HWstatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HWstatus_

// alias to use template instance with default allocator
using HWstatus =
  myrobot_interfaces::msg::HWstatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace myrobot_interfaces

#endif  // MYROBOT_INTERFACES__MSG__DETAIL__H_WSTATUS__STRUCT_HPP_
