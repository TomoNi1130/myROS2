# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interface_pkg:msg/Ransac.idl
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


class Metaclass_Ransac(type):
    """Metaclass of message 'Ransac'."""

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
            module = import_type_support('interface_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interface_pkg.msg.Ransac')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ransac
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ransac
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ransac
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ransac
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ransac

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Ransac(metaclass=Metaclass_Ransac):
    """Message class 'Ransac'."""

    __slots__ = [
        '_low_x',
        '_high_x',
        '_low_y',
        '_high_y',
        '_a',
        '_b',
        '_c',
        '_distance',
        '_theta',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'low_x': 'double',
        'high_x': 'double',
        'low_y': 'double',
        'high_y': 'double',
        'a': 'double',
        'b': 'double',
        'c': 'double',
        'distance': 'double',
        'theta': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.low_x = kwargs.get('low_x', float())
        self.high_x = kwargs.get('high_x', float())
        self.low_y = kwargs.get('low_y', float())
        self.high_y = kwargs.get('high_y', float())
        self.a = kwargs.get('a', float())
        self.b = kwargs.get('b', float())
        self.c = kwargs.get('c', float())
        self.distance = kwargs.get('distance', float())
        self.theta = kwargs.get('theta', float())

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
        if self.low_x != other.low_x:
            return False
        if self.high_x != other.high_x:
            return False
        if self.low_y != other.low_y:
            return False
        if self.high_y != other.high_y:
            return False
        if self.a != other.a:
            return False
        if self.b != other.b:
            return False
        if self.c != other.c:
            return False
        if self.distance != other.distance:
            return False
        if self.theta != other.theta:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def low_x(self):
        """Message field 'low_x'."""
        return self._low_x

    @low_x.setter
    def low_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'low_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'low_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._low_x = value

    @builtins.property
    def high_x(self):
        """Message field 'high_x'."""
        return self._high_x

    @high_x.setter
    def high_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'high_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'high_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._high_x = value

    @builtins.property
    def low_y(self):
        """Message field 'low_y'."""
        return self._low_y

    @low_y.setter
    def low_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'low_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'low_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._low_y = value

    @builtins.property
    def high_y(self):
        """Message field 'high_y'."""
        return self._high_y

    @high_y.setter
    def high_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'high_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'high_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._high_y = value

    @builtins.property
    def a(self):
        """Message field 'a'."""
        return self._a

    @a.setter
    def a(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'a' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a = value

    @builtins.property
    def b(self):
        """Message field 'b'."""
        return self._b

    @b.setter
    def b(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'b' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'b' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._b = value

    @builtins.property
    def c(self):
        """Message field 'c'."""
        return self._c

    @c.setter
    def c(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'c' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'c' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._c = value

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
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._distance = value

    @builtins.property
    def theta(self):
        """Message field 'theta'."""
        return self._theta

    @theta.setter
    def theta(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'theta' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta = value
