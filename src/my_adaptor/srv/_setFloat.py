"""autogenerated by genpy from my_adaptor/setFloatRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class setFloatRequest(genpy.Message):
  _md5sum = "b1ab60507dc5afd1d1e54139f9ee670c"
  _type = "my_adaptor/setFloatRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """string topicName
float64 newValue

"""
  __slots__ = ['topicName','newValue']
  _slot_types = ['string','float64']

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
      super(setFloatRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.topicName is None:
        self.topicName = ''
      if self.newValue is None:
        self.newValue = 0.
    else:
      self.topicName = ''
      self.newValue = 0.

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
      buff.write(_struct_d.pack(self.newValue))
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
      end += 8
      (self.newValue,) = _struct_d.unpack(str[start:end])
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
      buff.write(_struct_d.pack(self.newValue))
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
      end += 8
      (self.newValue,) = _struct_d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_d = struct.Struct("<d")
"""autogenerated by genpy from my_adaptor/setFloatResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class setFloatResponse(genpy.Message):
  _md5sum = "ba18d35a4d3cea370e755997f303d718"
  _type = "my_adaptor/setFloatResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float64 setAnswer


"""
  __slots__ = ['setAnswer']
  _slot_types = ['float64']

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
      super(setFloatResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.setAnswer is None:
        self.setAnswer = 0.
    else:
      self.setAnswer = 0.

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
      buff.write(_struct_d.pack(self.setAnswer))
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
      end += 8
      (self.setAnswer,) = _struct_d.unpack(str[start:end])
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
      buff.write(_struct_d.pack(self.setAnswer))
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
      end += 8
      (self.setAnswer,) = _struct_d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_d = struct.Struct("<d")
class setFloat(object):
  _type          = 'my_adaptor/setFloat'
  _md5sum = '534d71573526d91e225c2160dfe4b29d'
  _request_class  = setFloatRequest
  _response_class = setFloatResponse
