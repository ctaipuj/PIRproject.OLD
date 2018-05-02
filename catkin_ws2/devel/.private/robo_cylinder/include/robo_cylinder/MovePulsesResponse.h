// Generated by gencpp from file robo_cylinder/MovePulsesResponse.msg
// DO NOT EDIT!


#ifndef ROBO_CYLINDER_MESSAGE_MOVEPULSESRESPONSE_H
#define ROBO_CYLINDER_MESSAGE_MOVEPULSESRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robo_cylinder
{
template <class ContainerAllocator>
struct MovePulsesResponse_
{
  typedef MovePulsesResponse_<ContainerAllocator> Type;

  MovePulsesResponse_()
    : response(false)  {
    }
  MovePulsesResponse_(const ContainerAllocator& _alloc)
    : response(false)  {
  (void)_alloc;
    }



   typedef uint8_t _response_type;
  _response_type response;





  typedef boost::shared_ptr< ::robo_cylinder::MovePulsesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robo_cylinder::MovePulsesResponse_<ContainerAllocator> const> ConstPtr;

}; // struct MovePulsesResponse_

typedef ::robo_cylinder::MovePulsesResponse_<std::allocator<void> > MovePulsesResponse;

typedef boost::shared_ptr< ::robo_cylinder::MovePulsesResponse > MovePulsesResponsePtr;
typedef boost::shared_ptr< ::robo_cylinder::MovePulsesResponse const> MovePulsesResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robo_cylinder::MovePulsesResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robo_cylinder::MovePulsesResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robo_cylinder

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robo_cylinder::MovePulsesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robo_cylinder::MovePulsesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robo_cylinder::MovePulsesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robo_cylinder::MovePulsesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robo_cylinder::MovePulsesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robo_cylinder::MovePulsesResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robo_cylinder::MovePulsesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "003b81baa95ab323fc1ddf3c7d0bee81";
  }

  static const char* value(const ::robo_cylinder::MovePulsesResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x003b81baa95ab323ULL;
  static const uint64_t static_value2 = 0xfc1ddf3c7d0bee81ULL;
};

template<class ContainerAllocator>
struct DataType< ::robo_cylinder::MovePulsesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robo_cylinder/MovePulsesResponse";
  }

  static const char* value(const ::robo_cylinder::MovePulsesResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robo_cylinder::MovePulsesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool response\n\
\n\
";
  }

  static const char* value(const ::robo_cylinder::MovePulsesResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robo_cylinder::MovePulsesResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.response);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MovePulsesResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robo_cylinder::MovePulsesResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robo_cylinder::MovePulsesResponse_<ContainerAllocator>& v)
  {
    s << indent << "response: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.response);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBO_CYLINDER_MESSAGE_MOVEPULSESRESPONSE_H
