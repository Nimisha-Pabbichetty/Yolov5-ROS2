// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros_yolo:msg/CustomBoundingBox.idl
// generated code does not contain a copyright notice

#ifndef ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOX__FUNCTIONS_H_
#define ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOX__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros_yolo/msg/rosidl_generator_c__visibility_control.h"

#include "ros_yolo/msg/detail/custom_bounding_box__struct.h"

/// Initialize msg/CustomBoundingBox message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_yolo__msg__CustomBoundingBox
 * )) before or use
 * ros_yolo__msg__CustomBoundingBox__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_yolo
bool
ros_yolo__msg__CustomBoundingBox__init(ros_yolo__msg__CustomBoundingBox * msg);

/// Finalize msg/CustomBoundingBox message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_yolo
void
ros_yolo__msg__CustomBoundingBox__fini(ros_yolo__msg__CustomBoundingBox * msg);

/// Create msg/CustomBoundingBox message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_yolo__msg__CustomBoundingBox__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_yolo
ros_yolo__msg__CustomBoundingBox *
ros_yolo__msg__CustomBoundingBox__create();

/// Destroy msg/CustomBoundingBox message.
/**
 * It calls
 * ros_yolo__msg__CustomBoundingBox__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_yolo
void
ros_yolo__msg__CustomBoundingBox__destroy(ros_yolo__msg__CustomBoundingBox * msg);


/// Initialize array of msg/CustomBoundingBox messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_yolo__msg__CustomBoundingBox__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_yolo
bool
ros_yolo__msg__CustomBoundingBox__Sequence__init(ros_yolo__msg__CustomBoundingBox__Sequence * array, size_t size);

/// Finalize array of msg/CustomBoundingBox messages.
/**
 * It calls
 * ros_yolo__msg__CustomBoundingBox__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_yolo
void
ros_yolo__msg__CustomBoundingBox__Sequence__fini(ros_yolo__msg__CustomBoundingBox__Sequence * array);

/// Create array of msg/CustomBoundingBox messages.
/**
 * It allocates the memory for the array and calls
 * ros_yolo__msg__CustomBoundingBox__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_yolo
ros_yolo__msg__CustomBoundingBox__Sequence *
ros_yolo__msg__CustomBoundingBox__Sequence__create(size_t size);

/// Destroy array of msg/CustomBoundingBox messages.
/**
 * It calls
 * ros_yolo__msg__CustomBoundingBox__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_yolo
void
ros_yolo__msg__CustomBoundingBox__Sequence__destroy(ros_yolo__msg__CustomBoundingBox__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROS_YOLO__MSG__DETAIL__CUSTOM_BOUNDING_BOX__FUNCTIONS_H_
