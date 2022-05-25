// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_yolo:msg/CustomBoundingBoxes.idl
// generated code does not contain a copyright notice
#include "ros_yolo/msg/detail/custom_bounding_boxes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `bounding_boxes`
#include "ros_yolo/msg/detail/custom_bounding_box__functions.h"

bool
ros_yolo__msg__CustomBoundingBoxes__init(ros_yolo__msg__CustomBoundingBoxes * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros_yolo__msg__CustomBoundingBoxes__fini(msg);
    return false;
  }
  // bounding_boxes
  if (!ros_yolo__msg__CustomBoundingBox__Sequence__init(&msg->bounding_boxes, 0)) {
    ros_yolo__msg__CustomBoundingBoxes__fini(msg);
    return false;
  }
  return true;
}

void
ros_yolo__msg__CustomBoundingBoxes__fini(ros_yolo__msg__CustomBoundingBoxes * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // bounding_boxes
  ros_yolo__msg__CustomBoundingBox__Sequence__fini(&msg->bounding_boxes);
}

ros_yolo__msg__CustomBoundingBoxes *
ros_yolo__msg__CustomBoundingBoxes__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_yolo__msg__CustomBoundingBoxes * msg = (ros_yolo__msg__CustomBoundingBoxes *)allocator.allocate(sizeof(ros_yolo__msg__CustomBoundingBoxes), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_yolo__msg__CustomBoundingBoxes));
  bool success = ros_yolo__msg__CustomBoundingBoxes__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_yolo__msg__CustomBoundingBoxes__destroy(ros_yolo__msg__CustomBoundingBoxes * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_yolo__msg__CustomBoundingBoxes__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_yolo__msg__CustomBoundingBoxes__Sequence__init(ros_yolo__msg__CustomBoundingBoxes__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_yolo__msg__CustomBoundingBoxes * data = NULL;

  if (size) {
    data = (ros_yolo__msg__CustomBoundingBoxes *)allocator.zero_allocate(size, sizeof(ros_yolo__msg__CustomBoundingBoxes), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_yolo__msg__CustomBoundingBoxes__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_yolo__msg__CustomBoundingBoxes__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_yolo__msg__CustomBoundingBoxes__Sequence__fini(ros_yolo__msg__CustomBoundingBoxes__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_yolo__msg__CustomBoundingBoxes__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_yolo__msg__CustomBoundingBoxes__Sequence *
ros_yolo__msg__CustomBoundingBoxes__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_yolo__msg__CustomBoundingBoxes__Sequence * array = (ros_yolo__msg__CustomBoundingBoxes__Sequence *)allocator.allocate(sizeof(ros_yolo__msg__CustomBoundingBoxes__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_yolo__msg__CustomBoundingBoxes__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_yolo__msg__CustomBoundingBoxes__Sequence__destroy(ros_yolo__msg__CustomBoundingBoxes__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_yolo__msg__CustomBoundingBoxes__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}
