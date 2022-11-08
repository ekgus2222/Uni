# generated from rosidl_generator_py/resource/_idl.py.em
# with input from srv_alarm_interface:srv/AlarmOption.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AlarmOption_Request(type):
    """Metaclass of message 'AlarmOption_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ALARM_TIME': 1,
        'TRANSPORT_TIME': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('srv_alarm_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'srv_alarm_interface.srv.AlarmOption_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__alarm_option__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__alarm_option__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__alarm_option__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__alarm_option__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__alarm_option__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ALARM_TIME': cls.__constants['ALARM_TIME'],
            'TRANSPORT_TIME': cls.__constants['TRANSPORT_TIME'],
        }

    @property
    def ALARM_TIME(self):
        """Message constant 'ALARM_TIME'."""
        return Metaclass_AlarmOption_Request.__constants['ALARM_TIME']

    @property
    def TRANSPORT_TIME(self):
        """Message constant 'TRANSPORT_TIME'."""
        return Metaclass_AlarmOption_Request.__constants['TRANSPORT_TIME']


class AlarmOption_Request(metaclass=Metaclass_AlarmOption_Request):
    """
    Message class 'AlarmOption_Request'.

    Constants:
      ALARM_TIME
      TRANSPORT_TIME
    """

    __slots__ = [
        '_alarm_time_request',
        '_transport_time_request',
    ]

    _fields_and_field_types = {
        'alarm_time_request': 'int8',
        'transport_time_request': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.alarm_time_request = kwargs.get('alarm_time_request', int())
        self.transport_time_request = kwargs.get('transport_time_request', int())

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
        if self.alarm_time_request != other.alarm_time_request:
            return False
        if self.transport_time_request != other.transport_time_request:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def alarm_time_request(self):
        """Message field 'alarm_time_request'."""
        return self._alarm_time_request

    @alarm_time_request.setter
    def alarm_time_request(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alarm_time_request' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'alarm_time_request' field must be an integer in [-128, 127]"
        self._alarm_time_request = value

    @property
    def transport_time_request(self):
        """Message field 'transport_time_request'."""
        return self._transport_time_request

    @transport_time_request.setter
    def transport_time_request(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'transport_time_request' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'transport_time_request' field must be an integer in [-128, 127]"
        self._transport_time_request = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_AlarmOption_Response(type):
    """Metaclass of message 'AlarmOption_Response'."""

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
            module = import_type_support('srv_alarm_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'srv_alarm_interface.srv.AlarmOption_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__alarm_option__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__alarm_option__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__alarm_option__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__alarm_option__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__alarm_option__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AlarmOption_Response(metaclass=Metaclass_AlarmOption_Response):
    """Message class 'AlarmOption_Response'."""

    __slots__ = [
        '_alarm_time_response',
        '_transport_time_response',
    ]

    _fields_and_field_types = {
        'alarm_time_response': 'string',
        'transport_time_response': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.alarm_time_response = kwargs.get('alarm_time_response', str())
        self.transport_time_response = kwargs.get('transport_time_response', str())

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
        if self.transport_time_response != other.transport_time_response:
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
    def transport_time_response(self):
        """Message field 'transport_time_response'."""
        return self._transport_time_response

    @transport_time_response.setter
    def transport_time_response(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'transport_time_response' field must be of type 'str'"
        self._transport_time_response = value


class Metaclass_AlarmOption(type):
    """Metaclass of service 'AlarmOption'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('srv_alarm_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'srv_alarm_interface.srv.AlarmOption')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__alarm_option

            from srv_alarm_interface.srv import _alarm_option
            if _alarm_option.Metaclass_AlarmOption_Request._TYPE_SUPPORT is None:
                _alarm_option.Metaclass_AlarmOption_Request.__import_type_support__()
            if _alarm_option.Metaclass_AlarmOption_Response._TYPE_SUPPORT is None:
                _alarm_option.Metaclass_AlarmOption_Response.__import_type_support__()


class AlarmOption(metaclass=Metaclass_AlarmOption):
    from srv_alarm_interface.srv._alarm_option import AlarmOption_Request as Request
    from srv_alarm_interface.srv._alarm_option import AlarmOption_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
