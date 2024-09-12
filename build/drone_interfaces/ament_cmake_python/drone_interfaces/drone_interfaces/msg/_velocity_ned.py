# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drone_interfaces:msg/VelocityNed.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VelocityNed(type):
    """Metaclass of message 'VelocityNed'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('drone_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'drone_interfaces.msg.VelocityNed')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__velocity_ned
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__velocity_ned
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__velocity_ned
            cls._TYPE_SUPPORT = module.type_support_msg__msg__velocity_ned
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__velocity_ned

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VelocityNed(metaclass=Metaclass_VelocityNed):
    """Message class 'VelocityNed'."""

    __slots__ = [
        '_speed',
        '_altitude',
        '_latitude',
        '_longitude',
        '_acceleration_x',
        '_acceleration_y',
        '_acceleration_z',
        '_orientation_roll',
        '_orientation_pitch',
        '_orientation_yaw',
        '_distance',
        '_battery_voltage',
        '_current_draw',
        '_rssi_level',
        '_link_quality',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'speed': 'float',
        'altitude': 'float',
        'latitude': 'double',
        'longitude': 'double',
        'acceleration_x': 'float',
        'acceleration_y': 'float',
        'acceleration_z': 'float',
        'orientation_roll': 'float',
        'orientation_pitch': 'float',
        'orientation_yaw': 'float',
        'distance': 'float',
        'battery_voltage': 'float',
        'current_draw': 'float',
        'rssi_level': 'float',
        'link_quality': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.speed = kwargs.get('speed', float())
        self.altitude = kwargs.get('altitude', float())
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.acceleration_x = kwargs.get('acceleration_x', float())
        self.acceleration_y = kwargs.get('acceleration_y', float())
        self.acceleration_z = kwargs.get('acceleration_z', float())
        self.orientation_roll = kwargs.get('orientation_roll', float())
        self.orientation_pitch = kwargs.get('orientation_pitch', float())
        self.orientation_yaw = kwargs.get('orientation_yaw', float())
        self.distance = kwargs.get('distance', float())
        self.battery_voltage = kwargs.get('battery_voltage', float())
        self.current_draw = kwargs.get('current_draw', float())
        self.rssi_level = kwargs.get('rssi_level', float())
        self.link_quality = kwargs.get('link_quality', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.speed != other.speed:
            return False
        if self.altitude != other.altitude:
            return False
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.acceleration_x != other.acceleration_x:
            return False
        if self.acceleration_y != other.acceleration_y:
            return False
        if self.acceleration_z != other.acceleration_z:
            return False
        if self.orientation_roll != other.orientation_roll:
            return False
        if self.orientation_pitch != other.orientation_pitch:
            return False
        if self.orientation_yaw != other.orientation_yaw:
            return False
        if self.distance != other.distance:
            return False
        if self.battery_voltage != other.battery_voltage:
            return False
        if self.current_draw != other.current_draw:
            return False
        if self.rssi_level != other.rssi_level:
            return False
        if self.link_quality != other.link_quality:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed = value

    @builtins.property
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'altitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'altitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._altitude = value

    @builtins.property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude = value

    @builtins.property
    def acceleration_x(self):
        """Message field 'acceleration_x'."""
        return self._acceleration_x

    @acceleration_x.setter
    def acceleration_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'acceleration_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acceleration_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acceleration_x = value

    @builtins.property
    def acceleration_y(self):
        """Message field 'acceleration_y'."""
        return self._acceleration_y

    @acceleration_y.setter
    def acceleration_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'acceleration_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acceleration_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acceleration_y = value

    @builtins.property
    def acceleration_z(self):
        """Message field 'acceleration_z'."""
        return self._acceleration_z

    @acceleration_z.setter
    def acceleration_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'acceleration_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acceleration_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acceleration_z = value

    @builtins.property
    def orientation_roll(self):
        """Message field 'orientation_roll'."""
        return self._orientation_roll

    @orientation_roll.setter
    def orientation_roll(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'orientation_roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'orientation_roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._orientation_roll = value

    @builtins.property
    def orientation_pitch(self):
        """Message field 'orientation_pitch'."""
        return self._orientation_pitch

    @orientation_pitch.setter
    def orientation_pitch(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'orientation_pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'orientation_pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._orientation_pitch = value

    @builtins.property
    def orientation_yaw(self):
        """Message field 'orientation_yaw'."""
        return self._orientation_yaw

    @orientation_yaw.setter
    def orientation_yaw(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'orientation_yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'orientation_yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._orientation_yaw = value

    @builtins.property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance = value

    @builtins.property
    def battery_voltage(self):
        """Message field 'battery_voltage'."""
        return self._battery_voltage

    @battery_voltage.setter
    def battery_voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'battery_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_voltage = value

    @builtins.property
    def current_draw(self):
        """Message field 'current_draw'."""
        return self._current_draw

    @current_draw.setter
    def current_draw(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'current_draw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_draw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_draw = value

    @builtins.property
    def rssi_level(self):
        """Message field 'rssi_level'."""
        return self._rssi_level

    @rssi_level.setter
    def rssi_level(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'rssi_level' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rssi_level' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rssi_level = value

    @builtins.property
    def link_quality(self):
        """Message field 'link_quality'."""
        return self._link_quality

    @link_quality.setter
    def link_quality(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'link_quality' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'link_quality' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._link_quality = value
