/* Auto-generated by genmsg_cpp for file /home/r00t/ros_workspace/my_adaptor/srv/floatValue.srv */
#ifndef MY_ADAPTOR_SERVICE_FLOATVALUE_H
#define MY_ADAPTOR_SERVICE_FLOATVALUE_H
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
struct floatValueRequest_ {
  typedef floatValueRequest_<ContainerAllocator> Type;

  floatValueRequest_()
  : topicName(0.0)
  {
  }

  floatValueRequest_(const ContainerAllocator& _alloc)
  : topicName(0.0)
  {
  }

  typedef double _topicName_type;
  double topicName;


  typedef boost::shared_ptr< ::my_adaptor::floatValueRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_adaptor::floatValueRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct floatValueRequest
typedef  ::my_adaptor::floatValueRequest_<std::allocator<void> > floatValueRequest;

typedef boost::shared_ptr< ::my_adaptor::floatValueRequest> floatValueRequestPtr;
typedef boost::shared_ptr< ::my_adaptor::floatValueRequest const> floatValueRequestConstPtr;


template <class ContainerAllocator>
struct floatValueResponse_ {
  typedef floatValueResponse_<ContainerAllocator> Type;

  floatValueResponse_()
  : topicValue(0.0)
  {
  }

  floatValueResponse_(const ContainerAllocator& _alloc)
  : topicValue(0.0)
  {
  }

  typedef double _topicValue_type;
  double topicValue;


  typedef boost::shared_ptr< ::my_adaptor::floatValueResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_adaptor::floatValueResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct floatValueResponse
typedef  ::my_adaptor::floatValueResponse_<std::allocator<void> > floatValueResponse;

typedef boost::shared_ptr< ::my_adaptor::floatValueResponse> floatValueResponsePtr;
typedef boost::shared_ptr< ::my_adaptor::floatValueResponse const> floatValueResponseConstPtr;

struct floatValue
{

typedef floatValueRequest Request;
typedef floatValueResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct floatValue
} // namespace my_adaptor

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::my_adaptor::floatValueRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::my_adaptor::floatValueRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::my_adaptor::floatValueRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c227d4349cf529b4be4678e08adc1c18";
  }

  static const char* value(const  ::my_adaptor::floatValueRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xc227d4349cf529b4ULL;
  static const uint64_t static_value2 = 0xbe4678e08adc1c18ULL;
};

template<class ContainerAllocator>
struct DataType< ::my_adaptor::floatValueRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "my_adaptor/floatValueRequest";
  }

  static const char* value(const  ::my_adaptor::floatValueRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::my_adaptor::floatValueRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 topicName\n\
\n\
";
  }

  static const char* value(const  ::my_adaptor::floatValueRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::my_adaptor::floatValueRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::my_adaptor::floatValueResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::my_adaptor::floatValueResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::my_adaptor::floatValueResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d9f398dc4b493295e20e622dec7ec153";
  }

  static const char* value(const  ::my_adaptor::floatValueResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd9f398dc4b493295ULL;
  static const uint64_t static_value2 = 0xe20e622dec7ec153ULL;
};

template<class ContainerAllocator>
struct DataType< ::my_adaptor::floatValueResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "my_adaptor/floatValueResponse";
  }

  static const char* value(const  ::my_adaptor::floatValueResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::my_adaptor::floatValueResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 topicValue\n\
\n\
\n\
";
  }

  static const char* value(const  ::my_adaptor::floatValueResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::my_adaptor::floatValueResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::my_adaptor::floatValueRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.topicName);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct floatValueRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::my_adaptor::floatValueResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.topicValue);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct floatValueResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<my_adaptor::floatValue> {
  static const char* value() 
  {
    return "8d0cfd91e471fc5abc16032475606a03";
  }

  static const char* value(const my_adaptor::floatValue&) { return value(); } 
};

template<>
struct DataType<my_adaptor::floatValue> {
  static const char* value() 
  {
    return "my_adaptor/floatValue";
  }

  static const char* value(const my_adaptor::floatValue&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<my_adaptor::floatValueRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "8d0cfd91e471fc5abc16032475606a03";
  }

  static const char* value(const my_adaptor::floatValueRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<my_adaptor::floatValueRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "my_adaptor/floatValue";
  }

  static const char* value(const my_adaptor::floatValueRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<my_adaptor::floatValueResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "8d0cfd91e471fc5abc16032475606a03";
  }

  static const char* value(const my_adaptor::floatValueResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<my_adaptor::floatValueResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "my_adaptor/floatValue";
  }

  static const char* value(const my_adaptor::floatValueResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // MY_ADAPTOR_SERVICE_FLOATVALUE_H

