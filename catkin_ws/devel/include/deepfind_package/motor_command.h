// Generated by gencpp from file deepfind_package/motor_command.msg
// DO NOT EDIT!


#ifndef DEEPFIND_PACKAGE_MESSAGE_MOTOR_COMMAND_H
#define DEEPFIND_PACKAGE_MESSAGE_MOTOR_COMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace deepfind_package
{
template <class ContainerAllocator>
struct motor_command_
{
  typedef motor_command_<ContainerAllocator> Type;

  motor_command_()
    : leftMotorPower(0)
    , rightMotorPower(0)
    , leftMotorDirection(0)
    , rightMotorDirection(0)  {
    }
  motor_command_(const ContainerAllocator& _alloc)
    : leftMotorPower(0)
    , rightMotorPower(0)
    , leftMotorDirection(0)
    , rightMotorDirection(0)  {
  (void)_alloc;
    }



   typedef int32_t _leftMotorPower_type;
  _leftMotorPower_type leftMotorPower;

   typedef int32_t _rightMotorPower_type;
  _rightMotorPower_type rightMotorPower;

   typedef int32_t _leftMotorDirection_type;
  _leftMotorDirection_type leftMotorDirection;

   typedef int32_t _rightMotorDirection_type;
  _rightMotorDirection_type rightMotorDirection;





  typedef boost::shared_ptr< ::deepfind_package::motor_command_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::deepfind_package::motor_command_<ContainerAllocator> const> ConstPtr;

}; // struct motor_command_

typedef ::deepfind_package::motor_command_<std::allocator<void> > motor_command;

typedef boost::shared_ptr< ::deepfind_package::motor_command > motor_commandPtr;
typedef boost::shared_ptr< ::deepfind_package::motor_command const> motor_commandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::deepfind_package::motor_command_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::deepfind_package::motor_command_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace deepfind_package

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'deepfind_package': ['/home/resorte/DeepFind/catkin_ws/src/deepfind_package/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::deepfind_package::motor_command_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::deepfind_package::motor_command_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepfind_package::motor_command_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepfind_package::motor_command_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepfind_package::motor_command_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepfind_package::motor_command_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::deepfind_package::motor_command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "382ef61c60c451a76309a7978532675c";
  }

  static const char* value(const ::deepfind_package::motor_command_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x382ef61c60c451a7ULL;
  static const uint64_t static_value2 = 0x6309a7978532675cULL;
};

template<class ContainerAllocator>
struct DataType< ::deepfind_package::motor_command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "deepfind_package/motor_command";
  }

  static const char* value(const ::deepfind_package::motor_command_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::deepfind_package::motor_command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 leftMotorPower\n\
int32 rightMotorPower\n\
int32 leftMotorDirection\n\
int32 rightMotorDirection\n\
";
  }

  static const char* value(const ::deepfind_package::motor_command_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::deepfind_package::motor_command_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.leftMotorPower);
      stream.next(m.rightMotorPower);
      stream.next(m.leftMotorDirection);
      stream.next(m.rightMotorDirection);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct motor_command_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::deepfind_package::motor_command_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::deepfind_package::motor_command_<ContainerAllocator>& v)
  {
    s << indent << "leftMotorPower: ";
    Printer<int32_t>::stream(s, indent + "  ", v.leftMotorPower);
    s << indent << "rightMotorPower: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rightMotorPower);
    s << indent << "leftMotorDirection: ";
    Printer<int32_t>::stream(s, indent + "  ", v.leftMotorDirection);
    s << indent << "rightMotorDirection: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rightMotorDirection);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DEEPFIND_PACKAGE_MESSAGE_MOTOR_COMMAND_H
