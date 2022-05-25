// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_yolo:msg/CustomBoundingBoxes.idl
// generated code does not contain a copyright notice

#ifndef ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOXES__TRAITS_HPP_
#define ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOXES__TRAITS_HPP_

#include "ros_yolo/msg/detail/custom_bounding_boxes__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'bounding_boxes'
#include "ros_yolo/msg/detail/custom_bounding_box__traits.hpp"

namespace ros_yolo
{

namespace msg
{

inline void to_flow_style_yaml(
  const CustomBoundingBoxes & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: bounding_boxes
  {
    if (msg.bounding_boxes.size() == 0) {
      out << "bounding_boxes: []";
    } else {
      out << "bounding_boxes: [";
      size_t pending_items = msg.bounding_boxes.size();
      for (auto item : msg.bounding_boxes) {
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
  const CustomBoundingBoxes & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: bounding_boxes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounding_boxes.size() == 0) {
      out << "bounding_boxes: []\n";
    } else {
      out << "bounding_boxes:\n";
      for (auto item : msg.bounding_boxes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CustomBoundingBoxes & msg, bool use_flow_style = false)
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

}  // namespace ros_yolo

namespace rosidl_generator_traits
{

[[deprecated("use ros_yolo::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_yolo::msg::CustomBoundingBoxes & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_yolo::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_yolo::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_yolo::msg::CustomBoundingBoxes & msg)
{
  return ros_yolo::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_yolo::msg::CustomBoundingBoxes>()
{
  return "ros_yolo::msg::CustomBoundingBoxes";
}

template<>
inline const char * name<ros_yolo::msg::CustomBoundingBoxes>()
{
  return "ros_yolo/msg/CustomBoundingBoxes";
}

template<>
struct has_fixed_size<ros_yolo::msg::CustomBoundingBoxes>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_yolo::msg::CustomBoundingBoxes>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_yolo::msg::CustomBoundingBoxes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOXES__TRAITS_HPP_
