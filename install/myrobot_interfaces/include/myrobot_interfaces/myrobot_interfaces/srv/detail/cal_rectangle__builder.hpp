// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from myrobot_interfaces:srv/CalRectangle.idl
// generated code does not contain a copyright notice

#ifndef MYROBOT_INTERFACES__SRV__DETAIL__CAL_RECTANGLE__BUILDER_HPP_
#define MYROBOT_INTERFACES__SRV__DETAIL__CAL_RECTANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "myrobot_interfaces/srv/detail/cal_rectangle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace myrobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_CalRectangle_Request_width
{
public:
  explicit Init_CalRectangle_Request_width(::myrobot_interfaces::srv::CalRectangle_Request & msg)
  : msg_(msg)
  {}
  ::myrobot_interfaces::srv::CalRectangle_Request width(::myrobot_interfaces::srv::CalRectangle_Request::_width_type arg)
  {
    msg_.width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myrobot_interfaces::srv::CalRectangle_Request msg_;
};

class Init_CalRectangle_Request_length
{
public:
  Init_CalRectangle_Request_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalRectangle_Request_width length(::myrobot_interfaces::srv::CalRectangle_Request::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_CalRectangle_Request_width(msg_);
  }

private:
  ::myrobot_interfaces::srv::CalRectangle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::myrobot_interfaces::srv::CalRectangle_Request>()
{
  return myrobot_interfaces::srv::builder::Init_CalRectangle_Request_length();
}

}  // namespace myrobot_interfaces


namespace myrobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_CalRectangle_Response_area_rectangle
{
public:
  Init_CalRectangle_Response_area_rectangle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::myrobot_interfaces::srv::CalRectangle_Response area_rectangle(::myrobot_interfaces::srv::CalRectangle_Response::_area_rectangle_type arg)
  {
    msg_.area_rectangle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myrobot_interfaces::srv::CalRectangle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::myrobot_interfaces::srv::CalRectangle_Response>()
{
  return myrobot_interfaces::srv::builder::Init_CalRectangle_Response_area_rectangle();
}

}  // namespace myrobot_interfaces


namespace myrobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_CalRectangle_Event_response
{
public:
  explicit Init_CalRectangle_Event_response(::myrobot_interfaces::srv::CalRectangle_Event & msg)
  : msg_(msg)
  {}
  ::myrobot_interfaces::srv::CalRectangle_Event response(::myrobot_interfaces::srv::CalRectangle_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myrobot_interfaces::srv::CalRectangle_Event msg_;
};

class Init_CalRectangle_Event_request
{
public:
  explicit Init_CalRectangle_Event_request(::myrobot_interfaces::srv::CalRectangle_Event & msg)
  : msg_(msg)
  {}
  Init_CalRectangle_Event_response request(::myrobot_interfaces::srv::CalRectangle_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CalRectangle_Event_response(msg_);
  }

private:
  ::myrobot_interfaces::srv::CalRectangle_Event msg_;
};

class Init_CalRectangle_Event_info
{
public:
  Init_CalRectangle_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalRectangle_Event_request info(::myrobot_interfaces::srv::CalRectangle_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CalRectangle_Event_request(msg_);
  }

private:
  ::myrobot_interfaces::srv::CalRectangle_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::myrobot_interfaces::srv::CalRectangle_Event>()
{
  return myrobot_interfaces::srv::builder::Init_CalRectangle_Event_info();
}

}  // namespace myrobot_interfaces

#endif  // MYROBOT_INTERFACES__SRV__DETAIL__CAL_RECTANGLE__BUILDER_HPP_
