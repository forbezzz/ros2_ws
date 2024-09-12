// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from drone_interfaces:msg/TelemetryData.idl
// generated code does not contain a copyright notice

#include "drone_interfaces/msg/detail/telemetry_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
const rosidl_type_hash_t *
drone_interfaces__msg__TelemetryData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x00, 0xd4, 0x15, 0xbf, 0x6d, 0xec, 0x32, 0xb7,
      0xbe, 0x13, 0xf0, 0x57, 0x91, 0x88, 0x02, 0xd7,
      0x0b, 0x0e, 0x46, 0x88, 0x85, 0xde, 0xaf, 0x80,
      0x20, 0x6f, 0xe8, 0xe1, 0xa2, 0x43, 0x78, 0x72,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char drone_interfaces__msg__TelemetryData__TYPE_NAME[] = "drone_interfaces/msg/TelemetryData";

// Define type names, field names, and default values
static char drone_interfaces__msg__TelemetryData__FIELD_NAME__speed[] = "speed";
static char drone_interfaces__msg__TelemetryData__FIELD_NAME__altitude[] = "altitude";
static char drone_interfaces__msg__TelemetryData__FIELD_NAME__latitude[] = "latitude";
static char drone_interfaces__msg__TelemetryData__FIELD_NAME__longitude[] = "longitude";
static char drone_interfaces__msg__TelemetryData__FIELD_NAME__orientation_roll[] = "orientation_roll";
static char drone_interfaces__msg__TelemetryData__FIELD_NAME__orientation_pitch[] = "orientation_pitch";
static char drone_interfaces__msg__TelemetryData__FIELD_NAME__orientation_yaw[] = "orientation_yaw";
static char drone_interfaces__msg__TelemetryData__FIELD_NAME__distance[] = "distance";
static char drone_interfaces__msg__TelemetryData__FIELD_NAME__battery_voltage[] = "battery_voltage";
static char drone_interfaces__msg__TelemetryData__FIELD_NAME__heading[] = "heading";
static char drone_interfaces__msg__TelemetryData__FIELD_NAME__acceleration[] = "acceleration";
static char drone_interfaces__msg__TelemetryData__FIELD_NAME__flight_mode[] = "flight_mode";

static rosidl_runtime_c__type_description__Field drone_interfaces__msg__TelemetryData__FIELDS[] = {
  {
    {drone_interfaces__msg__TelemetryData__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__TelemetryData__FIELD_NAME__altitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__TelemetryData__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__TelemetryData__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__TelemetryData__FIELD_NAME__orientation_roll, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__TelemetryData__FIELD_NAME__orientation_pitch, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__TelemetryData__FIELD_NAME__orientation_yaw, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__TelemetryData__FIELD_NAME__distance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__TelemetryData__FIELD_NAME__battery_voltage, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__TelemetryData__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__TelemetryData__FIELD_NAME__acceleration, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__TelemetryData__FIELD_NAME__flight_mode, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
drone_interfaces__msg__TelemetryData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {drone_interfaces__msg__TelemetryData__TYPE_NAME, 34, 34},
      {drone_interfaces__msg__TelemetryData__FIELDS, 12, 12},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 speed\n"
  "float64 altitude\n"
  "float64 latitude\n"
  "float64 longitude\n"
  "float64 orientation_roll\n"
  "float64 orientation_pitch\n"
  "float64 orientation_yaw\n"
  "float64 distance\n"
  "float64 battery_voltage\n"
  "float64 heading\n"
  "float64 acceleration\n"
  "string flight_mode";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
drone_interfaces__msg__TelemetryData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {drone_interfaces__msg__TelemetryData__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 237, 237},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
drone_interfaces__msg__TelemetryData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *drone_interfaces__msg__TelemetryData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
