// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:53 -0500
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

#ifndef _CODEGEN_ROSPY_TUTORIALS_GENCPP_ROS_H_
#define _CODEGEN_ROSPY_TUTORIALS_GENCPP_ROS_H_

#include <opensource/ros/serialization.h>
#include <opensource/ros/message_traits.h>
#include <opensource/ros/message_operations.h>

#include <messaging/ros/ROSMessageFactory.h>
#include <messaging/Message.h>

namespace rframe { class DataTypeInfo; };

#include "rospy_tutorials_gencpp_Library.h"

#include "std_msgs/std_msgs_gencpp_ROS.h"
#include "std_srvs/std_srvs_gencpp_ROS.h"

namespace rospy_tutorials { 

    /** definition of message factory for rospy_tutorials_gencpp */
    class rospy_tutorials_gencppROSMessageFactory : public ROSMessageFactory
    {
    public:
        /** constructor */
        rospy_tutorials_gencppROSMessageFactory();
        /** destructor */
        virtual ~rospy_tutorials_gencppROSMessageFactory();

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
    ROSMessageFactory * allocate_rospy_tutorials_gencpp();

}; // end namespace rospy_tutorials

// declare ros serialization templates
namespace ros
{
  namespace serialization
  {  

      template <> struct Serializer<rospy_tutorials::Floats>
      {
          template <typename Stream> inline static void write(Stream & stream, const rospy_tutorials::Floats & t)
          { 
              stream.next(t.data); 
          };

          template <typename Stream> inline static void read(Stream & stream, rospy_tutorials::Floats & t)
          { 
              stream.next(t.data); 
          };

          inline static uint32_t serializedLength(const rospy_tutorials::Floats & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.data); 
              return size;
          };
      }; // end struct Serializer<rospy_tutorials::Floats>

      template <> struct Serializer<rospy_tutorials::HeaderString>
      {
          template <typename Stream> inline static void write(Stream & stream, const rospy_tutorials::HeaderString & t)
          { 
              stream.next(t.header); 
              stream.next(t.data); 
          };

          template <typename Stream> inline static void read(Stream & stream, rospy_tutorials::HeaderString & t)
          { 
              stream.next(t.header); 
              stream.next(t.data); 
          };

          inline static uint32_t serializedLength(const rospy_tutorials::HeaderString & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.header); 
              size += serializationLength(t.data); 
              return size;
          };
      }; // end struct Serializer<rospy_tutorials::HeaderString>

      template <> struct Serializer<rospy_tutorials::AddTwoIntsRequest>
      {
          template <typename Stream> inline static void write(Stream & stream, const rospy_tutorials::AddTwoIntsRequest & t)
          { 
              stream.next(t.a); 
              stream.next(t.b); 
          };

          template <typename Stream> inline static void read(Stream & stream, rospy_tutorials::AddTwoIntsRequest & t)
          { 
              stream.next(t.a); 
              stream.next(t.b); 
          };

          inline static uint32_t serializedLength(const rospy_tutorials::AddTwoIntsRequest & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.a); 
              size += serializationLength(t.b); 
              return size;
          };
      }; // end struct Serializer<rospy_tutorials::AddTwoIntsRequest>

      template <> struct Serializer<rospy_tutorials::AddTwoIntsResponse>
      {
          template <typename Stream> inline static void write(Stream & stream, const rospy_tutorials::AddTwoIntsResponse & t)
          { 
              stream.next(t.sum); 
          };

          template <typename Stream> inline static void read(Stream & stream, rospy_tutorials::AddTwoIntsResponse & t)
          { 
              stream.next(t.sum); 
          };

          inline static uint32_t serializedLength(const rospy_tutorials::AddTwoIntsResponse & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.sum); 
              return size;
          };
      }; // end struct Serializer<rospy_tutorials::AddTwoIntsResponse>

      template <> struct Serializer<rospy_tutorials::AddTwoInts>
      {
          template <typename Stream> inline static void write(Stream & stream, const rospy_tutorials::AddTwoInts & t)
          { 
              stream.next(t.request); 
              stream.next(t.response); 
          };

          template <typename Stream> inline static void read(Stream & stream, rospy_tutorials::AddTwoInts & t)
          { 
              stream.next(t.request); 
              stream.next(t.response); 
          };

          inline static uint32_t serializedLength(const rospy_tutorials::AddTwoInts & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.request); 
              size += serializationLength(t.response); 
              return size;
          };
      }; // end struct Serializer<rospy_tutorials::AddTwoInts>

      template <> struct Serializer<rospy_tutorials::BadTwoIntsRequest>
      {
          template <typename Stream> inline static void write(Stream & stream, const rospy_tutorials::BadTwoIntsRequest & t)
          { 
              stream.next(t.a); 
              stream.next(t.b); 
          };

          template <typename Stream> inline static void read(Stream & stream, rospy_tutorials::BadTwoIntsRequest & t)
          { 
              stream.next(t.a); 
              stream.next(t.b); 
          };

          inline static uint32_t serializedLength(const rospy_tutorials::BadTwoIntsRequest & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.a); 
              size += serializationLength(t.b); 
              return size;
          };
      }; // end struct Serializer<rospy_tutorials::BadTwoIntsRequest>

      template <> struct Serializer<rospy_tutorials::BadTwoIntsResponse>
      {
          template <typename Stream> inline static void write(Stream & stream, const rospy_tutorials::BadTwoIntsResponse & t)
          { 
              stream.next(t.sum); 
          };

          template <typename Stream> inline static void read(Stream & stream, rospy_tutorials::BadTwoIntsResponse & t)
          { 
              stream.next(t.sum); 
          };

          inline static uint32_t serializedLength(const rospy_tutorials::BadTwoIntsResponse & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.sum); 
              return size;
          };
      }; // end struct Serializer<rospy_tutorials::BadTwoIntsResponse>

      template <> struct Serializer<rospy_tutorials::BadTwoInts>
      {
          template <typename Stream> inline static void write(Stream & stream, const rospy_tutorials::BadTwoInts & t)
          { 
              stream.next(t.request); 
              stream.next(t.response); 
          };

          template <typename Stream> inline static void read(Stream & stream, rospy_tutorials::BadTwoInts & t)
          { 
              stream.next(t.request); 
              stream.next(t.response); 
          };

          inline static uint32_t serializedLength(const rospy_tutorials::BadTwoInts & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.request); 
              size += serializationLength(t.response); 
              return size;
          };
      }; // end struct Serializer<rospy_tutorials::BadTwoInts>

  }; // namespace serialization

  namespace message_traits
  {

      template <> struct MD5Sum<rospy_tutorials::Floats>
      {

          static const char * value() 
          { 
              return "420cd38b6b071cd49f2970c3e2cee511"; 
          };

          static const uint64_t static_value1 = 0x420cd38b6b071cd4ULL;
          static const uint64_t static_value2 = 0x9f2970c3e2cee511ULL;
      }; // end struct MD5Sum<rospy_tutorials::Floats>

      template <> struct DataType<rospy_tutorials::Floats>
      {
          static const char * value() { return "rospy_tutorials/Floats";};
      }; // end DataType

      template <> struct Definition<rospy_tutorials::Floats>
      {
          static const char * value()
          { 
              return "float32[] data\n";
          };
      };

      template <> struct MD5Sum<rospy_tutorials::HeaderString>
      {

          static const char * value() 
          { 
              return "c99a9440709e4d4a9716d55b8270d5e7"; 
          };

          static const uint64_t static_value1 = 0xc99a9440709e4d4aULL;
          static const uint64_t static_value2 = 0x9716d55b8270d5e7ULL;
      }; // end struct MD5Sum<rospy_tutorials::HeaderString>

      template <> struct DataType<rospy_tutorials::HeaderString>
      {
          static const char * value() { return "rospy_tutorials/HeaderString";};
      }; // end DataType

      template <> struct Definition<rospy_tutorials::HeaderString>
      {
          static const char * value()
          { 
              return "Header header\nstring data\n\n================================================================================\nMSG: std_msgs/Header\n# Standard metadata for higher-level stamped data types.\n# This is generally used to communicate timestamped data \n# in a particular coordinate frame.\n# \n# sequence ID: consecutively increasing ID \nuint32 seq\n#Two-integer timestamp that is expressed as:\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n# time-handling sugar is provided by the client library\ntime stamp\n#Frame this data is associated with\n# 0: no frame\n# 1: global frame\nstring frame_id\n";
          };
      };

      template <> struct MD5Sum<rospy_tutorials::AddTwoIntsRequest>
      {

          static const char * value() 
          { 
              return "36d09b846be0b371c5f190354dd3153e"; 
          };

          static const uint64_t static_value1 = 0x36d09b846be0b371ULL;
          static const uint64_t static_value2 = 0xc5f190354dd3153eULL;
      }; // end struct MD5Sum<rospy_tutorials::AddTwoIntsRequest>

      template <> struct DataType<rospy_tutorials::AddTwoIntsRequest>
      {
          static const char * value() { return "rospy_tutorials/AddTwoIntsRequest";};
      }; // end DataType

      template <> struct Definition<rospy_tutorials::AddTwoIntsRequest>
      {
          static const char * value()
          { 
              return rospy_tutorials::AddTwoIntsRequest::XML_SOURCE.c_str();
          };
      };

      template <> struct MD5Sum<rospy_tutorials::AddTwoIntsResponse>
      {

          static const char * value() 
          { 
              return "b88405221c77b1878a3cbbfff53428d7"; 
          };

          static const uint64_t static_value1 = 0xb88405221c77b187ULL;
          static const uint64_t static_value2 = 0x8a3cbbfff53428d7ULL;
      }; // end struct MD5Sum<rospy_tutorials::AddTwoIntsResponse>

      template <> struct DataType<rospy_tutorials::AddTwoIntsResponse>
      {
          static const char * value() { return "rospy_tutorials/AddTwoIntsResponse";};
      }; // end DataType

      template <> struct Definition<rospy_tutorials::AddTwoIntsResponse>
      {
          static const char * value()
          { 
              return rospy_tutorials::AddTwoIntsResponse::XML_SOURCE.c_str();
          };
      };

      template <> struct MD5Sum<rospy_tutorials::AddTwoInts>
      {

          static const char * value() 
          { 
              return "d41d8cd98f00b204e9800998ecf8427e"; 
          };

          static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
          static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
      }; // end struct MD5Sum<rospy_tutorials::AddTwoInts>

      template <> struct DataType<rospy_tutorials::AddTwoInts>
      {
          static const char * value() { return "rospy_tutorials/AddTwoInts";};
      }; // end DataType

      template <> struct Definition<rospy_tutorials::AddTwoInts>
      {
          static const char * value()
          { 
              return rospy_tutorials::AddTwoInts::XML_SOURCE.c_str();
          };
      };

      template <> struct MD5Sum<rospy_tutorials::BadTwoIntsRequest>
      {

          static const char * value() 
          { 
              return "29bb5c7dea8bf822f53e94b0ee5a3a56"; 
          };

          static const uint64_t static_value1 = 0x29bb5c7dea8bf822ULL;
          static const uint64_t static_value2 = 0xf53e94b0ee5a3a56ULL;
      }; // end struct MD5Sum<rospy_tutorials::BadTwoIntsRequest>

      template <> struct DataType<rospy_tutorials::BadTwoIntsRequest>
      {
          static const char * value() { return "rospy_tutorials/BadTwoIntsRequest";};
      }; // end DataType

      template <> struct Definition<rospy_tutorials::BadTwoIntsRequest>
      {
          static const char * value()
          { 
              return rospy_tutorials::BadTwoIntsRequest::XML_SOURCE.c_str();
          };
      };

      template <> struct MD5Sum<rospy_tutorials::BadTwoIntsResponse>
      {

          static const char * value() 
          { 
              return "0ba699c25c9418c0366f3595c0c8e8ec"; 
          };

          static const uint64_t static_value1 = 0x0ba699c25c9418c0ULL;
          static const uint64_t static_value2 = 0x366f3595c0c8e8ecULL;
      }; // end struct MD5Sum<rospy_tutorials::BadTwoIntsResponse>

      template <> struct DataType<rospy_tutorials::BadTwoIntsResponse>
      {
          static const char * value() { return "rospy_tutorials/BadTwoIntsResponse";};
      }; // end DataType

      template <> struct Definition<rospy_tutorials::BadTwoIntsResponse>
      {
          static const char * value()
          { 
              return rospy_tutorials::BadTwoIntsResponse::XML_SOURCE.c_str();
          };
      };

      template <> struct MD5Sum<rospy_tutorials::BadTwoInts>
      {

          static const char * value() 
          { 
              return "d41d8cd98f00b204e9800998ecf8427e"; 
          };

          static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
          static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
      }; // end struct MD5Sum<rospy_tutorials::BadTwoInts>

      template <> struct DataType<rospy_tutorials::BadTwoInts>
      {
          static const char * value() { return "rospy_tutorials/BadTwoInts";};
      }; // end DataType

      template <> struct Definition<rospy_tutorials::BadTwoInts>
      {
          static const char * value()
          { 
              return rospy_tutorials::BadTwoInts::XML_SOURCE.c_str();
          };
      };

  }; // end namespace message_traits

}; // namespace ros

#endif // _CODEGEN_ROSPY_TUTORIALS_GENCPP_ROS_H_
