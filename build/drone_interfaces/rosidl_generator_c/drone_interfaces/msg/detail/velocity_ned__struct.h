// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_interfaces:msg/VelocityNed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "drone_interfaces/msg/velocity_ned.h"


#ifndef DRONE_INTERFACES__MSG__DETAIL__VELOCITY_NED__STRUCT_H_
#define DRONE_INTERFACES__MSG__DETAIL__VELOCITY_NED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/VelocityNed in the package drone_interfaces.
typedef struct drone_interfaces__msg__VelocityNed
{
  float speed;
  float altitude;
  double latitude;
  double longitude;
  float acceleration_x;
  float acceleration_y;
  float acceleration_z;
  float orientation_roll;
  float orientation_pitch;
  float orientation_yaw;
  float distance;
  float battery_voltage;
  float current_draw;
  float rssi_level;
  float link_quality;
} drone_interfaces__msg__VelocityNed;

// Struct for a sequence of drone_interfaces__msg__VelocityNed.
typedef struct drone_interfaces__msg__VelocityNed__Sequence
{
  drone_interfaces__msg__VelocityNed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_interfaces__msg__VelocityNed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_INTERFACES__MSG__DETAIL__VELOCITY_NED__STRUCT_H_
