// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from myrobot_interfaces:msg/HWstatus.idl
// generated code does not contain a copyright notice

#ifndef MYROBOT_INTERFACES__MSG__DETAIL__H_WSTATUS__TRAITS_HPP_
#define MYROBOT_INTERFACES__MSG__DETAIL__H_WSTATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "myrobot_interfaces/msg/detail/h_wstatus__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace myrobot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const HWstatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: name_robot
  {
    out << "name_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.name_robot, out);
    out << ", ";
  }

  // member: number_robot
  {
    out << "number_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.number_robot, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: motor
  {
    out << "motor: ";
    rosidl_generator_traits::value_to_yaml(msg.motor, out);
    out << ", ";
  }

  // member: debug_message
  {
    out << "debug_message: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HWstatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name_robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.name_robot, out);
    out << "\n";
  }

  // member: number_robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.number_robot, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor: ";
    rosidl_generator_traits::value_to_yaml(msg.motor, out);
    out << "\n";
  }

  // member: debug_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_message: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HWstatus & msg, bool use_flow_style = false)
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

}  // namespace myrobot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use myrobot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const myrobot_interfaces::msg::HWstatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  myrobot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use myrobot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const myrobot_interfaces::msg::HWstatus & msg)
{
  return myrobot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<myrobot_interfaces::msg::HWstatus>()
{
  return "myrobot_interfaces::msg::HWstatus";
}

template<>
inline const char * name<myrobot_interfaces::msg::HWstatus>()
{
  return "myrobot_interfaces/msg/HWstatus";
}

template<>
struct has_fixed_size<myrobot_interfaces::msg::HWstatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<myrobot_interfaces::msg::HWstatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<myrobot_interfaces::msg::HWstatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYROBOT_INTERFACES__MSG__DETAIL__H_WSTATUS__TRAITS_HPP_
