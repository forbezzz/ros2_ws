// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drone_interfaces:msg/VelocityNed.idl
// generated code does not contain a copyright notice
#include "drone_interfaces/msg/detail/velocity_ned__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
drone_interfaces__msg__VelocityNed__init(drone_interfaces__msg__VelocityNed * msg)
{
  if (!msg) {
    return false;
  }
  // speed
  // altitude
  // latitude
  // longitude
  // acceleration_x
  // acceleration_y
  // acceleration_z
  // orientation_roll
  // orientation_pitch
  // orientation_yaw
  // distance
  // battery_voltage
  // current_draw
  // rssi_level
  // link_quality
  return true;
}

void
drone_interfaces__msg__VelocityNed__fini(drone_interfaces__msg__VelocityNed * msg)
{
  if (!msg) {
    return;
  }
  // speed
  // altitude
  // latitude
  // longitude
  // acceleration_x
  // acceleration_y
  // acceleration_z
  // orientation_roll
  // orientation_pitch
  // orientation_yaw
  // distance
  // battery_voltage
  // current_draw
  // rssi_level
  // link_quality
}

bool
drone_interfaces__msg__VelocityNed__are_equal(const drone_interfaces__msg__VelocityNed * lhs, const drone_interfaces__msg__VelocityNed * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // altitude
  if (lhs->altitude != rhs->altitude) {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // acceleration_x
  if (lhs->acceleration_x != rhs->acceleration_x) {
    return false;
  }
  // acceleration_y
  if (lhs->acceleration_y != rhs->acceleration_y) {
    return false;
  }
  // acceleration_z
  if (lhs->acceleration_z != rhs->acceleration_z) {
    return false;
  }
  // orientation_roll
  if (lhs->orientation_roll != rhs->orientation_roll) {
    return false;
  }
  // orientation_pitch
  if (lhs->orientation_pitch != rhs->orientation_pitch) {
    return false;
  }
  // orientation_yaw
  if (lhs->orientation_yaw != rhs->orientation_yaw) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // current_draw
  if (lhs->current_draw != rhs->current_draw) {
    return false;
  }
  // rssi_level
  if (lhs->rssi_level != rhs->rssi_level) {
    return false;
  }
  // link_quality
  if (lhs->link_quality != rhs->link_quality) {
    return false;
  }
  return true;
}

bool
drone_interfaces__msg__VelocityNed__copy(
  const drone_interfaces__msg__VelocityNed * input,
  drone_interfaces__msg__VelocityNed * output)
{
  if (!input || !output) {
    return false;
  }
  // speed
  output->speed = input->speed;
  // altitude
  output->altitude = input->altitude;
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // acceleration_x
  output->acceleration_x = input->acceleration_x;
  // acceleration_y
  output->acceleration_y = input->acceleration_y;
  // acceleration_z
  output->acceleration_z = input->acceleration_z;
  // orientation_roll
  output->orientation_roll = input->orientation_roll;
  // orientation_pitch
  output->orientation_pitch = input->orientation_pitch;
  // orientation_yaw
  output->orientation_yaw = input->orientation_yaw;
  // distance
  output->distance = input->distance;
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // current_draw
  output->current_draw = input->current_draw;
  // rssi_level
  output->rssi_level = input->rssi_level;
  // link_quality
  output->link_quality = input->link_quality;
  return true;
}

drone_interfaces__msg__VelocityNed *
drone_interfaces__msg__VelocityNed__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_interfaces__msg__VelocityNed * msg = (drone_interfaces__msg__VelocityNed *)allocator.allocate(sizeof(drone_interfaces__msg__VelocityNed), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_interfaces__msg__VelocityNed));
  bool success = drone_interfaces__msg__VelocityNed__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_interfaces__msg__VelocityNed__destroy(drone_interfaces__msg__VelocityNed * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_interfaces__msg__VelocityNed__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_interfaces__msg__VelocityNed__Sequence__init(drone_interfaces__msg__VelocityNed__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_interfaces__msg__VelocityNed * data = NULL;

  if (size) {
    data = (drone_interfaces__msg__VelocityNed *)allocator.zero_allocate(size, sizeof(drone_interfaces__msg__VelocityNed), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_interfaces__msg__VelocityNed__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_interfaces__msg__VelocityNed__fini(&data[i - 1]);
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
drone_interfaces__msg__VelocityNed__Sequence__fini(drone_interfaces__msg__VelocityNed__Sequence * array)
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
      drone_interfaces__msg__VelocityNed__fini(&array->data[i]);
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

drone_interfaces__msg__VelocityNed__Sequence *
drone_interfaces__msg__VelocityNed__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_interfaces__msg__VelocityNed__Sequence * array = (drone_interfaces__msg__VelocityNed__Sequence *)allocator.allocate(sizeof(drone_interfaces__msg__VelocityNed__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_interfaces__msg__VelocityNed__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_interfaces__msg__VelocityNed__Sequence__destroy(drone_interfaces__msg__VelocityNed__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_interfaces__msg__VelocityNed__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_interfaces__msg__VelocityNed__Sequence__are_equal(const drone_interfaces__msg__VelocityNed__Sequence * lhs, const drone_interfaces__msg__VelocityNed__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_interfaces__msg__VelocityNed__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_interfaces__msg__VelocityNed__Sequence__copy(
  const drone_interfaces__msg__VelocityNed__Sequence * input,
  drone_interfaces__msg__VelocityNed__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_interfaces__msg__VelocityNed);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_interfaces__msg__VelocityNed * data =
      (drone_interfaces__msg__VelocityNed *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_interfaces__msg__VelocityNed__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_interfaces__msg__VelocityNed__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_interfaces__msg__VelocityNed__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
