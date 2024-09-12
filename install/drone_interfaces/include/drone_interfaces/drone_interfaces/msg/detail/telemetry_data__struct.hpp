// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_interfaces:msg/TelemetryData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "drone_interfaces/msg/telemetry_data.hpp"


#ifndef DRONE_INTERFACES__MSG__DETAIL__TELEMETRY_DATA__STRUCT_HPP_
#define DRONE_INTERFACES__MSG__DETAIL__TELEMETRY_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drone_interfaces__msg__TelemetryData __attribute__((deprecated))
#else
# define DEPRECATED__drone_interfaces__msg__TelemetryData __declspec(deprecated)
#endif

namespace drone_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TelemetryData_
{
  using Type = TelemetryData_<ContainerAllocator>;

  explicit TelemetryData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0;
      this->altitude = 0.0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->orientation_roll = 0.0;
      this->orientation_pitch = 0.0;
      this->orientation_yaw = 0.0;
      this->distance = 0.0;
      this->battery_voltage = 0.0;
      this->heading = 0.0;
      this->acceleration = 0.0;
      this->flight_mode = "";
    }
  }

  explicit TelemetryData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : flight_mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0;
      this->altitude = 0.0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->orientation_roll = 0.0;
      this->orientation_pitch = 0.0;
      this->orientation_yaw = 0.0;
      this->distance = 0.0;
      this->battery_voltage = 0.0;
      this->heading = 0.0;
      this->acceleration = 0.0;
      this->flight_mode = "";
    }
  }

  // field types and members
  using _speed_type =
    double;
  _speed_type speed;
  using _altitude_type =
    double;
  _altitude_type altitude;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _orientation_roll_type =
    double;
  _orientation_roll_type orientation_roll;
  using _orientation_pitch_type =
    double;
  _orientation_pitch_type orientation_pitch;
  using _orientation_yaw_type =
    double;
  _orientation_yaw_type orientation_yaw;
  using _distance_type =
    double;
  _distance_type distance;
  using _battery_voltage_type =
    double;
  _battery_voltage_type battery_voltage;
  using _heading_type =
    double;
  _heading_type heading;
  using _acceleration_type =
    double;
  _acceleration_type acceleration;
  using _flight_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _flight_mode_type flight_mode;

  // setters for named parameter idiom
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__orientation_roll(
    const double & _arg)
  {
    this->orientation_roll = _arg;
    return *this;
  }
  Type & set__orientation_pitch(
    const double & _arg)
  {
    this->orientation_pitch = _arg;
    return *this;
  }
  Type & set__orientation_yaw(
    const double & _arg)
  {
    this->orientation_yaw = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const double & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__acceleration(
    const double & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__flight_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->flight_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_interfaces::msg::TelemetryData_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_interfaces::msg::TelemetryData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_interfaces::msg::TelemetryData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_interfaces::msg::TelemetryData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_interfaces::msg::TelemetryData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_interfaces::msg::TelemetryData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_interfaces::msg::TelemetryData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_interfaces::msg::TelemetryData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_interfaces::msg::TelemetryData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_interfaces::msg::TelemetryData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_interfaces__msg__TelemetryData
    std::shared_ptr<drone_interfaces::msg::TelemetryData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_interfaces__msg__TelemetryData
    std::shared_ptr<drone_interfaces::msg::TelemetryData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TelemetryData_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->orientation_roll != other.orientation_roll) {
      return false;
    }
    if (this->orientation_pitch != other.orientation_pitch) {
      return false;
    }
    if (this->orientation_yaw != other.orientation_yaw) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->flight_mode != other.flight_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const TelemetryData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TelemetryData_

// alias to use template instance with default allocator
using TelemetryData =
  drone_interfaces::msg::TelemetryData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drone_interfaces

#endif  // DRONE_INTERFACES__MSG__DETAIL__TELEMETRY_DATA__STRUCT_HPP_
