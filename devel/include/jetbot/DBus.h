// Generated by gencpp from file jetbot/DBus.msg
// DO NOT EDIT!


#ifndef JETBOT_MESSAGE_DBUS_H
#define JETBOT_MESSAGE_DBUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <jetbot/Rcp.h>
#include <jetbot/Hcp.h>

namespace jetbot
{
template <class ContainerAllocator>
struct DBus_
{
  typedef DBus_<ContainerAllocator> Type;

  DBus_()
    : rcp()
    , hcp()  {
    }
  DBus_(const ContainerAllocator& _alloc)
    : rcp(_alloc)
    , hcp(_alloc)  {
  (void)_alloc;
    }



   typedef  ::jetbot::Rcp_<ContainerAllocator>  _rcp_type;
  _rcp_type rcp;

   typedef  ::jetbot::Hcp_<ContainerAllocator>  _hcp_type;
  _hcp_type hcp;




  typedef boost::shared_ptr< ::jetbot::DBus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jetbot::DBus_<ContainerAllocator> const> ConstPtr;

}; // struct DBus_

typedef ::jetbot::DBus_<std::allocator<void> > DBus;

typedef boost::shared_ptr< ::jetbot::DBus > DBusPtr;
typedef boost::shared_ptr< ::jetbot::DBus const> DBusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jetbot::DBus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jetbot::DBus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace jetbot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'jetbot': ['/home/bj/workspace/ros/car_ros/src/jetbot/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::jetbot::DBus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jetbot::DBus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetbot::DBus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetbot::DBus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetbot::DBus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetbot::DBus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jetbot::DBus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8afdad0d004f8088d4c832bf9a170a35";
  }

  static const char* value(const ::jetbot::DBus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8afdad0d004f8088ULL;
  static const uint64_t static_value2 = 0xd4c832bf9a170a35ULL;
};

template<class ContainerAllocator>
struct DataType< ::jetbot::DBus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jetbot/DBus";
  }

  static const char* value(const ::jetbot::DBus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jetbot::DBus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Rcp rcp\n\
Hcp hcp\n\
================================================================================\n\
MSG: jetbot/Rcp\n\
uint16 ch1\n\
uint16 ch2\n\
uint16 ch3\n\
uint16 ch4\n\
uint8 sw1\n\
uint8 sw2\n\
================================================================================\n\
MSG: jetbot/Hcp\n\
int16 mouse_speed_x\n\
int16 mouse_speed_y\n\
int16 mouse_speed_z\n\
uint8 mouse_button_left\n\
uint8 mouse_button_right\n\
uint16 key\n\
uint16 res\n\
";
  }

  static const char* value(const ::jetbot::DBus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jetbot::DBus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rcp);
      stream.next(m.hcp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DBus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jetbot::DBus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jetbot::DBus_<ContainerAllocator>& v)
  {
    s << indent << "rcp: ";
    s << std::endl;
    Printer< ::jetbot::Rcp_<ContainerAllocator> >::stream(s, indent + "  ", v.rcp);
    s << indent << "hcp: ";
    s << std::endl;
    Printer< ::jetbot::Hcp_<ContainerAllocator> >::stream(s, indent + "  ", v.hcp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JETBOT_MESSAGE_DBUS_H
