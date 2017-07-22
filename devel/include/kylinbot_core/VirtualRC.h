// Generated by gencpp from file kylinbot_core/VirtualRC.msg
// DO NOT EDIT!


#ifndef KYLINBOT_CORE_MESSAGE_VIRTUALRC_H
#define KYLINBOT_CORE_MESSAGE_VIRTUALRC_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kylinbot_core
{
template <class ContainerAllocator>
struct VirtualRC_
{
  typedef VirtualRC_<ContainerAllocator> Type;

  VirtualRC_()
    : frame_id(0)
    , data()  {
      data.assign(0);
  }
  VirtualRC_(const ContainerAllocator& _alloc)
    : frame_id(0)
    , data()  {
  (void)_alloc;
      data.assign(0);
  }



   typedef uint32_t _frame_id_type;
  _frame_id_type frame_id;

   typedef boost::array<uint8_t, 6>  _data_type;
  _data_type data;




  typedef boost::shared_ptr< ::kylinbot_core::VirtualRC_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kylinbot_core::VirtualRC_<ContainerAllocator> const> ConstPtr;

}; // struct VirtualRC_

typedef ::kylinbot_core::VirtualRC_<std::allocator<void> > VirtualRC;

typedef boost::shared_ptr< ::kylinbot_core::VirtualRC > VirtualRCPtr;
typedef boost::shared_ptr< ::kylinbot_core::VirtualRC const> VirtualRCConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kylinbot_core::VirtualRC_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kylinbot_core::VirtualRC_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace kylinbot_core

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'kylinbot_core': ['/home/bj/workspace/ros/auto_car_bak/src/kylinbot_core/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::kylinbot_core::VirtualRC_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kylinbot_core::VirtualRC_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kylinbot_core::VirtualRC_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kylinbot_core::VirtualRC_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kylinbot_core::VirtualRC_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kylinbot_core::VirtualRC_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kylinbot_core::VirtualRC_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a2b2bda6c2cf9e9e80fa2e50b4c2f75c";
  }

  static const char* value(const ::kylinbot_core::VirtualRC_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa2b2bda6c2cf9e9eULL;
  static const uint64_t static_value2 = 0x80fa2e50b4c2f75cULL;
};

template<class ContainerAllocator>
struct DataType< ::kylinbot_core::VirtualRC_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kylinbot_core/VirtualRC";
  }

  static const char* value(const ::kylinbot_core::VirtualRC_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kylinbot_core::VirtualRC_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 frame_id\n\
uint8[6] data\n\
";
  }

  static const char* value(const ::kylinbot_core::VirtualRC_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kylinbot_core::VirtualRC_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.frame_id);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VirtualRC_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kylinbot_core::VirtualRC_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kylinbot_core::VirtualRC_<ContainerAllocator>& v)
  {
    s << indent << "frame_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.frame_id);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KYLINBOT_CORE_MESSAGE_VIRTUALRC_H