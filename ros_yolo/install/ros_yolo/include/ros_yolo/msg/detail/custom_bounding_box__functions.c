// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_yolo:msg/CustomBoundingBox.idl
// generated code does not contain a copyright notice
#include "ros_yolo/msg/detail/custom_bounding_box__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `class1`
#include "rosidl_runtime_c/string_functions.h"

bool
ros_yolo__msg__CustomBoundingBox__init(ros_yolo__msg__CustomBoundingBox * msg)
{
  if (!msg) {
    return false;
  }
  // probability
  // xmin
  // ymin
  // xmax
  // ymax
  // id
  // class1
  if (!rosidl_runtime_c__String__init(&msg->class1)) {
    ros_yolo__msg__CustomBoundingBox__fini(msg);
    return false;
  }
  return true;
}

void
ros_yolo__msg__CustomBoundingBox__fini(ros_yolo__msg__CustomBoundingBox * msg)
{
  if (!msg) {
    return;
  }
  // probability
  // xmin
  // ymin
  // xmax
  // ymax
  // id
  // class1
  rosidl_runtime_c__String__fini(&msg->class1);
}

ros_yolo__msg__CustomBoundingBox *
ros_yolo__msg__CustomBoundingBox__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_yolo__msg__CustomBoundingBox * msg = (ros_yolo__msg__CustomBoundingBox *)allocator.allocate(sizeof(ros_yolo__msg__CustomBoundingBox), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_yolo__msg__CustomBoundingBox));
  bool success = ros_yolo__msg__CustomBoundingBox__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_yolo__msg__CustomBoundingBox__destroy(ros_yolo__msg__CustomBoundingBox * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_yolo__msg__CustomBoundingBox__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_yolo__msg__CustomBoundingBox__Sequence__init(ros_yolo__msg__CustomBoundingBox__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_yolo__msg__CustomBoundingBox * data = NULL;

  if (size) {
    data = (ros_yolo__msg__CustomBoundingBox *)allocator.zero_allocate(size, sizeof(ros_yolo__msg__CustomBoundingBox), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_yolo__msg__CustomBoundingBox__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_yolo__msg__CustomBoundingBox__fini(&data[i - 1]);
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
ros_yolo__msg__CustomBoundingBox__Sequence__fini(ros_yolo__msg__CustomBoundingBox__Sequence * array)
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
      ros_yolo__msg__CustomBoundingBox__fini(&array->data[i]);
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

ros_yolo__msg__CustomBoundingBox__Sequence *
ros_yolo__msg__CustomBoundingBox__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_yolo__msg__CustomBoundingBox__Sequence * array = (ros_yolo__msg__CustomBoundingBox__Sequence *)allocator.allocate(sizeof(ros_yolo__msg__CustomBoundingBox__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_yolo__msg__CustomBoundingBox__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_yolo__msg__CustomBoundingBox__Sequence__destroy(ros_yolo__msg__CustomBoundingBox__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_yolo__msg__CustomBoundingBox__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}
