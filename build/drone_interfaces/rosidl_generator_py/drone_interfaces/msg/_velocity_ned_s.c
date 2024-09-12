// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from drone_interfaces:msg/VelocityNed.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "drone_interfaces/msg/detail/velocity_ned__struct.h"
#include "drone_interfaces/msg/detail/velocity_ned__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool drone_interfaces__msg__velocity_ned__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("drone_interfaces.msg._velocity_ned.VelocityNed", full_classname_dest, 46) == 0);
  }
  drone_interfaces__msg__VelocityNed * ros_message = _ros_message;
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // altitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acceleration_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acceleration_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acceleration_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // orientation_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation_roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->orientation_roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // orientation_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->orientation_pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // orientation_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->orientation_yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_draw
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_draw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_draw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rssi_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "rssi_level");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rssi_level = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // link_quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_quality");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->link_quality = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * drone_interfaces__msg__velocity_ned__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VelocityNed */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("drone_interfaces.msg._velocity_ned");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VelocityNed");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  drone_interfaces__msg__VelocityNed * ros_message = (drone_interfaces__msg__VelocityNed *)raw_ros_message;
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation_roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->orientation_roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->orientation_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->orientation_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_draw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_draw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_draw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rssi_level
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rssi_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rssi_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link_quality
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->link_quality);
    {
      int rc = PyObject_SetAttrString(_pymessage, "link_quality", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
