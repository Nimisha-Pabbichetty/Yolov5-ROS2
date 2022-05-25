// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_yolo:msg/CustomBoundingBox.idl
// generated code does not contain a copyright notice

#ifndef ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOX__STRUCT_H_
#define ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'class1'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/CustomBoundingBox in the package ros_yolo.
typedef struct ros_yolo__msg__CustomBoundingBox
{
  double probability;
  int64_t xmin;
  int64_t ymin;
  int64_t xmax;
  int64_t ymax;
  int16_t id;
  rosidl_runtime_c__String class1;
} ros_yolo__msg__CustomBoundingBox;

// Struct for a sequence of ros_yolo__msg__CustomBoundingBox.
typedef struct ros_yolo__msg__CustomBoundingBox__Sequence
{
  ros_yolo__msg__CustomBoundingBox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_yolo__msg__CustomBoundingBox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOX__STRUCT_H_
