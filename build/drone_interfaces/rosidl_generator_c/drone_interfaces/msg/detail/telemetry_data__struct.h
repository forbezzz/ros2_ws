// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_interfaces:msg/TelemetryData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "drone_interfaces/msg/telemetry_data.h"


#ifndef DRONE_INTERFACES__MSG__DETAIL__TELEMETRY_DATA__STRUCT_H_
#define DRONE_INTERFACES__MSG__DETAIL__TELEMETRY_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'flight_mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TelemetryData in the package drone_interfaces.
typedef struct drone_interfaces__msg__TelemetryData
{
  double speed;
  double altitude;
  double latitude;
  double longitude;
  double orientation_roll;
  double orientation_pitch;
  double orientation_yaw;
  double distance;
  double battery_voltage;
  double heading;
  double acceleration;
  rosidl_runtime_c__String flight_mode;
} drone_interfaces__msg__TelemetryData;

// Struct for a sequence of drone_interfaces__msg__TelemetryData.
typedef struct drone_interfaces__msg__TelemetryData__Sequence
{
  drone_interfaces__msg__TelemetryData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_interfaces__msg__TelemetryData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_INTERFACES__MSG__DETAIL__TELEMETRY_DATA__STRUCT_H_
