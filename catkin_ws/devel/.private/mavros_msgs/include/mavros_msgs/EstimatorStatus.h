// Generated by gencpp from file mavros_msgs/EstimatorStatus.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_ESTIMATORSTATUS_H
#define MAVROS_MSGS_MESSAGE_ESTIMATORSTATUS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct EstimatorStatus_
{
  typedef EstimatorStatus_<ContainerAllocator> Type;

  EstimatorStatus_()
    : header()
    , attitude_status_flag(false)
    , velocity_horiz_status_flag(false)
    , velocity_vert_status_flag(false)
    , pos_horiz_rel_status_flag(false)
    , pos_horiz_abs_status_flag(false)
    , pos_vert_abs_status_flag(false)
    , pos_vert_agl_status_flag(false)
    , const_pos_mode_status_flag(false)
    , pred_pos_horiz_rel_status_flag(false)
    , pred_pos_horiz_abs_status_flag(false)
    , gps_glitch_status_flag(false)
    , accel_error_status_flag(false)  {
    }
  EstimatorStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , attitude_status_flag(false)
    , velocity_horiz_status_flag(false)
    , velocity_vert_status_flag(false)
    , pos_horiz_rel_status_flag(false)
    , pos_horiz_abs_status_flag(false)
    , pos_vert_abs_status_flag(false)
    , pos_vert_agl_status_flag(false)
    , const_pos_mode_status_flag(false)
    , pred_pos_horiz_rel_status_flag(false)
    , pred_pos_horiz_abs_status_flag(false)
    , gps_glitch_status_flag(false)
    , accel_error_status_flag(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _attitude_status_flag_type;
  _attitude_status_flag_type attitude_status_flag;

   typedef uint8_t _velocity_horiz_status_flag_type;
  _velocity_horiz_status_flag_type velocity_horiz_status_flag;

   typedef uint8_t _velocity_vert_status_flag_type;
  _velocity_vert_status_flag_type velocity_vert_status_flag;

   typedef uint8_t _pos_horiz_rel_status_flag_type;
  _pos_horiz_rel_status_flag_type pos_horiz_rel_status_flag;

   typedef uint8_t _pos_horiz_abs_status_flag_type;
  _pos_horiz_abs_status_flag_type pos_horiz_abs_status_flag;

   typedef uint8_t _pos_vert_abs_status_flag_type;
  _pos_vert_abs_status_flag_type pos_vert_abs_status_flag;

   typedef uint8_t _pos_vert_agl_status_flag_type;
  _pos_vert_agl_status_flag_type pos_vert_agl_status_flag;

   typedef uint8_t _const_pos_mode_status_flag_type;
  _const_pos_mode_status_flag_type const_pos_mode_status_flag;

   typedef uint8_t _pred_pos_horiz_rel_status_flag_type;
  _pred_pos_horiz_rel_status_flag_type pred_pos_horiz_rel_status_flag;

   typedef uint8_t _pred_pos_horiz_abs_status_flag_type;
  _pred_pos_horiz_abs_status_flag_type pred_pos_horiz_abs_status_flag;

   typedef uint8_t _gps_glitch_status_flag_type;
  _gps_glitch_status_flag_type gps_glitch_status_flag;

   typedef uint8_t _accel_error_status_flag_type;
  _accel_error_status_flag_type accel_error_status_flag;





  typedef boost::shared_ptr< ::mavros_msgs::EstimatorStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::EstimatorStatus_<ContainerAllocator> const> ConstPtr;

}; // struct EstimatorStatus_

typedef ::mavros_msgs::EstimatorStatus_<std::allocator<void> > EstimatorStatus;

typedef boost::shared_ptr< ::mavros_msgs::EstimatorStatus > EstimatorStatusPtr;
typedef boost::shared_ptr< ::mavros_msgs::EstimatorStatus const> EstimatorStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::EstimatorStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::EstimatorStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::EstimatorStatus_<ContainerAllocator1> & lhs, const ::mavros_msgs::EstimatorStatus_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.attitude_status_flag == rhs.attitude_status_flag &&
    lhs.velocity_horiz_status_flag == rhs.velocity_horiz_status_flag &&
    lhs.velocity_vert_status_flag == rhs.velocity_vert_status_flag &&
    lhs.pos_horiz_rel_status_flag == rhs.pos_horiz_rel_status_flag &&
    lhs.pos_horiz_abs_status_flag == rhs.pos_horiz_abs_status_flag &&
    lhs.pos_vert_abs_status_flag == rhs.pos_vert_abs_status_flag &&
    lhs.pos_vert_agl_status_flag == rhs.pos_vert_agl_status_flag &&
    lhs.const_pos_mode_status_flag == rhs.const_pos_mode_status_flag &&
    lhs.pred_pos_horiz_rel_status_flag == rhs.pred_pos_horiz_rel_status_flag &&
    lhs.pred_pos_horiz_abs_status_flag == rhs.pred_pos_horiz_abs_status_flag &&
    lhs.gps_glitch_status_flag == rhs.gps_glitch_status_flag &&
    lhs.accel_error_status_flag == rhs.accel_error_status_flag;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::EstimatorStatus_<ContainerAllocator1> & lhs, const ::mavros_msgs::EstimatorStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::EstimatorStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::EstimatorStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::EstimatorStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::EstimatorStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::EstimatorStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::EstimatorStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::EstimatorStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "39dbcc4be3f04b68422f784827c47dd5";
  }

  static const char* value(const ::mavros_msgs::EstimatorStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x39dbcc4be3f04b68ULL;
  static const uint64_t static_value2 = 0x422f784827c47dd5ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::EstimatorStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/EstimatorStatus";
  }

  static const char* value(const ::mavros_msgs::EstimatorStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::EstimatorStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Current autopilot estimator state\n"
"#\n"
"# https://mavlink.io/en/messages/common.html#ESTIMATOR_STATUS_FLAGS\n"
"\n"
"std_msgs/Header header\n"
"bool attitude_status_flag\n"
"\n"
"bool velocity_horiz_status_flag\n"
"bool velocity_vert_status_flag\n"
"\n"
"bool pos_horiz_rel_status_flag\n"
"bool pos_horiz_abs_status_flag\n"
"\n"
"bool pos_vert_abs_status_flag\n"
"bool pos_vert_agl_status_flag\n"
"\n"
"bool const_pos_mode_status_flag\n"
"\n"
"bool pred_pos_horiz_rel_status_flag\n"
"bool pred_pos_horiz_abs_status_flag\n"
"\n"
"bool gps_glitch_status_flag\n"
"bool accel_error_status_flag\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::mavros_msgs::EstimatorStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::EstimatorStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.attitude_status_flag);
      stream.next(m.velocity_horiz_status_flag);
      stream.next(m.velocity_vert_status_flag);
      stream.next(m.pos_horiz_rel_status_flag);
      stream.next(m.pos_horiz_abs_status_flag);
      stream.next(m.pos_vert_abs_status_flag);
      stream.next(m.pos_vert_agl_status_flag);
      stream.next(m.const_pos_mode_status_flag);
      stream.next(m.pred_pos_horiz_rel_status_flag);
      stream.next(m.pred_pos_horiz_abs_status_flag);
      stream.next(m.gps_glitch_status_flag);
      stream.next(m.accel_error_status_flag);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EstimatorStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::EstimatorStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::EstimatorStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "attitude_status_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.attitude_status_flag);
    s << indent << "velocity_horiz_status_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.velocity_horiz_status_flag);
    s << indent << "velocity_vert_status_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.velocity_vert_status_flag);
    s << indent << "pos_horiz_rel_status_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pos_horiz_rel_status_flag);
    s << indent << "pos_horiz_abs_status_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pos_horiz_abs_status_flag);
    s << indent << "pos_vert_abs_status_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pos_vert_abs_status_flag);
    s << indent << "pos_vert_agl_status_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pos_vert_agl_status_flag);
    s << indent << "const_pos_mode_status_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.const_pos_mode_status_flag);
    s << indent << "pred_pos_horiz_rel_status_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pred_pos_horiz_rel_status_flag);
    s << indent << "pred_pos_horiz_abs_status_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pred_pos_horiz_abs_status_flag);
    s << indent << "gps_glitch_status_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gps_glitch_status_flag);
    s << indent << "accel_error_status_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.accel_error_status_flag);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_ESTIMATORSTATUS_H
