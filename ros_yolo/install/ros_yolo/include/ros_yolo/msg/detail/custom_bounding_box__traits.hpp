// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_yolo:msg/CustomBoundingBox.idl
// generated code does not contain a copyright notice

#ifndef ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOX__TRAITS_HPP_
#define ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOX__TRAITS_HPP_

#include "ros_yolo/msg/detail/custom_bounding_box__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace ros_yolo
{

namespace msg
{

inline void to_flow_style_yaml(
  const CustomBoundingBox & msg,
  std::ostream & out)
{
  out << "{";
  // member: probability
  {
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
    out << ", ";
  }

  // member: xmin
  {
    out << "xmin: ";
    rosidl_generator_traits::value_to_yaml(msg.xmin, out);
    out << ", ";
  }

  // member: ymin
  {
    out << "ymin: ";
    rosidl_generator_traits::value_to_yaml(msg.ymin, out);
    out << ", ";
  }

  // member: xmax
  {
    out << "xmax: ";
    rosidl_generator_traits::value_to_yaml(msg.xmax, out);
    out << ", ";
  }

  // member: ymax
  {
    out << "ymax: ";
    rosidl_generator_traits::value_to_yaml(msg.ymax, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: class1
  {
    out << "class1: ";
    rosidl_generator_traits::value_to_yaml(msg.class1, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CustomBoundingBox & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
    out << "\n";
  }

  // member: xmin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xmin: ";
    rosidl_generator_traits::value_to_yaml(msg.xmin, out);
    out << "\n";
  }

  // member: ymin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ymin: ";
    rosidl_generator_traits::value_to_yaml(msg.ymin, out);
    out << "\n";
  }

  // member: xmax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xmax: ";
    rosidl_generator_traits::value_to_yaml(msg.xmax, out);
    out << "\n";
  }

  // member: ymax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ymax: ";
    rosidl_generator_traits::value_to_yaml(msg.ymax, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: class1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class1: ";
    rosidl_generator_traits::value_to_yaml(msg.class1, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CustomBoundingBox & msg, bool use_flow_style = false)
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
  const ros_yolo::msg::CustomBoundingBox & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_yolo::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_yolo::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_yolo::msg::CustomBoundingBox & msg)
{
  return ros_yolo::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_yolo::msg::CustomBoundingBox>()
{
  return "ros_yolo::msg::CustomBoundingBox";
}

template<>
inline const char * name<ros_yolo::msg::CustomBoundingBox>()
{
  return "ros_yolo/msg/CustomBoundingBox";
}

template<>
struct has_fixed_size<ros_yolo::msg::CustomBoundingBox>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_yolo::msg::CustomBoundingBox>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_yolo::msg::CustomBoundingBox>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOX__TRAITS_HPP_
