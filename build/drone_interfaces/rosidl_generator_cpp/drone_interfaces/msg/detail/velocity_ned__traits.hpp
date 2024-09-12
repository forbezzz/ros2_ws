// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drone_interfaces:msg/VelocityNed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "drone_interfaces/msg/velocity_ned.hpp"


#ifndef DRONE_INTERFACES__MSG__DETAIL__VELOCITY_NED__TRAITS_HPP_
#define DRONE_INTERFACES__MSG__DETAIL__VELOCITY_NED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drone_interfaces/msg/detail/velocity_ned__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace drone_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const VelocityNed & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << ", ";
  }

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: acceleration_x
  {
    out << "acceleration_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_x, out);
    out << ", ";
  }

  // member: acceleration_y
  {
    out << "acceleration_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_y, out);
    out << ", ";
  }

  // member: acceleration_z
  {
    out << "acceleration_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_z, out);
    out << ", ";
  }

  // member: orientation_roll
  {
    out << "orientation_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_roll, out);
    out << ", ";
  }

  // member: orientation_pitch
  {
    out << "orientation_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_pitch, out);
    out << ", ";
  }

  // member: orientation_yaw
  {
    out << "orientation_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_yaw, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: battery_voltage
  {
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << ", ";
  }

  // member: current_draw
  {
    out << "current_draw: ";
    rosidl_generator_traits::value_to_yaml(msg.current_draw, out);
    out << ", ";
  }

  // member: rssi_level
  {
    out << "rssi_level: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi_level, out);
    out << ", ";
  }

  // member: link_quality
  {
    out << "link_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.link_quality, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VelocityNed & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << "\n";
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: acceleration_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_x, out);
    out << "\n";
  }

  // member: acceleration_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_y, out);
    out << "\n";
  }

  // member: acceleration_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_z, out);
    out << "\n";
  }

  // member: orientation_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_roll, out);
    out << "\n";
  }

  // member: orientation_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_pitch, out);
    out << "\n";
  }

  // member: orientation_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_yaw, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }

  // member: current_draw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_draw: ";
    rosidl_generator_traits::value_to_yaml(msg.current_draw, out);
    out << "\n";
  }

  // member: rssi_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rssi_level: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi_level, out);
    out << "\n";
  }

  // member: link_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.link_quality, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VelocityNed & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace drone_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use drone_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_interfaces::msg::VelocityNed & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const drone_interfaces::msg::VelocityNed & msg)
{
  return drone_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drone_interfaces::msg::VelocityNed>()
{
  return "drone_interfaces::msg::VelocityNed";
}

template<>
inline const char * name<drone_interfaces::msg::VelocityNed>()
{
  return "drone_interfaces/msg/VelocityNed";
}

template<>
struct has_fixed_size<drone_interfaces::msg::VelocityNed>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<drone_interfaces::msg::VelocityNed>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<drone_interfaces::msg::VelocityNed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRONE_INTERFACES__MSG__DETAIL__VELOCITY_NED__TRAITS_HPP_
