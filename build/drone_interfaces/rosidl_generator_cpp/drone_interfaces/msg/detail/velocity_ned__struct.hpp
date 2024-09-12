// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_interfaces:msg/VelocityNed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "drone_interfaces/msg/velocity_ned.hpp"


#ifndef DRONE_INTERFACES__MSG__DETAIL__VELOCITY_NED__STRUCT_HPP_
#define DRONE_INTERFACES__MSG__DETAIL__VELOCITY_NED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drone_interfaces__msg__VelocityNed __attribute__((deprecated))
#else
# define DEPRECATED__drone_interfaces__msg__VelocityNed __declspec(deprecated)
#endif

namespace drone_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VelocityNed_
{
  using Type = VelocityNed_<ContainerAllocator>;

  explicit VelocityNed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->altitude = 0.0f;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->acceleration_x = 0.0f;
      this->acceleration_y = 0.0f;
      this->acceleration_z = 0.0f;
      this->orientation_roll = 0.0f;
      this->orientation_pitch = 0.0f;
      this->orientation_yaw = 0.0f;
      this->distance = 0.0f;
      this->battery_voltage = 0.0f;
      this->current_draw = 0.0f;
      this->rssi_level = 0.0f;
      this->link_quality = 0.0f;
    }
  }

  explicit VelocityNed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->altitude = 0.0f;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->acceleration_x = 0.0f;
      this->acceleration_y = 0.0f;
      this->acceleration_z = 0.0f;
      this->orientation_roll = 0.0f;
      this->orientation_pitch = 0.0f;
      this->orientation_yaw = 0.0f;
      this->distance = 0.0f;
      this->battery_voltage = 0.0f;
      this->current_draw = 0.0f;
      this->rssi_level = 0.0f;
      this->link_quality = 0.0f;
    }
  }

  // field types and members
  using _speed_type =
    float;
  _speed_type speed;
  using _altitude_type =
    float;
  _altitude_type altitude;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _acceleration_x_type =
    float;
  _acceleration_x_type acceleration_x;
  using _acceleration_y_type =
    float;
  _acceleration_y_type acceleration_y;
  using _acceleration_z_type =
    float;
  _acceleration_z_type acceleration_z;
  using _orientation_roll_type =
    float;
  _orientation_roll_type orientation_roll;
  using _orientation_pitch_type =
    float;
  _orientation_pitch_type orientation_pitch;
  using _orientation_yaw_type =
    float;
  _orientation_yaw_type orientation_yaw;
  using _distance_type =
    float;
  _distance_type distance;
  using _battery_voltage_type =
    float;
  _battery_voltage_type battery_voltage;
  using _current_draw_type =
    float;
  _current_draw_type current_draw;
  using _rssi_level_type =
    float;
  _rssi_level_type rssi_level;
  using _link_quality_type =
    float;
  _link_quality_type link_quality;

  // setters for named parameter idiom
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__altitude(
    const float & _arg)
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
  Type & set__acceleration_x(
    const float & _arg)
  {
    this->acceleration_x = _arg;
    return *this;
  }
  Type & set__acceleration_y(
    const float & _arg)
  {
    this->acceleration_y = _arg;
    return *this;
  }
  Type & set__acceleration_z(
    const float & _arg)
  {
    this->acceleration_z = _arg;
    return *this;
  }
  Type & set__orientation_roll(
    const float & _arg)
  {
    this->orientation_roll = _arg;
    return *this;
  }
  Type & set__orientation_pitch(
    const float & _arg)
  {
    this->orientation_pitch = _arg;
    return *this;
  }
  Type & set__orientation_yaw(
    const float & _arg)
  {
    this->orientation_yaw = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const float & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__current_draw(
    const float & _arg)
  {
    this->current_draw = _arg;
    return *this;
  }
  Type & set__rssi_level(
    const float & _arg)
  {
    this->rssi_level = _arg;
    return *this;
  }
  Type & set__link_quality(
    const float & _arg)
  {
    this->link_quality = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_interfaces::msg::VelocityNed_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_interfaces::msg::VelocityNed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_interfaces::msg::VelocityNed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_interfaces::msg::VelocityNed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_interfaces::msg::VelocityNed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_interfaces::msg::VelocityNed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_interfaces::msg::VelocityNed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_interfaces::msg::VelocityNed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_interfaces::msg::VelocityNed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_interfaces::msg::VelocityNed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_interfaces__msg__VelocityNed
    std::shared_ptr<drone_interfaces::msg::VelocityNed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_interfaces__msg__VelocityNed
    std::shared_ptr<drone_interfaces::msg::VelocityNed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VelocityNed_ & other) const
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
    if (this->acceleration_x != other.acceleration_x) {
      return false;
    }
    if (this->acceleration_y != other.acceleration_y) {
      return false;
    }
    if (this->acceleration_z != other.acceleration_z) {
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
    if (this->current_draw != other.current_draw) {
      return false;
    }
    if (this->rssi_level != other.rssi_level) {
      return false;
    }
    if (this->link_quality != other.link_quality) {
      return false;
    }
    return true;
  }
  bool operator!=(const VelocityNed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VelocityNed_

// alias to use template instance with default allocator
using VelocityNed =
  drone_interfaces::msg::VelocityNed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drone_interfaces

#endif  // DRONE_INTERFACES__MSG__DETAIL__VELOCITY_NED__STRUCT_HPP_
