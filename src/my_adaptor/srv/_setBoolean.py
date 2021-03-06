"""autogenerated by genpy from my_adaptor/setBooleanRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class setBooleanRequest(genpy.Message):
  _md5sum = "ea7f36159508c763698feeeea10ee2bc"
  _type = "my_adaptor/setBooleanRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """string topicName
bool newValue

"""
  __slots__ = ['topicName','newValue']
  _slot_types = ['string','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       topicName,newValue

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(setBooleanRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.topicName is None:
        self.topicName = ''
      if self.newValue is None:
        self.newValue = False
    else:
      self.topicName = ''
      self.newValue = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.topicName
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_struct_B.pack(self.newValue))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.topicName = str[start:end].decode('utf-8')
      else:
        self.topicName = str[start:end]
      start = end
      end += 1
      (self.newValue,) = _struct_B.unpack(str[start:end])
      self.newValue = bool(self.newValue)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.topicName
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_struct_B.pack(self.newValue))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.topicName = str[start:end].decode('utf-8')
      else:
        self.topicName = str[start:end]
      start = end
      end += 1
      (self.newValue,) = _struct_B.unpack(str[start:end])
      self.newValue = bool(self.newValue)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_B = struct.Struct("<B")
"""autogenerated by genpy from my_adaptor/setBooleanResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class setBooleanResponse(genpy.Message):
  _md5sum = "e630a2f2cea41edbedb990c35c6910ef"
  _type = "my_adaptor/setBooleanResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool setAnswer


"""
  __slots__ = ['setAnswer']
  _slot_types = ['bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       setAnswer

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(setBooleanResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.setAnswer is None:
        self.setAnswer = False
    else:
      self.setAnswer = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_struct_B.pack(self.setAnswer))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 1
      (self.setAnswer,) = _struct_B.unpack(str[start:end])
      self.setAnswer = bool(self.setAnswer)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_struct_B.pack(self.setAnswer))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 1
      (self.setAnswer,) = _struct_B.unpack(str[start:end])
      self.setAnswer = bool(self.setAnswer)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_B = struct.Struct("<B")
class setBoolean(object):
  _type          = 'my_adaptor/setBoolean'
  _md5sum = 'fde587b1db6e33328e50f2ea2c9e870b'
  _request_class  = setBooleanRequest
  _response_class = setBooleanResponse
