// Generated by gencpp from file jetbot/Mag.msg
// DO NOT EDIT!


#ifndef JETBOT_MESSAGE_MAG_H
#define JETBOT_MESSAGE_MAG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace jetbot
{
template <class ContainerAllocator>
struct Mag_
{
  typedef Mag_<ContainerAllocator> Type;

  Mag_()
    : frame_id(0)
    , mx(0)
    , my(0)
    , mz(0)  {
    }
  Mag_(const ContainerAllocator& _alloc)
    : frame_id(0)
    , mx(0)
    , my(0)
    , mz(0)  {
  (void)_alloc;
    }



   typedef uint32_t _frame_id_type;
  _frame_id_type frame_id;

   typedef int16_t _mx_type;
  _mx_type mx;

   typedef int16_t _my_type;
  _my_type my;

   typedef int16_t _mz_type;
  _mz_type mz;




  typedef boost::shared_ptr< ::jetbot::Mag_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jetbot::Mag_<ContainerAllocator> const> ConstPtr;

}; // struct Mag_

typedef ::jetbot::Mag_<std::allocator<void> > Mag;

typedef boost::shared_ptr< ::jetbot::Mag > MagPtr;
typedef boost::shared_ptr< ::jetbot::Mag const> MagConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jetbot::Mag_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jetbot::Mag_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::jetbot::Mag_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jetbot::Mag_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetbot::Mag_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetbot::Mag_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetbot::Mag_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetbot::Mag_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jetbot::Mag_<ContainerAllocator> >
{
  static const char* value()
  {
    return "090022d6084392a110ec2c9910142e0e";
  }

  static const char* value(const ::jetbot::Mag_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x090022d6084392a1ULL;
  static const uint64_t static_value2 = 0x10ec2c9910142e0eULL;
};

template<class ContainerAllocator>
struct DataType< ::jetbot::Mag_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jetbot/Mag";
  }

  static const char* value(const ::jetbot::Mag_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jetbot::Mag_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 frame_id\n\
int16 mx\n\
int16 my\n\
int16 mz\n\
";
  }

  static const char* value(const ::jetbot::Mag_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jetbot::Mag_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.frame_id);
      stream.next(m.mx);
      stream.next(m.my);
      stream.next(m.mz);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Mag_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jetbot::Mag_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jetbot::Mag_<ContainerAllocator>& v)
  {
    s << indent << "frame_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.frame_id);
    s << indent << "mx: ";
    Printer<int16_t>::stream(s, indent + "  ", v.mx);
    s << indent << "my: ";
    Printer<int16_t>::stream(s, indent + "  ", v.my);
    s << indent << "mz: ";
    Printer<int16_t>::stream(s, indent + "  ", v.mz);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JETBOT_MESSAGE_MAG_H
