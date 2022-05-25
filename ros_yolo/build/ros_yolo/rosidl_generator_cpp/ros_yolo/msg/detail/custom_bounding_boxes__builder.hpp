// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_yolo:msg/CustomBoundingBoxes.idl
// generated code does not contain a copyright notice

#ifndef ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOXES__BUILDER_HPP_
#define ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOXES__BUILDER_HPP_

#include "ros_yolo/msg/detail/custom_bounding_boxes__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros_yolo
{

namespace msg
{

namespace builder
{

class Init_CustomBoundingBoxes_bounding_boxes
{
public:
  explicit Init_CustomBoundingBoxes_bounding_boxes(::ros_yolo::msg::CustomBoundingBoxes & msg)
  : msg_(msg)
  {}
  ::ros_yolo::msg::CustomBoundingBoxes bounding_boxes(::ros_yolo::msg::CustomBoundingBoxes::_bounding_boxes_type arg)
  {
    msg_.bounding_boxes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_yolo::msg::CustomBoundingBoxes msg_;
};

class Init_CustomBoundingBoxes_header
{
public:
  Init_CustomBoundingBoxes_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomBoundingBoxes_bounding_boxes header(::ros_yolo::msg::CustomBoundingBoxes::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CustomBoundingBoxes_bounding_boxes(msg_);
  }

private:
  ::ros_yolo::msg::CustomBoundingBoxes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_yolo::msg::CustomBoundingBoxes>()
{
  return ros_yolo::msg::builder::Init_CustomBoundingBoxes_header();
}

}  // namespace ros_yolo

#endif  // ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOXES__BUILDER_HPP_
