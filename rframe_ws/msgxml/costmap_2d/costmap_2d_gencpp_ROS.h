// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2017-01-26 12:56:51 -0500
//  From Template/Script: data_templates/ROSTemplate.h.rb
 
/*
  CTA RIGHTS

  This document contains information proprietary to General Dynamics
  Robotic Systems and is not to be reproduced, transmitted, transferred,
  or otherwise used without the express written consent of General
  Dynamics Robotic Systems except as described below.

  GOVERNMENT PURPOSE RIGHTS

  Contract No.:        W911NF-10-2-0016, Articles of Collaboration,
                       Article 5, Intellectual Property
  Contractor Name:     General Dynamics Robotic Systems, Inc. (GDRS)
  Contractor Address:  1231 Tech Court, Westminster, MD  21157

  Expiration Date - None

  Technical data and computer software first created by Member(s) in
  performance of the Agreement will be disclosed to the Government.
  General Dynamics Robotic Systems retains the entire right, title, and
  interest throughout the world to each subject invention subject to the
  provisions of this clause and 37 CFR Part 401, 32 CFR 32.36, and
  34 CFR 34.25. The Government shall have the right to obtain, reproduce,
  publish or otherwise use the work for Government purposes.

  NON-EXCLUSIVE LICENSE TO CONSORTIUM PARTICIPANTS
  Consortium Members and subawardees are defined as 'Participants'
  Under Article 5.3, Participants are granted a nonexclusive, royalty-
  free, non-sublicenseable, non-assignable, license to Consortium
  Intellectual Property for the limited purpose of performing tasks under
  The Cooperative Agreement, for Government purposes only, and to make and
  have the same made solely for such use.

*/

#ifndef _CODEGEN_COSTMAP_2D_GENCPP_ROS_H_
#define _CODEGEN_COSTMAP_2D_GENCPP_ROS_H_

#include <opensource/ros/serialization.h>
#include <opensource/ros/message_traits.h>
#include <opensource/ros/message_operations.h>

#include <messaging/ros/ROSMessageFactory.h>
#include <messaging/Message.h>

namespace rframe { class DataTypeInfo; };

#include "costmap_2d_gencpp_Library.h"

#include "geometry_msgs/geometry_msgs_gencpp_ROS.h"
#include "std_msgs/std_msgs_gencpp_ROS.h"
#include "std_srvs/std_srvs_gencpp_ROS.h"

namespace costmap_2d { 

    /** definition of message factory for costmap_2d_gencpp */
    class costmap_2d_gencppROSMessageFactory : public ROSMessageFactory
    {
    public:
        /** constructor */
        costmap_2d_gencppROSMessageFactory();
        /** destructor */
        virtual ~costmap_2d_gencppROSMessageFactory();

        /** see  rframe::MessageFactoryInterface */
        virtual void dataTypes(std::vector<DataTypeInfo> & ids);
        /** see  rframe::MessageFactoryInterface */
        virtual int dataType(ros::SerializedMessage & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int allocate(rframe::ID_TYPE id, std::shared_ptr<ros::SerializedMessage> & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int deallocateTransport(ros::SerializedMessage * msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int allocate(rframe::ID_TYPE id, std::shared_ptr<MessageBase> & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int deallocateMessage(MessageBase * msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int toTransport( MessageBase & src, ros::SerializedMessage & dst);
        /** see  rframe::MessageFactoryInterface */
        virtual int fromTransport( ros::SerializedMessage & src, MessageBase & dst);

		/** see rframe::ROSMessageFactory */
        virtual int typeName(std::string & str, rframe::ID_TYPE id);
		/** see rframe::ROSMessageFactory */
        virtual int desc(std::string & str, rframe::ID_TYPE id);
		/** see rframe::ROSMessageFactory */
        virtual int md5String(std::string & str, rframe::ID_TYPE id);
        /** see rframe::ROSMessageFactory */
        virtual int md5(unsigned long long & highOrder, unsigned long long & lowOrder, rframe::ID_TYPE id);
        /** see rframe::ROSMessageFactory */
		int updateHeader(rframe::MessageBase &msg, unsigned int seqNo);
    };

    /** factory allocation function for use when not dynamically loading the factory library  */
    ROSMessageFactory * allocate_costmap_2d_gencpp();

}; // end namespace costmap_2d

// declare ros serialization templates
namespace ros
{
  namespace serialization
  {  

      template <> struct Serializer<costmap_2d::VoxelGrid>
      {
          template <typename Stream> inline static void write(Stream & stream, const costmap_2d::VoxelGrid & t)
          { 
              stream.next(t.header); 
              stream.next(t.data); 
              stream.next(t.origin); 
              stream.next(t.resolutions); 
              stream.next(t.size_x); 
              stream.next(t.size_y); 
              stream.next(t.size_z); 
          };

          template <typename Stream> inline static void read(Stream & stream, costmap_2d::VoxelGrid & t)
          { 
              stream.next(t.header); 
              stream.next(t.data); 
              stream.next(t.origin); 
              stream.next(t.resolutions); 
              stream.next(t.size_x); 
              stream.next(t.size_y); 
              stream.next(t.size_z); 
          };

          inline static uint32_t serializedLength(const costmap_2d::VoxelGrid & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.header); 
              size += serializationLength(t.data); 
              size += serializationLength(t.origin); 
              size += serializationLength(t.resolutions); 
              size += serializationLength(t.size_x); 
              size += serializationLength(t.size_y); 
              size += serializationLength(t.size_z); 
              return size;
          };
      }; // end struct Serializer<costmap_2d::VoxelGrid>

  }; // namespace serialization

  namespace message_traits
  {

      template <> struct MD5Sum<costmap_2d::VoxelGrid>
      {

          static const char * value() 
          { 
              return "48a040827e1322073d78ece5a497029c"; 
          };

          static const uint64_t static_value1 = 0x48a040827e132207ULL;
          static const uint64_t static_value2 = 0x3d78ece5a497029cULL;
      }; // end struct MD5Sum<costmap_2d::VoxelGrid>

      template <> struct DataType<costmap_2d::VoxelGrid>
      {
          static const char * value() { return "costmap_2d/VoxelGrid";};
      }; // end DataType

      template <> struct Definition<costmap_2d::VoxelGrid>
      {
          static const char * value()
          { 
              return "Header header\nuint32[] data\ngeometry_msgs/Point32 origin\ngeometry_msgs/Vector3 resolutions\nuint32 size_x\nuint32 size_y\nuint32 size_z\n\n\n================================================================================\nMSG: std_msgs/Header\n# Standard metadata for higher-level stamped data types.\n# This is generally used to communicate timestamped data \n# in a particular coordinate frame.\n# \n# sequence ID: consecutively increasing ID \nuint32 seq\n#Two-integer timestamp that is expressed as:\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n# time-handling sugar is provided by the client library\ntime stamp\n#Frame this data is associated with\n# 0: no frame\n# 1: global frame\nstring frame_id\n\n================================================================================\nMSG: geometry_msgs/Point32\n# This contains the position of a point in free space(with 32 bits of precision).\n# It is recommeded to use Point wherever possible instead of Point32.  \n# \n# This recommendation is to promote interoperability.  \n#\n# This message is designed to take up less space when sending\n# lots of points at once, as in the case of a PointCloud.  \n\nfloat32 x\nfloat32 y\nfloat32 z\n================================================================================\nMSG: geometry_msgs/Vector3\n# This represents a vector in free space. \n# It is only meant to represent a direction. Therefore, it does not\n# make sense to apply a translation to it (e.g., when applying a \n# generic rigid transformation to a Vector3, tf2 will only apply the\n# rotation). If you want your data to be translatable too, use the\n# geometry_msgs/Point message instead.\n\nfloat64 x\nfloat64 y\n";
          };
      };

  }; // end namespace message_traits

}; // namespace ros

#endif // _CODEGEN_COSTMAP_2D_GENCPP_ROS_H_

