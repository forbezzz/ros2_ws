// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_interfaces:msg/VelocityNed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "drone_interfaces/msg/velocity_ned.hpp"


#ifndef DRONE_INTERFACES__MSG__DETAIL__VELOCITY_NED__BUILDER_HPP_
#define DRONE_INTERFACES__MSG__DETAIL__VELOCITY_NED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_interfaces/msg/detail/velocity_ned__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_interfaces
{

namespace msg
{

namespace builder
{

class Init_VelocityNed_link_quality
{
public:
  explicit Init_VelocityNed_link_quality(::drone_interfaces::msg::VelocityNed & msg)
  : msg_(msg)
  {}
  ::drone_interfaces::msg::VelocityNed link_quality(::drone_interfaces::msg::VelocityNed::_link_quality_type arg)
  {
    msg_.link_quality = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::msg::VelocityNed msg_;
};

class Init_VelocityNed_rssi_level
{
public:
  explicit Init_VelocityNed_rssi_level(::drone_interfaces::msg::VelocityNed & msg)
  : msg_(msg)
  {}
  Init_VelocityNed_link_quality rssi_level(::drone_interfaces::msg::VelocityNed::_rssi_level_type arg)
  {
    msg_.rssi_level = std::move(arg);
    return Init_VelocityNed_link_quality(msg_);
  }

private:
  ::drone_interfaces::msg::VelocityNed msg_;
};

class Init_VelocityNed_current_draw
{
public:
  explicit Init_VelocityNed_current_draw(::drone_interfaces::msg::VelocityNed & msg)
  : msg_(msg)
  {}
  Init_VelocityNed_rssi_level current_draw(::drone_interfaces::msg::VelocityNed::_current_draw_type arg)
  {
    msg_.current_draw = std::move(arg);
    return Init_VelocityNed_rssi_level(msg_);
  }

private:
  ::drone_interfaces::msg::VelocityNed msg_;
};

class Init_VelocityNed_battery_voltage
{
public:
  explicit Init_VelocityNed_battery_voltage(::drone_interfaces::msg::VelocityNed & msg)
  : msg_(msg)
  {}
  Init_VelocityNed_current_draw battery_voltage(::drone_interfaces::msg::VelocityNed::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_VelocityNed_current_draw(msg_);
  }

private:
  ::drone_interfaces::msg::VelocityNed msg_;
};

class Init_VelocityNed_distance
{
public:
  explicit Init_VelocityNed_distance(::drone_interfaces::msg::VelocityNed & msg)
  : msg_(msg)
  {}
  Init_VelocityNed_battery_voltage distance(::drone_interfaces::msg::VelocityNed::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_VelocityNed_battery_voltage(msg_);
  }

private:
  ::drone_interfaces::msg::VelocityNed msg_;
};

class Init_VelocityNed_orientation_yaw
{
public:
  explicit Init_VelocityNed_orientation_yaw(::drone_interfaces::msg::VelocityNed & msg)
  : msg_(msg)
  {}
  Init_VelocityNed_distance orientation_yaw(::drone_interfaces::msg::VelocityNed::_orientation_yaw_type arg)
  {
    msg_.orientation_yaw = std::move(arg);
    return Init_VelocityNed_distance(msg_);
  }

private:
  ::drone_interfaces::msg::VelocityNed msg_;
};

class Init_VelocityNed_orientation_pitch
{
public:
  explicit Init_VelocityNed_orientation_pitch(::drone_interfaces::msg::VelocityNed & msg)
  : msg_(msg)
  {}
  Init_VelocityNed_orientation_yaw orientation_pitch(::drone_interfaces::msg::VelocityNed::_orientation_pitch_type arg)
  {
    msg_.orientation_pitch = std::move(arg);
    return Init_VelocityNed_orientation_yaw(msg_);
  }

private:
  ::drone_interfaces::msg::VelocityNed msg_;
};

class Init_VelocityNed_orientation_roll
{
public:
  explicit Init_VelocityNed_orientation_roll(::drone_interfaces::msg::VelocityNed & msg)
  : msg_(msg)
  {}
  Init_VelocityNed_orientation_pitch orientation_roll(::drone_interfaces::msg::VelocityNed::_orientation_roll_type arg)
  {
    msg_.orientation_roll = std::move(arg);
    return Init_VelocityNed_orientation_pitch(msg_);
  }

private:
  ::drone_interfaces::msg::VelocityNed msg_;
};

class Init_VelocityNed_acceleration_z
{
public:
  explicit Init_VelocityNed_acceleration_z(::drone_interfaces::msg::VelocityNed & msg)
  : msg_(msg)
  {}
  Init_VelocityNed_orientation_roll acceleration_z(::drone_interfaces::msg::VelocityNed::_acceleration_z_type arg)
  {
    msg_.acceleration_z = std::move(arg);
    return Init_VelocityNed_orientation_roll(msg_);
  }

private:
  ::drone_interfaces::msg::VelocityNed msg_;
};

class Init_VelocityNed_acceleration_y
{
public:
  explicit Init_VelocityNed_acceleration_y(::drone_interfaces::msg::VelocityNed & msg)
  : msg_(msg)
  {}
  Init_VelocityNed_acceleration_z acceleration_y(::drone_interfaces::msg::VelocityNed::_acceleration_y_type arg)
  {
    msg_.acceleration_y = std::move(arg);
    return Init_VelocityNed_acceleration_z(msg_);
  }

private:
  ::drone_interfaces::msg::VelocityNed msg_;
};

class Init_VelocityNed_acceleration_x
{
public:
  explicit Init_VelocityNed_acceleration_x(::drone_interfaces::msg::VelocityNed & msg)
  : msg_(msg)
  {}
  Init_VelocityNed_acceleration_y acceleration_x(::drone_interfaces::msg::VelocityNed::_acceleration_x_type arg)
  {
    msg_.acceleration_x = std::move(arg);
    return Init_VelocityNed_acceleration_y(msg_);
  }

private:
  ::drone_interfaces::msg::VelocityNed msg_;
};

class Init_VelocityNed_longitude
{
public:
  explicit Init_VelocityNed_longitude(::drone_interfaces::msg::VelocityNed & msg)
  : msg_(msg)
  {}
  Init_VelocityNed_acceleration_x longitude(::drone_interfaces::msg::VelocityNed::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_VelocityNed_acceleration_x(msg_);
  }

private:
  ::drone_interfaces::msg::VelocityNed msg_;
};

class Init_VelocityNed_latitude
{
public:
  explicit Init_VelocityNed_latitude(::drone_interfaces::msg::VelocityNed & msg)
  : msg_(msg)
  {}
  Init_VelocityNed_longitude latitude(::drone_interfaces::msg::VelocityNed::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_VelocityNed_longitude(msg_);
  }

private:
  ::drone_interfaces::msg::VelocityNed msg_;
};

class Init_VelocityNed_altitude
{
public:
  explicit Init_VelocityNed_altitude(::drone_interfaces::msg::VelocityNed & msg)
  : msg_(msg)
  {}
  Init_VelocityNed_latitude altitude(::drone_interfaces::msg::VelocityNed::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_VelocityNed_latitude(msg_);
  }

private:
  ::drone_interfaces::msg::VelocityNed msg_;
};

class Init_VelocityNed_speed
{
public:
  Init_VelocityNed_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityNed_altitude speed(::drone_interfaces::msg::VelocityNed::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_VelocityNed_altitude(msg_);
  }

private:
  ::drone_interfaces::msg::VelocityNed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::msg::VelocityNed>()
{
  return drone_interfaces::msg::builder::Init_VelocityNed_speed();
}

}  // namespace drone_interfaces

#endif  // DRONE_INTERFACES__MSG__DETAIL__VELOCITY_NED__BUILDER_HPP_
