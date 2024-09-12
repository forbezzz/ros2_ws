// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_interfaces:msg/TelemetryData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "drone_interfaces/msg/telemetry_data.hpp"


#ifndef DRONE_INTERFACES__MSG__DETAIL__TELEMETRY_DATA__BUILDER_HPP_
#define DRONE_INTERFACES__MSG__DETAIL__TELEMETRY_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_interfaces/msg/detail/telemetry_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_interfaces
{

namespace msg
{

namespace builder
{

class Init_TelemetryData_flight_mode
{
public:
  explicit Init_TelemetryData_flight_mode(::drone_interfaces::msg::TelemetryData & msg)
  : msg_(msg)
  {}
  ::drone_interfaces::msg::TelemetryData flight_mode(::drone_interfaces::msg::TelemetryData::_flight_mode_type arg)
  {
    msg_.flight_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::msg::TelemetryData msg_;
};

class Init_TelemetryData_acceleration
{
public:
  explicit Init_TelemetryData_acceleration(::drone_interfaces::msg::TelemetryData & msg)
  : msg_(msg)
  {}
  Init_TelemetryData_flight_mode acceleration(::drone_interfaces::msg::TelemetryData::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_TelemetryData_flight_mode(msg_);
  }

private:
  ::drone_interfaces::msg::TelemetryData msg_;
};

class Init_TelemetryData_heading
{
public:
  explicit Init_TelemetryData_heading(::drone_interfaces::msg::TelemetryData & msg)
  : msg_(msg)
  {}
  Init_TelemetryData_acceleration heading(::drone_interfaces::msg::TelemetryData::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_TelemetryData_acceleration(msg_);
  }

private:
  ::drone_interfaces::msg::TelemetryData msg_;
};

class Init_TelemetryData_battery_voltage
{
public:
  explicit Init_TelemetryData_battery_voltage(::drone_interfaces::msg::TelemetryData & msg)
  : msg_(msg)
  {}
  Init_TelemetryData_heading battery_voltage(::drone_interfaces::msg::TelemetryData::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_TelemetryData_heading(msg_);
  }

private:
  ::drone_interfaces::msg::TelemetryData msg_;
};

class Init_TelemetryData_distance
{
public:
  explicit Init_TelemetryData_distance(::drone_interfaces::msg::TelemetryData & msg)
  : msg_(msg)
  {}
  Init_TelemetryData_battery_voltage distance(::drone_interfaces::msg::TelemetryData::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_TelemetryData_battery_voltage(msg_);
  }

private:
  ::drone_interfaces::msg::TelemetryData msg_;
};

class Init_TelemetryData_orientation_yaw
{
public:
  explicit Init_TelemetryData_orientation_yaw(::drone_interfaces::msg::TelemetryData & msg)
  : msg_(msg)
  {}
  Init_TelemetryData_distance orientation_yaw(::drone_interfaces::msg::TelemetryData::_orientation_yaw_type arg)
  {
    msg_.orientation_yaw = std::move(arg);
    return Init_TelemetryData_distance(msg_);
  }

private:
  ::drone_interfaces::msg::TelemetryData msg_;
};

class Init_TelemetryData_orientation_pitch
{
public:
  explicit Init_TelemetryData_orientation_pitch(::drone_interfaces::msg::TelemetryData & msg)
  : msg_(msg)
  {}
  Init_TelemetryData_orientation_yaw orientation_pitch(::drone_interfaces::msg::TelemetryData::_orientation_pitch_type arg)
  {
    msg_.orientation_pitch = std::move(arg);
    return Init_TelemetryData_orientation_yaw(msg_);
  }

private:
  ::drone_interfaces::msg::TelemetryData msg_;
};

class Init_TelemetryData_orientation_roll
{
public:
  explicit Init_TelemetryData_orientation_roll(::drone_interfaces::msg::TelemetryData & msg)
  : msg_(msg)
  {}
  Init_TelemetryData_orientation_pitch orientation_roll(::drone_interfaces::msg::TelemetryData::_orientation_roll_type arg)
  {
    msg_.orientation_roll = std::move(arg);
    return Init_TelemetryData_orientation_pitch(msg_);
  }

private:
  ::drone_interfaces::msg::TelemetryData msg_;
};

class Init_TelemetryData_longitude
{
public:
  explicit Init_TelemetryData_longitude(::drone_interfaces::msg::TelemetryData & msg)
  : msg_(msg)
  {}
  Init_TelemetryData_orientation_roll longitude(::drone_interfaces::msg::TelemetryData::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_TelemetryData_orientation_roll(msg_);
  }

private:
  ::drone_interfaces::msg::TelemetryData msg_;
};

class Init_TelemetryData_latitude
{
public:
  explicit Init_TelemetryData_latitude(::drone_interfaces::msg::TelemetryData & msg)
  : msg_(msg)
  {}
  Init_TelemetryData_longitude latitude(::drone_interfaces::msg::TelemetryData::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_TelemetryData_longitude(msg_);
  }

private:
  ::drone_interfaces::msg::TelemetryData msg_;
};

class Init_TelemetryData_altitude
{
public:
  explicit Init_TelemetryData_altitude(::drone_interfaces::msg::TelemetryData & msg)
  : msg_(msg)
  {}
  Init_TelemetryData_latitude altitude(::drone_interfaces::msg::TelemetryData::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_TelemetryData_latitude(msg_);
  }

private:
  ::drone_interfaces::msg::TelemetryData msg_;
};

class Init_TelemetryData_speed
{
public:
  Init_TelemetryData_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TelemetryData_altitude speed(::drone_interfaces::msg::TelemetryData::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_TelemetryData_altitude(msg_);
  }

private:
  ::drone_interfaces::msg::TelemetryData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::msg::TelemetryData>()
{
  return drone_interfaces::msg::builder::Init_TelemetryData_speed();
}

}  // namespace drone_interfaces

#endif  // DRONE_INTERFACES__MSG__DETAIL__TELEMETRY_DATA__BUILDER_HPP_
