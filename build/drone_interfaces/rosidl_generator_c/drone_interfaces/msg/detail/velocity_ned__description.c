// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from drone_interfaces:msg/VelocityNed.idl
// generated code does not contain a copyright notice

#include "drone_interfaces/msg/detail/velocity_ned__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
const rosidl_type_hash_t *
drone_interfaces__msg__VelocityNed__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd2, 0xeb, 0xe1, 0xcd, 0x46, 0xbb, 0xd4, 0xf9,
      0x9c, 0x85, 0xcb, 0xb4, 0x72, 0xdb, 0x64, 0xd3,
      0xa9, 0x31, 0xd2, 0xdd, 0xba, 0x43, 0xdb, 0xbc,
      0x7e, 0xd8, 0x61, 0x08, 0x1f, 0xf7, 0xd8, 0xaa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char drone_interfaces__msg__VelocityNed__TYPE_NAME[] = "drone_interfaces/msg/VelocityNed";

// Define type names, field names, and default values
static char drone_interfaces__msg__VelocityNed__FIELD_NAME__speed[] = "speed";
static char drone_interfaces__msg__VelocityNed__FIELD_NAME__altitude[] = "altitude";
static char drone_interfaces__msg__VelocityNed__FIELD_NAME__latitude[] = "latitude";
static char drone_interfaces__msg__VelocityNed__FIELD_NAME__longitude[] = "longitude";
static char drone_interfaces__msg__VelocityNed__FIELD_NAME__acceleration_x[] = "acceleration_x";
static char drone_interfaces__msg__VelocityNed__FIELD_NAME__acceleration_y[] = "acceleration_y";
static char drone_interfaces__msg__VelocityNed__FIELD_NAME__acceleration_z[] = "acceleration_z";
static char drone_interfaces__msg__VelocityNed__FIELD_NAME__orientation_roll[] = "orientation_roll";
static char drone_interfaces__msg__VelocityNed__FIELD_NAME__orientation_pitch[] = "orientation_pitch";
static char drone_interfaces__msg__VelocityNed__FIELD_NAME__orientation_yaw[] = "orientation_yaw";
static char drone_interfaces__msg__VelocityNed__FIELD_NAME__distance[] = "distance";
static char drone_interfaces__msg__VelocityNed__FIELD_NAME__battery_voltage[] = "battery_voltage";
static char drone_interfaces__msg__VelocityNed__FIELD_NAME__current_draw[] = "current_draw";
static char drone_interfaces__msg__VelocityNed__FIELD_NAME__rssi_level[] = "rssi_level";
static char drone_interfaces__msg__VelocityNed__FIELD_NAME__link_quality[] = "link_quality";

static rosidl_runtime_c__type_description__Field drone_interfaces__msg__VelocityNed__FIELDS[] = {
  {
    {drone_interfaces__msg__VelocityNed__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__VelocityNed__FIELD_NAME__altitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__VelocityNed__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__VelocityNed__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__VelocityNed__FIELD_NAME__acceleration_x, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__VelocityNed__FIELD_NAME__acceleration_y, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__VelocityNed__FIELD_NAME__acceleration_z, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__VelocityNed__FIELD_NAME__orientation_roll, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__VelocityNed__FIELD_NAME__orientation_pitch, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__VelocityNed__FIELD_NAME__orientation_yaw, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__VelocityNed__FIELD_NAME__distance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__VelocityNed__FIELD_NAME__battery_voltage, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__VelocityNed__FIELD_NAME__current_draw, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__VelocityNed__FIELD_NAME__rssi_level, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {drone_interfaces__msg__VelocityNed__FIELD_NAME__link_quality, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
drone_interfaces__msg__VelocityNed__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {drone_interfaces__msg__VelocityNed__TYPE_NAME, 32, 32},
      {drone_interfaces__msg__VelocityNed__FIELDS, 15, 15},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 speed\n"
  "float32 altitude\n"
  "float64 latitude\n"
  "float64 longitude\n"
  "float32 acceleration_x\n"
  "float32 acceleration_y\n"
  "float32 acceleration_z\n"
  "float32 orientation_roll\n"
  "float32 orientation_pitch\n"
  "float32 orientation_yaw\n"
  "float32 distance\n"
  "float32 battery_voltage\n"
  "float32 current_draw\n"
  "float32 rssi_level\n"
  "float32 link_quality";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
drone_interfaces__msg__VelocityNed__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {drone_interfaces__msg__VelocityNed__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 311, 311},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
drone_interfaces__msg__VelocityNed__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *drone_interfaces__msg__VelocityNed__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
