// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from myrobot_interfaces:msg/HWstatus.idl
// generated code does not contain a copyright notice

#ifndef MYROBOT_INTERFACES__MSG__DETAIL__H_WSTATUS__BUILDER_HPP_
#define MYROBOT_INTERFACES__MSG__DETAIL__H_WSTATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "myrobot_interfaces/msg/detail/h_wstatus__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace myrobot_interfaces
{

namespace msg
{

namespace builder
{

class Init_HWstatus_debug_message
{
public:
  explicit Init_HWstatus_debug_message(::myrobot_interfaces::msg::HWstatus & msg)
  : msg_(msg)
  {}
  ::myrobot_interfaces::msg::HWstatus debug_message(::myrobot_interfaces::msg::HWstatus::_debug_message_type arg)
  {
    msg_.debug_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myrobot_interfaces::msg::HWstatus msg_;
};

class Init_HWstatus_motor
{
public:
  explicit Init_HWstatus_motor(::myrobot_interfaces::msg::HWstatus & msg)
  : msg_(msg)
  {}
  Init_HWstatus_debug_message motor(::myrobot_interfaces::msg::HWstatus::_motor_type arg)
  {
    msg_.motor = std::move(arg);
    return Init_HWstatus_debug_message(msg_);
  }

private:
  ::myrobot_interfaces::msg::HWstatus msg_;
};

class Init_HWstatus_temperature
{
public:
  explicit Init_HWstatus_temperature(::myrobot_interfaces::msg::HWstatus & msg)
  : msg_(msg)
  {}
  Init_HWstatus_motor temperature(::myrobot_interfaces::msg::HWstatus::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_HWstatus_motor(msg_);
  }

private:
  ::myrobot_interfaces::msg::HWstatus msg_;
};

class Init_HWstatus_number_robot
{
public:
  explicit Init_HWstatus_number_robot(::myrobot_interfaces::msg::HWstatus & msg)
  : msg_(msg)
  {}
  Init_HWstatus_temperature number_robot(::myrobot_interfaces::msg::HWstatus::_number_robot_type arg)
  {
    msg_.number_robot = std::move(arg);
    return Init_HWstatus_temperature(msg_);
  }

private:
  ::myrobot_interfaces::msg::HWstatus msg_;
};

class Init_HWstatus_name_robot
{
public:
  Init_HWstatus_name_robot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HWstatus_number_robot name_robot(::myrobot_interfaces::msg::HWstatus::_name_robot_type arg)
  {
    msg_.name_robot = std::move(arg);
    return Init_HWstatus_number_robot(msg_);
  }

private:
  ::myrobot_interfaces::msg::HWstatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::myrobot_interfaces::msg::HWstatus>()
{
  return myrobot_interfaces::msg::builder::Init_HWstatus_name_robot();
}

}  // namespace myrobot_interfaces

#endif  // MYROBOT_INTERFACES__MSG__DETAIL__H_WSTATUS__BUILDER_HPP_
