// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_yolo:msg/CustomBoundingBoxes.idl
// generated code does not contain a copyright notice

#ifndef ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOXES__STRUCT_HPP_
#define ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOXES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'bounding_boxes'
#include "ros_yolo/msg/detail/custom_bounding_box__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_yolo__msg__CustomBoundingBoxes __attribute__((deprecated))
#else
# define DEPRECATED__ros_yolo__msg__CustomBoundingBoxes __declspec(deprecated)
#endif

namespace ros_yolo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomBoundingBoxes_
{
  using Type = CustomBoundingBoxes_<ContainerAllocator>;

  explicit CustomBoundingBoxes_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit CustomBoundingBoxes_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _bounding_boxes_type =
    std::vector<ros_yolo::msg::CustomBoundingBox_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_yolo::msg::CustomBoundingBox_<ContainerAllocator>>>;
  _bounding_boxes_type bounding_boxes;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__bounding_boxes(
    const std::vector<ros_yolo::msg::CustomBoundingBox_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_yolo::msg::CustomBoundingBox_<ContainerAllocator>>> & _arg)
  {
    this->bounding_boxes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_yolo::msg::CustomBoundingBoxes_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_yolo::msg::CustomBoundingBoxes_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_yolo::msg::CustomBoundingBoxes_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_yolo::msg::CustomBoundingBoxes_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_yolo::msg::CustomBoundingBoxes_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_yolo::msg::CustomBoundingBoxes_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_yolo::msg::CustomBoundingBoxes_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_yolo::msg::CustomBoundingBoxes_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_yolo::msg::CustomBoundingBoxes_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_yolo::msg::CustomBoundingBoxes_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_yolo__msg__CustomBoundingBoxes
    std::shared_ptr<ros_yolo::msg::CustomBoundingBoxes_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_yolo__msg__CustomBoundingBoxes
    std::shared_ptr<ros_yolo::msg::CustomBoundingBoxes_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomBoundingBoxes_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->bounding_boxes != other.bounding_boxes) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomBoundingBoxes_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomBoundingBoxes_

// alias to use template instance with default allocator
using CustomBoundingBoxes =
  ros_yolo::msg::CustomBoundingBoxes_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_yolo

#endif  // ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOXES__STRUCT_HPP_
