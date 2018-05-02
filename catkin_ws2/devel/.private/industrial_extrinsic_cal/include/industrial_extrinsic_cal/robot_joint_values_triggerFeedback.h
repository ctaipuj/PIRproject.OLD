// Generated by gencpp from file industrial_extrinsic_cal/robot_joint_values_triggerFeedback.msg
// DO NOT EDIT!


#ifndef INDUSTRIAL_EXTRINSIC_CAL_MESSAGE_ROBOT_JOINT_VALUES_TRIGGERFEEDBACK_H
#define INDUSTRIAL_EXTRINSIC_CAL_MESSAGE_ROBOT_JOINT_VALUES_TRIGGERFEEDBACK_H


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
struct robot_joint_values_triggerFeedback_
{
  typedef robot_joint_values_triggerFeedback_<ContainerAllocator> Type;

  robot_joint_values_triggerFeedback_()
    : percent_complete(0.0)  {
    }
  robot_joint_values_triggerFeedback_(const ContainerAllocator& _alloc)
    : percent_complete(0.0)  {
  (void)_alloc;
    }



   typedef float _percent_complete_type;
  _percent_complete_type percent_complete;





  typedef boost::shared_ptr< ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct robot_joint_values_triggerFeedback_

typedef ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<std::allocator<void> > robot_joint_values_triggerFeedback;

typedef boost::shared_ptr< ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback > robot_joint_values_triggerFeedbackPtr;
typedef boost::shared_ptr< ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback const> robot_joint_values_triggerFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace industrial_extrinsic_cal

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'industrial_extrinsic_cal': ['/home/ctai/catkin_ws2/devel/.private/industrial_extrinsic_cal/share/industrial_extrinsic_cal/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d342375c60a5a58d3bc32664070a1368";
  }

  static const char* value(const ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd342375c60a5a58dULL;
  static const uint64_t static_value2 = 0x3bc32664070a1368ULL;
};

template<class ContainerAllocator>
struct DataType< ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "industrial_extrinsic_cal/robot_joint_values_triggerFeedback";
  }

  static const char* value(const ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define a feedback message\n\
float32 percent_complete\n\
";
  }

  static const char* value(const ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.percent_complete);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct robot_joint_values_triggerFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::industrial_extrinsic_cal::robot_joint_values_triggerFeedback_<ContainerAllocator>& v)
  {
    s << indent << "percent_complete: ";
    Printer<float>::stream(s, indent + "  ", v.percent_complete);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INDUSTRIAL_EXTRINSIC_CAL_MESSAGE_ROBOT_JOINT_VALUES_TRIGGERFEEDBACK_H
