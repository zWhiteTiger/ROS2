// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from myrobot_interfaces:srv/CalRectangle.idl
// generated code does not contain a copyright notice

#ifndef MYROBOT_INTERFACES__SRV__DETAIL__CAL_RECTANGLE__STRUCT_HPP_
#define MYROBOT_INTERFACES__SRV__DETAIL__CAL_RECTANGLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__myrobot_interfaces__srv__CalRectangle_Request __attribute__((deprecated))
#else
# define DEPRECATED__myrobot_interfaces__srv__CalRectangle_Request __declspec(deprecated)
#endif

namespace myrobot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalRectangle_Request_
{
  using Type = CalRectangle_Request_<ContainerAllocator>;

  explicit CalRectangle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0.0;
      this->width = 0.0;
    }
  }

  explicit CalRectangle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0.0;
      this->width = 0.0;
    }
  }

  // field types and members
  using _length_type =
    double;
  _length_type length;
  using _width_type =
    double;
  _width_type width;

  // setters for named parameter idiom
  Type & set__length(
    const double & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__width(
    const double & _arg)
  {
    this->width = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    myrobot_interfaces::srv::CalRectangle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const myrobot_interfaces::srv::CalRectangle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<myrobot_interfaces::srv::CalRectangle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<myrobot_interfaces::srv::CalRectangle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      myrobot_interfaces::srv::CalRectangle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<myrobot_interfaces::srv::CalRectangle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      myrobot_interfaces::srv::CalRectangle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<myrobot_interfaces::srv::CalRectangle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<myrobot_interfaces::srv::CalRectangle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<myrobot_interfaces::srv::CalRectangle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__myrobot_interfaces__srv__CalRectangle_Request
    std::shared_ptr<myrobot_interfaces::srv::CalRectangle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__myrobot_interfaces__srv__CalRectangle_Request
    std::shared_ptr<myrobot_interfaces::srv::CalRectangle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalRectangle_Request_ & other) const
  {
    if (this->length != other.length) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalRectangle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalRectangle_Request_

// alias to use template instance with default allocator
using CalRectangle_Request =
  myrobot_interfaces::srv::CalRectangle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace myrobot_interfaces


#ifndef _WIN32
# define DEPRECATED__myrobot_interfaces__srv__CalRectangle_Response __attribute__((deprecated))
#else
# define DEPRECATED__myrobot_interfaces__srv__CalRectangle_Response __declspec(deprecated)
#endif

namespace myrobot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalRectangle_Response_
{
  using Type = CalRectangle_Response_<ContainerAllocator>;

  explicit CalRectangle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area_rectangle = 0.0;
    }
  }

  explicit CalRectangle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area_rectangle = 0.0;
    }
  }

  // field types and members
  using _area_rectangle_type =
    double;
  _area_rectangle_type area_rectangle;

  // setters for named parameter idiom
  Type & set__area_rectangle(
    const double & _arg)
  {
    this->area_rectangle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    myrobot_interfaces::srv::CalRectangle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const myrobot_interfaces::srv::CalRectangle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<myrobot_interfaces::srv::CalRectangle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<myrobot_interfaces::srv::CalRectangle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      myrobot_interfaces::srv::CalRectangle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<myrobot_interfaces::srv::CalRectangle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      myrobot_interfaces::srv::CalRectangle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<myrobot_interfaces::srv::CalRectangle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<myrobot_interfaces::srv::CalRectangle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<myrobot_interfaces::srv::CalRectangle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__myrobot_interfaces__srv__CalRectangle_Response
    std::shared_ptr<myrobot_interfaces::srv::CalRectangle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__myrobot_interfaces__srv__CalRectangle_Response
    std::shared_ptr<myrobot_interfaces::srv::CalRectangle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalRectangle_Response_ & other) const
  {
    if (this->area_rectangle != other.area_rectangle) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalRectangle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalRectangle_Response_

// alias to use template instance with default allocator
using CalRectangle_Response =
  myrobot_interfaces::srv::CalRectangle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace myrobot_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__myrobot_interfaces__srv__CalRectangle_Event __attribute__((deprecated))
#else
# define DEPRECATED__myrobot_interfaces__srv__CalRectangle_Event __declspec(deprecated)
#endif

namespace myrobot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalRectangle_Event_
{
  using Type = CalRectangle_Event_<ContainerAllocator>;

  explicit CalRectangle_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit CalRectangle_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<myrobot_interfaces::srv::CalRectangle_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<myrobot_interfaces::srv::CalRectangle_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<myrobot_interfaces::srv::CalRectangle_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<myrobot_interfaces::srv::CalRectangle_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<myrobot_interfaces::srv::CalRectangle_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<myrobot_interfaces::srv::CalRectangle_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<myrobot_interfaces::srv::CalRectangle_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<myrobot_interfaces::srv::CalRectangle_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    myrobot_interfaces::srv::CalRectangle_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const myrobot_interfaces::srv::CalRectangle_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<myrobot_interfaces::srv::CalRectangle_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<myrobot_interfaces::srv::CalRectangle_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      myrobot_interfaces::srv::CalRectangle_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<myrobot_interfaces::srv::CalRectangle_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      myrobot_interfaces::srv::CalRectangle_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<myrobot_interfaces::srv::CalRectangle_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<myrobot_interfaces::srv::CalRectangle_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<myrobot_interfaces::srv::CalRectangle_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__myrobot_interfaces__srv__CalRectangle_Event
    std::shared_ptr<myrobot_interfaces::srv::CalRectangle_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__myrobot_interfaces__srv__CalRectangle_Event
    std::shared_ptr<myrobot_interfaces::srv::CalRectangle_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalRectangle_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalRectangle_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalRectangle_Event_

// alias to use template instance with default allocator
using CalRectangle_Event =
  myrobot_interfaces::srv::CalRectangle_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace myrobot_interfaces

namespace myrobot_interfaces
{

namespace srv
{

struct CalRectangle
{
  using Request = myrobot_interfaces::srv::CalRectangle_Request;
  using Response = myrobot_interfaces::srv::CalRectangle_Response;
  using Event = myrobot_interfaces::srv::CalRectangle_Event;
};

}  // namespace srv

}  // namespace myrobot_interfaces

#endif  // MYROBOT_INTERFACES__SRV__DETAIL__CAL_RECTANGLE__STRUCT_HPP_
