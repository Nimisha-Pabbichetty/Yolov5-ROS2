// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_yolo:msg/CustomBoundingBoxes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_yolo/msg/detail/custom_bounding_boxes__rosidl_typesupport_introspection_c.h"
#include "ros_yolo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_yolo/msg/detail/custom_bounding_boxes__functions.h"
#include "ros_yolo/msg/detail/custom_bounding_boxes__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `bounding_boxes`
#include "ros_yolo/msg/custom_bounding_box.h"
// Member `bounding_boxes`
#include "ros_yolo/msg/detail/custom_bounding_box__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__CustomBoundingBoxes_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_yolo__msg__CustomBoundingBoxes__init(message_memory);
}

void ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__CustomBoundingBoxes_fini_function(void * message_memory)
{
  ros_yolo__msg__CustomBoundingBoxes__fini(message_memory);
}

size_t ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__size_function__CustomBoundingBox__bounding_boxes(
  const void * untyped_member)
{
  const ros_yolo__msg__CustomBoundingBox__Sequence * member =
    (const ros_yolo__msg__CustomBoundingBox__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__get_const_function__CustomBoundingBox__bounding_boxes(
  const void * untyped_member, size_t index)
{
  const ros_yolo__msg__CustomBoundingBox__Sequence * member =
    (const ros_yolo__msg__CustomBoundingBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__get_function__CustomBoundingBox__bounding_boxes(
  void * untyped_member, size_t index)
{
  ros_yolo__msg__CustomBoundingBox__Sequence * member =
    (ros_yolo__msg__CustomBoundingBox__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__resize_function__CustomBoundingBox__bounding_boxes(
  void * untyped_member, size_t size)
{
  ros_yolo__msg__CustomBoundingBox__Sequence * member =
    (ros_yolo__msg__CustomBoundingBox__Sequence *)(untyped_member);
  ros_yolo__msg__CustomBoundingBox__Sequence__fini(member);
  return ros_yolo__msg__CustomBoundingBox__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__CustomBoundingBoxes_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_yolo__msg__CustomBoundingBoxes, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounding_boxes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_yolo__msg__CustomBoundingBoxes, bounding_boxes),  // bytes offset in struct
    NULL,  // default value
    ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__size_function__CustomBoundingBox__bounding_boxes,  // size() function pointer
    ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__get_const_function__CustomBoundingBox__bounding_boxes,  // get_const(index) function pointer
    ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__get_function__CustomBoundingBox__bounding_boxes,  // get(index) function pointer
    ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__resize_function__CustomBoundingBox__bounding_boxes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__CustomBoundingBoxes_message_members = {
  "ros_yolo__msg",  // message namespace
  "CustomBoundingBoxes",  // message name
  2,  // number of fields
  sizeof(ros_yolo__msg__CustomBoundingBoxes),
  ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__CustomBoundingBoxes_message_member_array,  // message members
  ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__CustomBoundingBoxes_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__CustomBoundingBoxes_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__CustomBoundingBoxes_message_type_support_handle = {
  0,
  &ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__CustomBoundingBoxes_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_yolo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_yolo, msg, CustomBoundingBoxes)() {
  ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__CustomBoundingBoxes_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__CustomBoundingBoxes_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_yolo, msg, CustomBoundingBox)();
  if (!ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__CustomBoundingBoxes_message_type_support_handle.typesupport_identifier) {
    ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__CustomBoundingBoxes_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_yolo__msg__CustomBoundingBoxes__rosidl_typesupport_introspection_c__CustomBoundingBoxes_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
