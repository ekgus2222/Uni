# generated from rosidl_generator_py/resource/_idl.py.em
# with input from time_msgs:srv/Time.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Time_Request(type):
    """Metaclass of message 'Time_Request'."""

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
            module = import_type_support('time_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'time_msgs.srv.Time_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__time__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__time__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__time__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__time__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__time__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Time_Request(metaclass=Metaclass_Time_Request):
    """Message class 'Time_Request'."""

    __slots__ = [
        '_mode',
        '_time_to_work',
        '_home_address',
        '_office_address',
        '_required_time',
        '_required_time_cnt',
        '_request',
    ]

    _fields_and_field_types = {
        'mode': 'int32',
        'time_to_work': 'string',
        'home_address': 'string',
        'office_address': 'string',
        'required_time': 'string',
        'required_time_cnt': 'int32',
        'request': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode = kwargs.get('mode', int())
        self.time_to_work = kwargs.get('time_to_work', str())
        self.home_address = kwargs.get('home_address', str())
        self.office_address = kwargs.get('office_address', str())
        self.required_time = kwargs.get('required_time', str())
        self.required_time_cnt = kwargs.get('required_time_cnt', int())
        self.request = kwargs.get('request', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.mode != other.mode:
            return False
        if self.time_to_work != other.time_to_work:
            return False
        if self.home_address != other.home_address:
            return False
        if self.office_address != other.office_address:
            return False
        if self.required_time != other.required_time:
            return False
        if self.required_time_cnt != other.required_time_cnt:
            return False
        if self.request != other.request:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode' field must be an integer in [-2147483648, 2147483647]"
        self._mode = value

    @property
    def time_to_work(self):
        """Message field 'time_to_work'."""
        return self._time_to_work

    @time_to_work.setter
    def time_to_work(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'time_to_work' field must be of type 'str'"
        self._time_to_work = value

    @property
    def home_address(self):
        """Message field 'home_address'."""
        return self._home_address

    @home_address.setter
    def home_address(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'home_address' field must be of type 'str'"
        self._home_address = value

    @property
    def office_address(self):
        """Message field 'office_address'."""
        return self._office_address

    @office_address.setter
    def office_address(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'office_address' field must be of type 'str'"
        self._office_address = value

    @property
    def required_time(self):
        """Message field 'required_time'."""
        return self._required_time

    @required_time.setter
    def required_time(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'required_time' field must be of type 'str'"
        self._required_time = value

    @property
    def required_time_cnt(self):
        """Message field 'required_time_cnt'."""
        return self._required_time_cnt

    @required_time_cnt.setter
    def required_time_cnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'required_time_cnt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'required_time_cnt' field must be an integer in [-2147483648, 2147483647]"
        self._required_time_cnt = value

    @property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'request' field must be of type 'str'"
        self._request = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Time_Response(type):
    """Metaclass of message 'Time_Response'."""

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
            module = import_type_support('time_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'time_msgs.srv.Time_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__time__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__time__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__time__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__time__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__time__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Time_Response(metaclass=Metaclass_Time_Response):
    """Message class 'Time_Response'."""

    __slots__ = [
        '_alarm_time_response',
        '_transport_response',
        '_test',
    ]

    _fields_and_field_types = {
        'alarm_time_response': 'string',
        'transport_response': 'string',
        'test': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.alarm_time_response = kwargs.get('alarm_time_response', str())
        self.transport_response = kwargs.get('transport_response', str())
        self.test = kwargs.get('test', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.alarm_time_response != other.alarm_time_response:
            return False
        if self.transport_response != other.transport_response:
            return False
        if self.test != other.test:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def alarm_time_response(self):
        """Message field 'alarm_time_response'."""
        return self._alarm_time_response

    @alarm_time_response.setter
    def alarm_time_response(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'alarm_time_response' field must be of type 'str'"
        self._alarm_time_response = value

    @property
    def transport_response(self):
        """Message field 'transport_response'."""
        return self._transport_response

    @transport_response.setter
    def transport_response(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'transport_response' field must be of type 'str'"
        self._transport_response = value

    @property
    def test(self):
        """Message field 'test'."""
        return self._test

    @test.setter
    def test(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'test' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'test' field must be an integer in [-2147483648, 2147483647]"
        self._test = value


class Metaclass_Time(type):
    """Metaclass of service 'Time'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('time_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'time_msgs.srv.Time')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__time

            from time_msgs.srv import _time
            if _time.Metaclass_Time_Request._TYPE_SUPPORT is None:
                _time.Metaclass_Time_Request.__import_type_support__()
            if _time.Metaclass_Time_Response._TYPE_SUPPORT is None:
                _time.Metaclass_Time_Response.__import_type_support__()


class Time(metaclass=Metaclass_Time):
    from time_msgs.srv._time import Time_Request as Request
    from time_msgs.srv._time import Time_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
