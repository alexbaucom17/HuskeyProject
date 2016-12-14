// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:48 -0500
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

#ifndef _CODEGEN_DIAGNOSTIC_MSGS_GENCPP_ROS_H_
#define _CODEGEN_DIAGNOSTIC_MSGS_GENCPP_ROS_H_

#include <opensource/ros/serialization.h>
#include <opensource/ros/message_traits.h>
#include <opensource/ros/message_operations.h>

#include <messaging/ros/ROSMessageFactory.h>
#include <messaging/Message.h>

namespace rframe { class DataTypeInfo; };

#include "diagnostic_msgs_gencpp_Library.h"

#include "std_msgs/std_msgs_gencpp_ROS.h"
#include "std_srvs/std_srvs_gencpp_ROS.h"

namespace diagnostic_msgs { 

    /** definition of message factory for diagnostic_msgs_gencpp */
    class diagnostic_msgs_gencppROSMessageFactory : public ROSMessageFactory
    {
    public:
        /** constructor */
        diagnostic_msgs_gencppROSMessageFactory();
        /** destructor */
        virtual ~diagnostic_msgs_gencppROSMessageFactory();

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
    ROSMessageFactory * allocate_diagnostic_msgs_gencpp();

}; // end namespace diagnostic_msgs

// declare ros serialization templates
namespace ros
{
  namespace serialization
  {  

      template <> struct Serializer<diagnostic_msgs::DiagnosticArray>
      {
          template <typename Stream> inline static void write(Stream & stream, const diagnostic_msgs::DiagnosticArray & t)
          { 
              stream.next(t.header); 
              stream.next(t.status); 
          };

          template <typename Stream> inline static void read(Stream & stream, diagnostic_msgs::DiagnosticArray & t)
          { 
              stream.next(t.header); 
              stream.next(t.status); 
          };

          inline static uint32_t serializedLength(const diagnostic_msgs::DiagnosticArray & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.header); 
              size += serializationLength(t.status); 
              return size;
          };
      }; // end struct Serializer<diagnostic_msgs::DiagnosticArray>

      template <> struct Serializer<diagnostic_msgs::DiagnosticStatus>
      {
          template <typename Stream> inline static void write(Stream & stream, const diagnostic_msgs::DiagnosticStatus & t)
          { 
              stream.next(t.level); 
              stream.next(t.name); 
              stream.next(t.message); 
              stream.next(t.hardware_id); 
              stream.next(t.values); 
          };

          template <typename Stream> inline static void read(Stream & stream, diagnostic_msgs::DiagnosticStatus & t)
          { 
              stream.next(t.level); 
              stream.next(t.name); 
              stream.next(t.message); 
              stream.next(t.hardware_id); 
              stream.next(t.values); 
          };

          inline static uint32_t serializedLength(const diagnostic_msgs::DiagnosticStatus & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.level); 
              size += serializationLength(t.name); 
              size += serializationLength(t.message); 
              size += serializationLength(t.hardware_id); 
              size += serializationLength(t.values); 
              return size;
          };
      }; // end struct Serializer<diagnostic_msgs::DiagnosticStatus>

      template <> struct Serializer<diagnostic_msgs::KeyValue>
      {
          template <typename Stream> inline static void write(Stream & stream, const diagnostic_msgs::KeyValue & t)
          { 
              stream.next(t.key); 
              stream.next(t.value); 
          };

          template <typename Stream> inline static void read(Stream & stream, diagnostic_msgs::KeyValue & t)
          { 
              stream.next(t.key); 
              stream.next(t.value); 
          };

          inline static uint32_t serializedLength(const diagnostic_msgs::KeyValue & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.key); 
              size += serializationLength(t.value); 
              return size;
          };
      }; // end struct Serializer<diagnostic_msgs::KeyValue>

      template <> struct Serializer<diagnostic_msgs::AddDiagnosticsRequest>
      {
          template <typename Stream> inline static void write(Stream & stream, const diagnostic_msgs::AddDiagnosticsRequest & t)
          { 
              stream.next(t.load_namespace); 
          };

          template <typename Stream> inline static void read(Stream & stream, diagnostic_msgs::AddDiagnosticsRequest & t)
          { 
              stream.next(t.load_namespace); 
          };

          inline static uint32_t serializedLength(const diagnostic_msgs::AddDiagnosticsRequest & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.load_namespace); 
              return size;
          };
      }; // end struct Serializer<diagnostic_msgs::AddDiagnosticsRequest>

      template <> struct Serializer<diagnostic_msgs::AddDiagnosticsResponse>
      {
          template <typename Stream> inline static void write(Stream & stream, const diagnostic_msgs::AddDiagnosticsResponse & t)
          { 
              stream.next(t.success); 
              stream.next(t.message); 
          };

          template <typename Stream> inline static void read(Stream & stream, diagnostic_msgs::AddDiagnosticsResponse & t)
          { 
              stream.next(t.success); 
              stream.next(t.message); 
          };

          inline static uint32_t serializedLength(const diagnostic_msgs::AddDiagnosticsResponse & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.success); 
              size += serializationLength(t.message); 
              return size;
          };
      }; // end struct Serializer<diagnostic_msgs::AddDiagnosticsResponse>

      template <> struct Serializer<diagnostic_msgs::AddDiagnostics>
      {
          template <typename Stream> inline static void write(Stream & stream, const diagnostic_msgs::AddDiagnostics & t)
          { 
              stream.next(t.request); 
              stream.next(t.response); 
          };

          template <typename Stream> inline static void read(Stream & stream, diagnostic_msgs::AddDiagnostics & t)
          { 
              stream.next(t.request); 
              stream.next(t.response); 
          };

          inline static uint32_t serializedLength(const diagnostic_msgs::AddDiagnostics & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.request); 
              size += serializationLength(t.response); 
              return size;
          };
      }; // end struct Serializer<diagnostic_msgs::AddDiagnostics>

      template <> struct Serializer<diagnostic_msgs::SelfTestRequest>
      {
          template <typename Stream> inline static void write(Stream & stream, const diagnostic_msgs::SelfTestRequest & t)
          { 
          };

          template <typename Stream> inline static void read(Stream & stream, diagnostic_msgs::SelfTestRequest & t)
          { 
          };

          inline static uint32_t serializedLength(const diagnostic_msgs::SelfTestRequest & t)
          { 
              uint32_t size = 0;

              return size;
          };
      }; // end struct Serializer<diagnostic_msgs::SelfTestRequest>

      template <> struct Serializer<diagnostic_msgs::SelfTestResponse>
      {
          template <typename Stream> inline static void write(Stream & stream, const diagnostic_msgs::SelfTestResponse & t)
          { 
              stream.next(t.id); 
              stream.next(t.passed); 
              stream.next(t.status); 
          };

          template <typename Stream> inline static void read(Stream & stream, diagnostic_msgs::SelfTestResponse & t)
          { 
              stream.next(t.id); 
              stream.next(t.passed); 
              stream.next(t.status); 
          };

          inline static uint32_t serializedLength(const diagnostic_msgs::SelfTestResponse & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.id); 
              size += serializationLength(t.passed); 
              size += serializationLength(t.status); 
              return size;
          };
      }; // end struct Serializer<diagnostic_msgs::SelfTestResponse>

      template <> struct Serializer<diagnostic_msgs::SelfTest>
      {
          template <typename Stream> inline static void write(Stream & stream, const diagnostic_msgs::SelfTest & t)
          { 
              stream.next(t.request); 
              stream.next(t.response); 
          };

          template <typename Stream> inline static void read(Stream & stream, diagnostic_msgs::SelfTest & t)
          { 
              stream.next(t.request); 
              stream.next(t.response); 
          };

          inline static uint32_t serializedLength(const diagnostic_msgs::SelfTest & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.request); 
              size += serializationLength(t.response); 
              return size;
          };
      }; // end struct Serializer<diagnostic_msgs::SelfTest>

  }; // namespace serialization

  namespace message_traits
  {

      template <> struct MD5Sum<diagnostic_msgs::DiagnosticArray>
      {

          static const char * value() 
          { 
              return "60810da900de1dd6ddd437c3503511da"; 
          };

          static const uint64_t static_value1 = 0x60810da900de1dd6ULL;
          static const uint64_t static_value2 = 0xddd437c3503511daULL;
      }; // end struct MD5Sum<diagnostic_msgs::DiagnosticArray>

      template <> struct DataType<diagnostic_msgs::DiagnosticArray>
      {
          static const char * value() { return "diagnostic_msgs/DiagnosticArray";};
      }; // end DataType

      template <> struct Definition<diagnostic_msgs::DiagnosticArray>
      {
          static const char * value()
          { 
              return "# This message is used to send diagnostic information about the state of the robot\nHeader header #for timestamp\nDiagnosticStatus[] status # an array of components being reported on\n================================================================================\nMSG: std_msgs/Header\n# Standard metadata for higher-level stamped data types.\n# This is generally used to communicate timestamped data \n# in a particular coordinate frame.\n# \n# sequence ID: consecutively increasing ID \nuint32 seq\n#Two-integer timestamp that is expressed as:\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n# time-handling sugar is provided by the client library\ntime stamp\n#Frame this data is associated with\n# 0: no frame\n# 1: global frame\nstring frame_id\n\n================================================================================\nMSG: diagnostic_msgs/DiagnosticStatus\n# This message holds the status of an individual component of the robot.\n# \n\n# Possible levels of operations\nbyte OK=0\nbyte WARN=1\nbyte ERROR=2\nbyte STALE=3\n\nbyte level # level of operation enumerated above \nstring name # a description of the test/component reporting\nstring message # a description of the status\nstring hardware_id # a hardware unique string\nKeyValue[] values # an array of values associated with the status\n\n\n================================================================================\nMSG: diagnostic_msgs/KeyValue\nstring key # what to label this value when viewing\nstring value # a value to track over time\n";
          };
      };

      template <> struct MD5Sum<diagnostic_msgs::DiagnosticStatus>
      {

          static const char * value() 
          { 
              return "d0ce08bc6e5ba34c7754f563a9cabaf1"; 
          };

          static const uint64_t static_value1 = 0xd0ce08bc6e5ba34cULL;
          static const uint64_t static_value2 = 0x7754f563a9cabaf1ULL;
      }; // end struct MD5Sum<diagnostic_msgs::DiagnosticStatus>

      template <> struct DataType<diagnostic_msgs::DiagnosticStatus>
      {
          static const char * value() { return "diagnostic_msgs/DiagnosticStatus";};
      }; // end DataType

      template <> struct Definition<diagnostic_msgs::DiagnosticStatus>
      {
          static const char * value()
          { 
              return "# This message holds the status of an individual component of the robot.\n# \n\n# Possible levels of operations\nbyte OK=0\nbyte WARN=1\nbyte ERROR=2\nbyte STALE=3\n\nbyte level # level of operation enumerated above \nstring name # a description of the test/component reporting\nstring message # a description of the status\nstring hardware_id # a hardware unique string\nKeyValue[] values # an array of values associated with the status\n\n\n================================================================================\nMSG: diagnostic_msgs/KeyValue\nstring key # what to label this value when viewing\nstring value # a value to track over time\n";
          };
      };

      template <> struct MD5Sum<diagnostic_msgs::KeyValue>
      {

          static const char * value() 
          { 
              return "cf57fdc6617a881a88c16e768132149c"; 
          };

          static const uint64_t static_value1 = 0xcf57fdc6617a881aULL;
          static const uint64_t static_value2 = 0x88c16e768132149cULL;
      }; // end struct MD5Sum<diagnostic_msgs::KeyValue>

      template <> struct DataType<diagnostic_msgs::KeyValue>
      {
          static const char * value() { return "diagnostic_msgs/KeyValue";};
      }; // end DataType

      template <> struct Definition<diagnostic_msgs::KeyValue>
      {
          static const char * value()
          { 
              return "string key # what to label this value when viewing\nstring value # a value to track over time\n";
          };
      };

      template <> struct MD5Sum<diagnostic_msgs::AddDiagnosticsRequest>
      {

          static const char * value() 
          { 
              return "c26cf6e164288fbc6050d74f838bcdf0"; 
          };

          static const uint64_t static_value1 = 0xc26cf6e164288fbcULL;
          static const uint64_t static_value2 = 0x6050d74f838bcdf0ULL;
      }; // end struct MD5Sum<diagnostic_msgs::AddDiagnosticsRequest>

      template <> struct DataType<diagnostic_msgs::AddDiagnosticsRequest>
      {
          static const char * value() { return "diagnostic_msgs/AddDiagnosticsRequest";};
      }; // end DataType

      template <> struct Definition<diagnostic_msgs::AddDiagnosticsRequest>
      {
          static const char * value()
          { 
              return diagnostic_msgs::AddDiagnosticsRequest::XML_SOURCE.c_str();
          };
      };

      template <> struct MD5Sum<diagnostic_msgs::AddDiagnosticsResponse>
      {

          static const char * value() 
          { 
              return "937c9679a518e3a18d831e57125ea522"; 
          };

          static const uint64_t static_value1 = 0x937c9679a518e3a1ULL;
          static const uint64_t static_value2 = 0x8d831e57125ea522ULL;
      }; // end struct MD5Sum<diagnostic_msgs::AddDiagnosticsResponse>

      template <> struct DataType<diagnostic_msgs::AddDiagnosticsResponse>
      {
          static const char * value() { return "diagnostic_msgs/AddDiagnosticsResponse";};
      }; // end DataType

      template <> struct Definition<diagnostic_msgs::AddDiagnosticsResponse>
      {
          static const char * value()
          { 
              return diagnostic_msgs::AddDiagnosticsResponse::XML_SOURCE.c_str();
          };
      };

      template <> struct MD5Sum<diagnostic_msgs::AddDiagnostics>
      {

          static const char * value() 
          { 
              return "d41d8cd98f00b204e9800998ecf8427e"; 
          };

          static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
          static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
      }; // end struct MD5Sum<diagnostic_msgs::AddDiagnostics>

      template <> struct DataType<diagnostic_msgs::AddDiagnostics>
      {
          static const char * value() { return "diagnostic_msgs/AddDiagnostics";};
      }; // end DataType

      template <> struct Definition<diagnostic_msgs::AddDiagnostics>
      {
          static const char * value()
          { 
              return diagnostic_msgs::AddDiagnostics::XML_SOURCE.c_str();
          };
      };

      template <> struct MD5Sum<diagnostic_msgs::SelfTestRequest>
      {

          static const char * value() 
          { 
              return "d41d8cd98f00b204e9800998ecf8427e"; 
          };

          static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
          static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
      }; // end struct MD5Sum<diagnostic_msgs::SelfTestRequest>

      template <> struct DataType<diagnostic_msgs::SelfTestRequest>
      {
          static const char * value() { return "diagnostic_msgs/SelfTestRequest";};
      }; // end DataType

      template <> struct Definition<diagnostic_msgs::SelfTestRequest>
      {
          static const char * value()
          { 
              return diagnostic_msgs::SelfTestRequest::XML_SOURCE.c_str();
          };
      };

      template <> struct MD5Sum<diagnostic_msgs::SelfTestResponse>
      {

          static const char * value() 
          { 
              return "ac21b1bab7ab17546986536c22eb34e9"; 
          };

          static const uint64_t static_value1 = 0xac21b1bab7ab1754ULL;
          static const uint64_t static_value2 = 0x6986536c22eb34e9ULL;
      }; // end struct MD5Sum<diagnostic_msgs::SelfTestResponse>

      template <> struct DataType<diagnostic_msgs::SelfTestResponse>
      {
          static const char * value() { return "diagnostic_msgs/SelfTestResponse";};
      }; // end DataType

      template <> struct Definition<diagnostic_msgs::SelfTestResponse>
      {
          static const char * value()
          { 
              return diagnostic_msgs::SelfTestResponse::XML_SOURCE.c_str();
          };
      };

      template <> struct MD5Sum<diagnostic_msgs::SelfTest>
      {

          static const char * value() 
          { 
              return "d41d8cd98f00b204e9800998ecf8427e"; 
          };

          static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
          static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
      }; // end struct MD5Sum<diagnostic_msgs::SelfTest>

      template <> struct DataType<diagnostic_msgs::SelfTest>
      {
          static const char * value() { return "diagnostic_msgs/SelfTest";};
      }; // end DataType

      template <> struct Definition<diagnostic_msgs::SelfTest>
      {
          static const char * value()
          { 
              return diagnostic_msgs::SelfTest::XML_SOURCE.c_str();
          };
      };

  }; // end namespace message_traits

}; // namespace ros

#endif // _CODEGEN_DIAGNOSTIC_MSGS_GENCPP_ROS_H_
