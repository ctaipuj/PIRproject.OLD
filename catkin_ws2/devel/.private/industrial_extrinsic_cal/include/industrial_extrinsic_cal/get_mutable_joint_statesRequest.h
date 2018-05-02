// Generated by gencpp from file industrial_extrinsic_cal/get_mutable_joint_statesRequest.msg
// DO NOT EDIT!


#ifndef INDUSTRIAL_EXTRINSIC_CAL_MESSAGE_GET_MUTABLE_JOINT_STATESREQUEST_H
#define INDUSTRIAL_EXTRINSIC_CAL_MESSAGE_GET_MUTABLE_JOINT_STATESREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace industrial_extrinsic_cal
{
template <class ContainerAllocator>
struct get_mutable_joint_statesRequest_
{
  typedef get_mutable_joint_statesRequest_<ContainerAllocator> Type;

  get_mutable_joint_statesRequest_()
    : joint_names()  {
    }
  get_mutable_joint_statesRequest_(const ContainerAllocator& _alloc)
    : joint_names(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _joint_names_type;
  _joint_names_type joint_names;





  typedef boost::shared_ptr< ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct get_mutable_joint_statesRequest_

typedef ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<std::allocator<void> > get_mutable_joint_statesRequest;

typedef boost::shared_ptr< ::industrial_extrinsic_cal::get_mutable_joint_statesRequest > get_mutable_joint_statesRequestPtr;
typedef boost::shared_ptr< ::industrial_extrinsic_cal::get_mutable_joint_statesRequest const> get_mutable_joint_statesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace industrial_extrinsic_cal

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'industrial_extrinsic_cal': ['/home/ctai/catkin_ws2/devel/.private/industrial_extrinsic_cal/share/industrial_extrinsic_cal/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "587f4b1b8847cbdf153605e9cf8ebaed";
  }

  static const char* value(const ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x587f4b1b8847cbdfULL;
  static const uint64_t static_value2 = 0x153605e9cf8ebaedULL;
};

template<class ContainerAllocator>
struct DataType< ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "industrial_extrinsic_cal/get_mutable_joint_statesRequest";
  }

  static const char* value(const ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] joint_names\n\
";
  }

  static const char* value(const ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_names);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct get_mutable_joint_statesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::industrial_extrinsic_cal::get_mutable_joint_statesRequest_<ContainerAllocator>& v)
  {
    s << indent << "joint_names[]" << std::endl;
    for (size_t i = 0; i < v.joint_names.size(); ++i)
    {
      s << indent << "  joint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_names[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // INDUSTRIAL_EXTRINSIC_CAL_MESSAGE_GET_MUTABLE_JOINT_STATESREQUEST_H
