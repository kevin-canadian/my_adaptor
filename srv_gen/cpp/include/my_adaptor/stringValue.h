/* Auto-generated by genmsg_cpp for file /home/r00t/ros_workspace/my_adaptor/srv/stringValue.srv */
#ifndef MY_ADAPTOR_SERVICE_STRINGVALUE_H
#define MY_ADAPTOR_SERVICE_STRINGVALUE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace my_adaptor
{
template <class ContainerAllocator>
struct stringValueRequest_ {
  typedef stringValueRequest_<ContainerAllocator> Type;

  stringValueRequest_()
  : topicName()
  {
  }

  stringValueRequest_(const ContainerAllocator& _alloc)
  : topicName(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topicName_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  topicName;


  typedef boost::shared_ptr< ::my_adaptor::stringValueRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_adaptor::stringValueRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct stringValueRequest
typedef  ::my_adaptor::stringValueRequest_<std::allocator<void> > stringValueRequest;

typedef boost::shared_ptr< ::my_adaptor::stringValueRequest> stringValueRequestPtr;
typedef boost::shared_ptr< ::my_adaptor::stringValueRequest const> stringValueRequestConstPtr;


template <class ContainerAllocator>
struct stringValueResponse_ {
  typedef stringValueResponse_<ContainerAllocator> Type;

  stringValueResponse_()
  : topicValue()
  {
  }

  stringValueResponse_(const ContainerAllocator& _alloc)
  : topicValue(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topicValue_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  topicValue;


  typedef boost::shared_ptr< ::my_adaptor::stringValueResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_adaptor::stringValueResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct stringValueResponse
typedef  ::my_adaptor::stringValueResponse_<std::allocator<void> > stringValueResponse;

typedef boost::shared_ptr< ::my_adaptor::stringValueResponse> stringValueResponsePtr;
typedef boost::shared_ptr< ::my_adaptor::stringValueResponse const> stringValueResponseConstPtr;

struct stringValue
{

typedef stringValueRequest Request;
typedef stringValueResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct stringValue
} // namespace my_adaptor

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::my_adaptor::stringValueRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::my_adaptor::stringValueRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::my_adaptor::stringValueRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "74b3306276d42621c8d9905fba018178";
  }

  static const char* value(const  ::my_adaptor::stringValueRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x74b3306276d42621ULL;
  static const uint64_t static_value2 = 0xc8d9905fba018178ULL;
};

template<class ContainerAllocator>
struct DataType< ::my_adaptor::stringValueRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "my_adaptor/stringValueRequest";
  }

  static const char* value(const  ::my_adaptor::stringValueRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::my_adaptor::stringValueRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string topicName\n\
\n\
";
  }

  static const char* value(const  ::my_adaptor::stringValueRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::my_adaptor::stringValueResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::my_adaptor::stringValueResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::my_adaptor::stringValueResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "22ae9deadd66cc2768cfd57bd2543880";
  }

  static const char* value(const  ::my_adaptor::stringValueResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x22ae9deadd66cc27ULL;
  static const uint64_t static_value2 = 0x68cfd57bd2543880ULL;
};

template<class ContainerAllocator>
struct DataType< ::my_adaptor::stringValueResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "my_adaptor/stringValueResponse";
  }

  static const char* value(const  ::my_adaptor::stringValueResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::my_adaptor::stringValueResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string topicValue\n\
\n\
\n\
";
  }

  static const char* value(const  ::my_adaptor::stringValueResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::my_adaptor::stringValueRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.topicName);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct stringValueRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::my_adaptor::stringValueResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.topicValue);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct stringValueResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<my_adaptor::stringValue> {
  static const char* value() 
  {
    return "ffd40ef407c7d58ba811620839ced3cf";
  }

  static const char* value(const my_adaptor::stringValue&) { return value(); } 
};

template<>
struct DataType<my_adaptor::stringValue> {
  static const char* value() 
  {
    return "my_adaptor/stringValue";
  }

  static const char* value(const my_adaptor::stringValue&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<my_adaptor::stringValueRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ffd40ef407c7d58ba811620839ced3cf";
  }

  static const char* value(const my_adaptor::stringValueRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<my_adaptor::stringValueRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "my_adaptor/stringValue";
  }

  static const char* value(const my_adaptor::stringValueRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<my_adaptor::stringValueResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ffd40ef407c7d58ba811620839ced3cf";
  }

  static const char* value(const my_adaptor::stringValueResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<my_adaptor::stringValueResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "my_adaptor/stringValue";
  }

  static const char* value(const my_adaptor::stringValueResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // MY_ADAPTOR_SERVICE_STRINGVALUE_H

