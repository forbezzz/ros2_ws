// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from drone_interfaces:msg/TelemetryData.idl
// generated code does not contain a copyright notice
#ifndef DRONE_INTERFACES__MSG__DETAIL__TELEMETRY_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define DRONE_INTERFACES__MSG__DETAIL__TELEMETRY_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "drone_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "drone_interfaces/msg/detail/telemetry_data__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drone_interfaces
bool cdr_serialize_drone_interfaces__msg__TelemetryData(
  const drone_interfaces__msg__TelemetryData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drone_interfaces
bool cdr_deserialize_drone_interfaces__msg__TelemetryData(
  eprosima::fastcdr::Cdr &,
  drone_interfaces__msg__TelemetryData * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drone_interfaces
size_t get_serialized_size_drone_interfaces__msg__TelemetryData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drone_interfaces
size_t max_serialized_size_drone_interfaces__msg__TelemetryData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drone_interfaces
bool cdr_serialize_key_drone_interfaces__msg__TelemetryData(
  const drone_interfaces__msg__TelemetryData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drone_interfaces
size_t get_serialized_size_key_drone_interfaces__msg__TelemetryData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drone_interfaces
size_t max_serialized_size_key_drone_interfaces__msg__TelemetryData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drone_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, drone_interfaces, msg, TelemetryData)();

#ifdef __cplusplus
}
#endif

#endif  // DRONE_INTERFACES__MSG__DETAIL__TELEMETRY_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
