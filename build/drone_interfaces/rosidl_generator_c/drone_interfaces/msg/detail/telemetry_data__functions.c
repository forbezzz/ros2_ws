// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drone_interfaces:msg/TelemetryData.idl
// generated code does not contain a copyright notice
#include "drone_interfaces/msg/detail/telemetry_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `flight_mode`
#include "rosidl_runtime_c/string_functions.h"

bool
drone_interfaces__msg__TelemetryData__init(drone_interfaces__msg__TelemetryData * msg)
{
  if (!msg) {
    return false;
  }
  // speed
  // altitude
  // latitude
  // longitude
  // orientation_roll
  // orientation_pitch
  // orientation_yaw
  // distance
  // battery_voltage
  // heading
  // acceleration
  // flight_mode
  if (!rosidl_runtime_c__String__init(&msg->flight_mode)) {
    drone_interfaces__msg__TelemetryData__fini(msg);
    return false;
  }
  return true;
}

void
drone_interfaces__msg__TelemetryData__fini(drone_interfaces__msg__TelemetryData * msg)
{
  if (!msg) {
    return;
  }
  // speed
  // altitude
  // latitude
  // longitude
  // orientation_roll
  // orientation_pitch
  // orientation_yaw
  // distance
  // battery_voltage
  // heading
  // acceleration
  // flight_mode
  rosidl_runtime_c__String__fini(&msg->flight_mode);
}

bool
drone_interfaces__msg__TelemetryData__are_equal(const drone_interfaces__msg__TelemetryData * lhs, const drone_interfaces__msg__TelemetryData * rhs)
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
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // acceleration
  if (lhs->acceleration != rhs->acceleration) {
    return false;
  }
  // flight_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->flight_mode), &(rhs->flight_mode)))
  {
    return false;
  }
  return true;
}

bool
drone_interfaces__msg__TelemetryData__copy(
  const drone_interfaces__msg__TelemetryData * input,
  drone_interfaces__msg__TelemetryData * output)
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
  // heading
  output->heading = input->heading;
  // acceleration
  output->acceleration = input->acceleration;
  // flight_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->flight_mode), &(output->flight_mode)))
  {
    return false;
  }
  return true;
}

drone_interfaces__msg__TelemetryData *
drone_interfaces__msg__TelemetryData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_interfaces__msg__TelemetryData * msg = (drone_interfaces__msg__TelemetryData *)allocator.allocate(sizeof(drone_interfaces__msg__TelemetryData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_interfaces__msg__TelemetryData));
  bool success = drone_interfaces__msg__TelemetryData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_interfaces__msg__TelemetryData__destroy(drone_interfaces__msg__TelemetryData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_interfaces__msg__TelemetryData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_interfaces__msg__TelemetryData__Sequence__init(drone_interfaces__msg__TelemetryData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_interfaces__msg__TelemetryData * data = NULL;

  if (size) {
    data = (drone_interfaces__msg__TelemetryData *)allocator.zero_allocate(size, sizeof(drone_interfaces__msg__TelemetryData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_interfaces__msg__TelemetryData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_interfaces__msg__TelemetryData__fini(&data[i - 1]);
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
drone_interfaces__msg__TelemetryData__Sequence__fini(drone_interfaces__msg__TelemetryData__Sequence * array)
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
      drone_interfaces__msg__TelemetryData__fini(&array->data[i]);
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

drone_interfaces__msg__TelemetryData__Sequence *
drone_interfaces__msg__TelemetryData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_interfaces__msg__TelemetryData__Sequence * array = (drone_interfaces__msg__TelemetryData__Sequence *)allocator.allocate(sizeof(drone_interfaces__msg__TelemetryData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_interfaces__msg__TelemetryData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_interfaces__msg__TelemetryData__Sequence__destroy(drone_interfaces__msg__TelemetryData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_interfaces__msg__TelemetryData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_interfaces__msg__TelemetryData__Sequence__are_equal(const drone_interfaces__msg__TelemetryData__Sequence * lhs, const drone_interfaces__msg__TelemetryData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_interfaces__msg__TelemetryData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_interfaces__msg__TelemetryData__Sequence__copy(
  const drone_interfaces__msg__TelemetryData__Sequence * input,
  drone_interfaces__msg__TelemetryData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_interfaces__msg__TelemetryData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_interfaces__msg__TelemetryData * data =
      (drone_interfaces__msg__TelemetryData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_interfaces__msg__TelemetryData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_interfaces__msg__TelemetryData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_interfaces__msg__TelemetryData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
