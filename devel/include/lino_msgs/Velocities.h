// Generated by gencpp from file lino_msgs/Velocities.msg
// DO NOT EDIT!


#ifndef LINO_MSGS_MESSAGE_VELOCITIES_H
#define LINO_MSGS_MESSAGE_VELOCITIES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace lino_msgs
{
template <class ContainerAllocator>
struct Velocities_
{
  typedef Velocities_<ContainerAllocator> Type;

  Velocities_()
    : linear_x(0.0)
    , linear_y(0.0)
    , angular_z(0.0)  {
    }
  Velocities_(const ContainerAllocator& _alloc)
    : linear_x(0.0)
    , linear_y(0.0)
    , angular_z(0.0)  {
  (void)_alloc;
    }



   typedef float _linear_x_type;
  _linear_x_type linear_x;

   typedef float _linear_y_type;
  _linear_y_type linear_y;

   typedef float _angular_z_type;
  _angular_z_type angular_z;





  typedef boost::shared_ptr< ::lino_msgs::Velocities_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lino_msgs::Velocities_<ContainerAllocator> const> ConstPtr;

}; // struct Velocities_

typedef ::lino_msgs::Velocities_<std::allocator<void> > Velocities;

typedef boost::shared_ptr< ::lino_msgs::Velocities > VelocitiesPtr;
typedef boost::shared_ptr< ::lino_msgs::Velocities const> VelocitiesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lino_msgs::Velocities_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lino_msgs::Velocities_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace lino_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'lino_msgs': ['/home/chengyangkj/catkin_ws/src/lino_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::lino_msgs::Velocities_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lino_msgs::Velocities_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lino_msgs::Velocities_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lino_msgs::Velocities_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lino_msgs::Velocities_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lino_msgs::Velocities_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lino_msgs::Velocities_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0ee8ad4cb7809be2d5a0a76352fea86a";
  }

  static const char* value(const ::lino_msgs::Velocities_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0ee8ad4cb7809be2ULL;
  static const uint64_t static_value2 = 0xd5a0a76352fea86aULL;
};

template<class ContainerAllocator>
struct DataType< ::lino_msgs::Velocities_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lino_msgs/Velocities";
  }

  static const char* value(const ::lino_msgs::Velocities_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lino_msgs::Velocities_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"float32 linear_x\n"
"float32 linear_y\n"
"float32 angular_z\n"
;
  }

  static const char* value(const ::lino_msgs::Velocities_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lino_msgs::Velocities_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.linear_x);
      stream.next(m.linear_y);
      stream.next(m.angular_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Velocities_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lino_msgs::Velocities_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lino_msgs::Velocities_<ContainerAllocator>& v)
  {
    s << indent << "linear_x: ";
    Printer<float>::stream(s, indent + "  ", v.linear_x);
    s << indent << "linear_y: ";
    Printer<float>::stream(s, indent + "  ", v.linear_y);
    s << indent << "angular_z: ";
    Printer<float>::stream(s, indent + "  ", v.angular_z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LINO_MSGS_MESSAGE_VELOCITIES_H
