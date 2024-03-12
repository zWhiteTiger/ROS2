// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from myrobot_interfaces:srv/CalRectangle.idl
// generated code does not contain a copyright notice

#ifndef MYROBOT_INTERFACES__SRV__DETAIL__CAL_RECTANGLE__TRAITS_HPP_
#define MYROBOT_INTERFACES__SRV__DETAIL__CAL_RECTANGLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "myrobot_interfaces/srv/detail/cal_rectangle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace myrobot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalRectangle_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalRectangle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalRectangle_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace myrobot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use myrobot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const myrobot_interfaces::srv::CalRectangle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  myrobot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use myrobot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const myrobot_interfaces::srv::CalRectangle_Request & msg)
{
  return myrobot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<myrobot_interfaces::srv::CalRectangle_Request>()
{
  return "myrobot_interfaces::srv::CalRectangle_Request";
}

template<>
inline const char * name<myrobot_interfaces::srv::CalRectangle_Request>()
{
  return "myrobot_interfaces/srv/CalRectangle_Request";
}

template<>
struct has_fixed_size<myrobot_interfaces::srv::CalRectangle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<myrobot_interfaces::srv::CalRectangle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<myrobot_interfaces::srv::CalRectangle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace myrobot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalRectangle_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: area_rectangle
  {
    out << "area_rectangle: ";
    rosidl_generator_traits::value_to_yaml(msg.area_rectangle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalRectangle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: area_rectangle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_rectangle: ";
    rosidl_generator_traits::value_to_yaml(msg.area_rectangle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalRectangle_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace myrobot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use myrobot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const myrobot_interfaces::srv::CalRectangle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  myrobot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use myrobot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const myrobot_interfaces::srv::CalRectangle_Response & msg)
{
  return myrobot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<myrobot_interfaces::srv::CalRectangle_Response>()
{
  return "myrobot_interfaces::srv::CalRectangle_Response";
}

template<>
inline const char * name<myrobot_interfaces::srv::CalRectangle_Response>()
{
  return "myrobot_interfaces/srv/CalRectangle_Response";
}

template<>
struct has_fixed_size<myrobot_interfaces::srv::CalRectangle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<myrobot_interfaces::srv::CalRectangle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<myrobot_interfaces::srv::CalRectangle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace myrobot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalRectangle_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalRectangle_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalRectangle_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace myrobot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use myrobot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const myrobot_interfaces::srv::CalRectangle_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  myrobot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use myrobot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const myrobot_interfaces::srv::CalRectangle_Event & msg)
{
  return myrobot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<myrobot_interfaces::srv::CalRectangle_Event>()
{
  return "myrobot_interfaces::srv::CalRectangle_Event";
}

template<>
inline const char * name<myrobot_interfaces::srv::CalRectangle_Event>()
{
  return "myrobot_interfaces/srv/CalRectangle_Event";
}

template<>
struct has_fixed_size<myrobot_interfaces::srv::CalRectangle_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<myrobot_interfaces::srv::CalRectangle_Event>
  : std::integral_constant<bool, has_bounded_size<myrobot_interfaces::srv::CalRectangle_Request>::value && has_bounded_size<myrobot_interfaces::srv::CalRectangle_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<myrobot_interfaces::srv::CalRectangle_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<myrobot_interfaces::srv::CalRectangle>()
{
  return "myrobot_interfaces::srv::CalRectangle";
}

template<>
inline const char * name<myrobot_interfaces::srv::CalRectangle>()
{
  return "myrobot_interfaces/srv/CalRectangle";
}

template<>
struct has_fixed_size<myrobot_interfaces::srv::CalRectangle>
  : std::integral_constant<
    bool,
    has_fixed_size<myrobot_interfaces::srv::CalRectangle_Request>::value &&
    has_fixed_size<myrobot_interfaces::srv::CalRectangle_Response>::value
  >
{
};

template<>
struct has_bounded_size<myrobot_interfaces::srv::CalRectangle>
  : std::integral_constant<
    bool,
    has_bounded_size<myrobot_interfaces::srv::CalRectangle_Request>::value &&
    has_bounded_size<myrobot_interfaces::srv::CalRectangle_Response>::value
  >
{
};

template<>
struct is_service<myrobot_interfaces::srv::CalRectangle>
  : std::true_type
{
};

template<>
struct is_service_request<myrobot_interfaces::srv::CalRectangle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<myrobot_interfaces::srv::CalRectangle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MYROBOT_INTERFACES__SRV__DETAIL__CAL_RECTANGLE__TRAITS_HPP_
