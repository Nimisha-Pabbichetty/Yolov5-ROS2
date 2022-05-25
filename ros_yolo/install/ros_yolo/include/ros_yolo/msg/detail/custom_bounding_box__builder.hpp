// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_yolo:msg/CustomBoundingBox.idl
// generated code does not contain a copyright notice

#ifndef ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOX__BUILDER_HPP_
#define ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOX__BUILDER_HPP_

#include "ros_yolo/msg/detail/custom_bounding_box__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros_yolo
{

namespace msg
{

namespace builder
{

class Init_CustomBoundingBox_class1
{
public:
  explicit Init_CustomBoundingBox_class1(::ros_yolo::msg::CustomBoundingBox & msg)
  : msg_(msg)
  {}
  ::ros_yolo::msg::CustomBoundingBox class1(::ros_yolo::msg::CustomBoundingBox::_class1_type arg)
  {
    msg_.class1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_yolo::msg::CustomBoundingBox msg_;
};

class Init_CustomBoundingBox_id
{
public:
  explicit Init_CustomBoundingBox_id(::ros_yolo::msg::CustomBoundingBox & msg)
  : msg_(msg)
  {}
  Init_CustomBoundingBox_class1 id(::ros_yolo::msg::CustomBoundingBox::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CustomBoundingBox_class1(msg_);
  }

private:
  ::ros_yolo::msg::CustomBoundingBox msg_;
};

class Init_CustomBoundingBox_ymax
{
public:
  explicit Init_CustomBoundingBox_ymax(::ros_yolo::msg::CustomBoundingBox & msg)
  : msg_(msg)
  {}
  Init_CustomBoundingBox_id ymax(::ros_yolo::msg::CustomBoundingBox::_ymax_type arg)
  {
    msg_.ymax = std::move(arg);
    return Init_CustomBoundingBox_id(msg_);
  }

private:
  ::ros_yolo::msg::CustomBoundingBox msg_;
};

class Init_CustomBoundingBox_xmax
{
public:
  explicit Init_CustomBoundingBox_xmax(::ros_yolo::msg::CustomBoundingBox & msg)
  : msg_(msg)
  {}
  Init_CustomBoundingBox_ymax xmax(::ros_yolo::msg::CustomBoundingBox::_xmax_type arg)
  {
    msg_.xmax = std::move(arg);
    return Init_CustomBoundingBox_ymax(msg_);
  }

private:
  ::ros_yolo::msg::CustomBoundingBox msg_;
};

class Init_CustomBoundingBox_ymin
{
public:
  explicit Init_CustomBoundingBox_ymin(::ros_yolo::msg::CustomBoundingBox & msg)
  : msg_(msg)
  {}
  Init_CustomBoundingBox_xmax ymin(::ros_yolo::msg::CustomBoundingBox::_ymin_type arg)
  {
    msg_.ymin = std::move(arg);
    return Init_CustomBoundingBox_xmax(msg_);
  }

private:
  ::ros_yolo::msg::CustomBoundingBox msg_;
};

class Init_CustomBoundingBox_xmin
{
public:
  explicit Init_CustomBoundingBox_xmin(::ros_yolo::msg::CustomBoundingBox & msg)
  : msg_(msg)
  {}
  Init_CustomBoundingBox_ymin xmin(::ros_yolo::msg::CustomBoundingBox::_xmin_type arg)
  {
    msg_.xmin = std::move(arg);
    return Init_CustomBoundingBox_ymin(msg_);
  }

private:
  ::ros_yolo::msg::CustomBoundingBox msg_;
};

class Init_CustomBoundingBox_probability
{
public:
  Init_CustomBoundingBox_probability()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomBoundingBox_xmin probability(::ros_yolo::msg::CustomBoundingBox::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return Init_CustomBoundingBox_xmin(msg_);
  }

private:
  ::ros_yolo::msg::CustomBoundingBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_yolo::msg::CustomBoundingBox>()
{
  return ros_yolo::msg::builder::Init_CustomBoundingBox_probability();
}

}  // namespace ros_yolo

#endif  // ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOX__BUILDER_HPP_
