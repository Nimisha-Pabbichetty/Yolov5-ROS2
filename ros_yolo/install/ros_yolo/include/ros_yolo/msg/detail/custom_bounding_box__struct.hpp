// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_yolo:msg/CustomBoundingBox.idl
// generated code does not contain a copyright notice

#ifndef ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOX__STRUCT_HPP_
#define ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOX__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ros_yolo__msg__CustomBoundingBox __attribute__((deprecated))
#else
# define DEPRECATED__ros_yolo__msg__CustomBoundingBox __declspec(deprecated)
#endif

namespace ros_yolo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomBoundingBox_
{
  using Type = CustomBoundingBox_<ContainerAllocator>;

  explicit CustomBoundingBox_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->probability = 0.0;
      this->xmin = 0ll;
      this->ymin = 0ll;
      this->xmax = 0ll;
      this->ymax = 0ll;
      this->id = 0;
      this->class1 = "";
    }
  }

  explicit CustomBoundingBox_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : class1(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->probability = 0.0;
      this->xmin = 0ll;
      this->ymin = 0ll;
      this->xmax = 0ll;
      this->ymax = 0ll;
      this->id = 0;
      this->class1 = "";
    }
  }

  // field types and members
  using _probability_type =
    double;
  _probability_type probability;
  using _xmin_type =
    int64_t;
  _xmin_type xmin;
  using _ymin_type =
    int64_t;
  _ymin_type ymin;
  using _xmax_type =
    int64_t;
  _xmax_type xmax;
  using _ymax_type =
    int64_t;
  _ymax_type ymax;
  using _id_type =
    int16_t;
  _id_type id;
  using _class1_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class1_type class1;

  // setters for named parameter idiom
  Type & set__probability(
    const double & _arg)
  {
    this->probability = _arg;
    return *this;
  }
  Type & set__xmin(
    const int64_t & _arg)
  {
    this->xmin = _arg;
    return *this;
  }
  Type & set__ymin(
    const int64_t & _arg)
  {
    this->ymin = _arg;
    return *this;
  }
  Type & set__xmax(
    const int64_t & _arg)
  {
    this->xmax = _arg;
    return *this;
  }
  Type & set__ymax(
    const int64_t & _arg)
  {
    this->ymax = _arg;
    return *this;
  }
  Type & set__id(
    const int16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__class1(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class1 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_yolo::msg::CustomBoundingBox_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_yolo::msg::CustomBoundingBox_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_yolo::msg::CustomBoundingBox_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_yolo::msg::CustomBoundingBox_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_yolo::msg::CustomBoundingBox_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_yolo::msg::CustomBoundingBox_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_yolo::msg::CustomBoundingBox_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_yolo::msg::CustomBoundingBox_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_yolo::msg::CustomBoundingBox_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_yolo::msg::CustomBoundingBox_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_yolo__msg__CustomBoundingBox
    std::shared_ptr<ros_yolo::msg::CustomBoundingBox_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_yolo__msg__CustomBoundingBox
    std::shared_ptr<ros_yolo::msg::CustomBoundingBox_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomBoundingBox_ & other) const
  {
    if (this->probability != other.probability) {
      return false;
    }
    if (this->xmin != other.xmin) {
      return false;
    }
    if (this->ymin != other.ymin) {
      return false;
    }
    if (this->xmax != other.xmax) {
      return false;
    }
    if (this->ymax != other.ymax) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->class1 != other.class1) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomBoundingBox_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomBoundingBox_

// alias to use template instance with default allocator
using CustomBoundingBox =
  ros_yolo::msg::CustomBoundingBox_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_yolo

#endif  // ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOX__STRUCT_HPP_
