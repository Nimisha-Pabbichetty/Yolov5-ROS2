// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_yolo:msg/CustomBoundingBoxes.idl
// generated code does not contain a copyright notice

#ifndef ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOXES__STRUCT_H_
#define ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOXES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'bounding_boxes'
#include "ros_yolo/msg/detail/custom_bounding_box__struct.h"

// Struct defined in msg/CustomBoundingBoxes in the package ros_yolo.
typedef struct ros_yolo__msg__CustomBoundingBoxes
{
  std_msgs__msg__Header header;
  ros_yolo__msg__CustomBoundingBox__Sequence bounding_boxes;
} ros_yolo__msg__CustomBoundingBoxes;

// Struct for a sequence of ros_yolo__msg__CustomBoundingBoxes.
typedef struct ros_yolo__msg__CustomBoundingBoxes__Sequence
{
  ros_yolo__msg__CustomBoundingBoxes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_yolo__msg__CustomBoundingBoxes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOXES__STRUCT_H_
