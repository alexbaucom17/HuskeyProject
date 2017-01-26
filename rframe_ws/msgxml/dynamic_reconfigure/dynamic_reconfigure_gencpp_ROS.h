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

#ifndef _CODEGEN_DYNAMIC_RECONFIGURE_GENCPP_ROS_H_
#define _CODEGEN_DYNAMIC_RECONFIGURE_GENCPP_ROS_H_

#include <opensource/ros/serialization.h>
#include <opensource/ros/message_traits.h>
#include <opensource/ros/message_operations.h>

#include <messaging/ros/ROSMessageFactory.h>
#include <messaging/Message.h>

namespace rframe { class DataTypeInfo; };

#include "dynamic_reconfigure_gencpp_Library.h"

#include "std_msgs/std_msgs_gencpp_ROS.h"
#include "std_srvs/std_srvs_gencpp_ROS.h"

namespace dynamic_reconfigure { 

    /** definition of message factory for dynamic_reconfigure_gencpp */
    class dynamic_reconfigure_gencppROSMessageFactory : public ROSMessageFactory
    {
    public:
        /** constructor */
        dynamic_reconfigure_gencppROSMessageFactory();
        /** destructor */
        virtual ~dynamic_reconfigure_gencppROSMessageFactory();

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
    ROSMessageFactory * allocate_dynamic_reconfigure_gencpp();

}; // end namespace dynamic_reconfigure

// declare ros serialization templates
namespace ros
{
  namespace serialization
  {  

      template <> struct Serializer<dynamic_reconfigure::BoolParameter>
      {
          template <typename Stream> inline static void write(Stream & stream, const dynamic_reconfigure::BoolParameter & t)
          { 
              stream.next(t.name); 
              stream.next(t.value); 
          };

          template <typename Stream> inline static void read(Stream & stream, dynamic_reconfigure::BoolParameter & t)
          { 
              stream.next(t.name); 
              stream.next(t.value); 
          };

          inline static uint32_t serializedLength(const dynamic_reconfigure::BoolParameter & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.name); 
              size += serializationLength(t.value); 
              return size;
          };
      }; // end struct Serializer<dynamic_reconfigure::BoolParameter>

      template <> struct Serializer<dynamic_reconfigure::Config>
      {
          template <typename Stream> inline static void write(Stream & stream, const dynamic_reconfigure::Config & t)
          { 
              stream.next(t.bools); 
              stream.next(t.ints); 
              stream.next(t.strs); 
              stream.next(t.doubles); 
              stream.next(t.groups); 
          };

          template <typename Stream> inline static void read(Stream & stream, dynamic_reconfigure::Config & t)
          { 
              stream.next(t.bools); 
              stream.next(t.ints); 
              stream.next(t.strs); 
              stream.next(t.doubles); 
              stream.next(t.groups); 
          };

          inline static uint32_t serializedLength(const dynamic_reconfigure::Config & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.bools); 
              size += serializationLength(t.ints); 
              size += serializationLength(t.strs); 
              size += serializationLength(t.doubles); 
              size += serializationLength(t.groups); 
              return size;
          };
      }; // end struct Serializer<dynamic_reconfigure::Config>

      template <> struct Serializer<dynamic_reconfigure::ConfigDescription>
      {
          template <typename Stream> inline static void write(Stream & stream, const dynamic_reconfigure::ConfigDescription & t)
          { 
              stream.next(t.groups); 
              stream.next(t.max); 
              stream.next(t.min); 
              stream.next(t.dflt); 
          };

          template <typename Stream> inline static void read(Stream & stream, dynamic_reconfigure::ConfigDescription & t)
          { 
              stream.next(t.groups); 
              stream.next(t.max); 
              stream.next(t.min); 
              stream.next(t.dflt); 
          };

          inline static uint32_t serializedLength(const dynamic_reconfigure::ConfigDescription & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.groups); 
              size += serializationLength(t.max); 
              size += serializationLength(t.min); 
              size += serializationLength(t.dflt); 
              return size;
          };
      }; // end struct Serializer<dynamic_reconfigure::ConfigDescription>

      template <> struct Serializer<dynamic_reconfigure::DoubleParameter>
      {
          template <typename Stream> inline static void write(Stream & stream, const dynamic_reconfigure::DoubleParameter & t)
          { 
              stream.next(t.name); 
              stream.next(t.value); 
          };

          template <typename Stream> inline static void read(Stream & stream, dynamic_reconfigure::DoubleParameter & t)
          { 
              stream.next(t.name); 
              stream.next(t.value); 
          };

          inline static uint32_t serializedLength(const dynamic_reconfigure::DoubleParameter & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.name); 
              size += serializationLength(t.value); 
              return size;
          };
      }; // end struct Serializer<dynamic_reconfigure::DoubleParameter>

      template <> struct Serializer<dynamic_reconfigure::Group>
      {
          template <typename Stream> inline static void write(Stream & stream, const dynamic_reconfigure::Group & t)
          { 
              stream.next(t.name); 
              stream.next(t.type); 
              stream.next(t.parameters); 
              stream.next(t.parent); 
              stream.next(t.id); 
          };

          template <typename Stream> inline static void read(Stream & stream, dynamic_reconfigure::Group & t)
          { 
              stream.next(t.name); 
              stream.next(t.type); 
              stream.next(t.parameters); 
              stream.next(t.parent); 
              stream.next(t.id); 
          };

          inline static uint32_t serializedLength(const dynamic_reconfigure::Group & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.name); 
              size += serializationLength(t.type); 
              size += serializationLength(t.parameters); 
              size += serializationLength(t.parent); 
              size += serializationLength(t.id); 
              return size;
          };
      }; // end struct Serializer<dynamic_reconfigure::Group>

      template <> struct Serializer<dynamic_reconfigure::GroupState>
      {
          template <typename Stream> inline static void write(Stream & stream, const dynamic_reconfigure::GroupState & t)
          { 
              stream.next(t.name); 
              stream.next(t.state); 
              stream.next(t.id); 
              stream.next(t.parent); 
          };

          template <typename Stream> inline static void read(Stream & stream, dynamic_reconfigure::GroupState & t)
          { 
              stream.next(t.name); 
              stream.next(t.state); 
              stream.next(t.id); 
              stream.next(t.parent); 
          };

          inline static uint32_t serializedLength(const dynamic_reconfigure::GroupState & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.name); 
              size += serializationLength(t.state); 
              size += serializationLength(t.id); 
              size += serializationLength(t.parent); 
              return size;
          };
      }; // end struct Serializer<dynamic_reconfigure::GroupState>

      template <> struct Serializer<dynamic_reconfigure::IntParameter>
      {
          template <typename Stream> inline static void write(Stream & stream, const dynamic_reconfigure::IntParameter & t)
          { 
              stream.next(t.name); 
              stream.next(t.value); 
          };

          template <typename Stream> inline static void read(Stream & stream, dynamic_reconfigure::IntParameter & t)
          { 
              stream.next(t.name); 
              stream.next(t.value); 
          };

          inline static uint32_t serializedLength(const dynamic_reconfigure::IntParameter & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.name); 
              size += serializationLength(t.value); 
              return size;
          };
      }; // end struct Serializer<dynamic_reconfigure::IntParameter>

      template <> struct Serializer<dynamic_reconfigure::ParamDescription>
      {
          template <typename Stream> inline static void write(Stream & stream, const dynamic_reconfigure::ParamDescription & t)
          { 
              stream.next(t.name); 
              stream.next(t.type); 
              stream.next(t.level); 
              stream.next(t.description); 
              stream.next(t.edit_method); 
          };

          template <typename Stream> inline static void read(Stream & stream, dynamic_reconfigure::ParamDescription & t)
          { 
              stream.next(t.name); 
              stream.next(t.type); 
              stream.next(t.level); 
              stream.next(t.description); 
              stream.next(t.edit_method); 
          };

          inline static uint32_t serializedLength(const dynamic_reconfigure::ParamDescription & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.name); 
              size += serializationLength(t.type); 
              size += serializationLength(t.level); 
              size += serializationLength(t.description); 
              size += serializationLength(t.edit_method); 
              return size;
          };
      }; // end struct Serializer<dynamic_reconfigure::ParamDescription>

      template <> struct Serializer<dynamic_reconfigure::SensorLevels>
      {
          template <typename Stream> inline static void write(Stream & stream, const dynamic_reconfigure::SensorLevels & t)
          { 
          };

          template <typename Stream> inline static void read(Stream & stream, dynamic_reconfigure::SensorLevels & t)
          { 
          };

          inline static uint32_t serializedLength(const dynamic_reconfigure::SensorLevels & t)
          { 
              uint32_t size = 0;

              return size;
          };
      }; // end struct Serializer<dynamic_reconfigure::SensorLevels>

      template <> struct Serializer<dynamic_reconfigure::StrParameter>
      {
          template <typename Stream> inline static void write(Stream & stream, const dynamic_reconfigure::StrParameter & t)
          { 
              stream.next(t.name); 
              stream.next(t.value); 
          };

          template <typename Stream> inline static void read(Stream & stream, dynamic_reconfigure::StrParameter & t)
          { 
              stream.next(t.name); 
              stream.next(t.value); 
          };

          inline static uint32_t serializedLength(const dynamic_reconfigure::StrParameter & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.name); 
              size += serializationLength(t.value); 
              return size;
          };
      }; // end struct Serializer<dynamic_reconfigure::StrParameter>

      template <> struct Serializer<dynamic_reconfigure::ReconfigureRequest>
      {
          template <typename Stream> inline static void write(Stream & stream, const dynamic_reconfigure::ReconfigureRequest & t)
          { 
              stream.next(t.config); 
          };

          template <typename Stream> inline static void read(Stream & stream, dynamic_reconfigure::ReconfigureRequest & t)
          { 
              stream.next(t.config); 
          };

          inline static uint32_t serializedLength(const dynamic_reconfigure::ReconfigureRequest & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.config); 
              return size;
          };
      }; // end struct Serializer<dynamic_reconfigure::ReconfigureRequest>

      template <> struct Serializer<dynamic_reconfigure::ReconfigureResponse>
      {
          template <typename Stream> inline static void write(Stream & stream, const dynamic_reconfigure::ReconfigureResponse & t)
          { 
              stream.next(t.config); 
          };

          template <typename Stream> inline static void read(Stream & stream, dynamic_reconfigure::ReconfigureResponse & t)
          { 
              stream.next(t.config); 
          };

          inline static uint32_t serializedLength(const dynamic_reconfigure::ReconfigureResponse & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.config); 
              return size;
          };
      }; // end struct Serializer<dynamic_reconfigure::ReconfigureResponse>

      template <> struct Serializer<dynamic_reconfigure::Reconfigure>
      {
          template <typename Stream> inline static void write(Stream & stream, const dynamic_reconfigure::Reconfigure & t)
          { 
              stream.next(t.request); 
              stream.next(t.response); 
          };

          template <typename Stream> inline static void read(Stream & stream, dynamic_reconfigure::Reconfigure & t)
          { 
              stream.next(t.request); 
              stream.next(t.response); 
          };

          inline static uint32_t serializedLength(const dynamic_reconfigure::Reconfigure & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.request); 
              size += serializationLength(t.response); 
              return size;
          };
      }; // end struct Serializer<dynamic_reconfigure::Reconfigure>

  }; // namespace serialization

  namespace message_traits
  {

      template <> struct MD5Sum<dynamic_reconfigure::BoolParameter>
      {

          static const char * value() 
          { 
              return "23f05028c1a699fb83e22401228c3a9e"; 
          };

          static const uint64_t static_value1 = 0x23f05028c1a699fbULL;
          static const uint64_t static_value2 = 0x83e22401228c3a9eULL;
      }; // end struct MD5Sum<dynamic_reconfigure::BoolParameter>

      template <> struct DataType<dynamic_reconfigure::BoolParameter>
      {
          static const char * value() { return "dynamic_reconfigure/BoolParameter";};
      }; // end DataType

      template <> struct Definition<dynamic_reconfigure::BoolParameter>
      {
          static const char * value()
          { 
              return "string name\nbool value\n";
          };
      };

      template <> struct MD5Sum<dynamic_reconfigure::Config>
      {

          static const char * value() 
          { 
              return "958f16a05573709014982821e6822580"; 
          };

          static const uint64_t static_value1 = 0x958f16a055737090ULL;
          static const uint64_t static_value2 = 0x14982821e6822580ULL;
      }; // end struct MD5Sum<dynamic_reconfigure::Config>

      template <> struct DataType<dynamic_reconfigure::Config>
      {
          static const char * value() { return "dynamic_reconfigure/Config";};
      }; // end DataType

      template <> struct Definition<dynamic_reconfigure::Config>
      {
          static const char * value()
          { 
              return "BoolParameter[] bools\nIntParameter[] ints\nStrParameter[] strs\nDoubleParameter[] doubles\nGroupState[] groups\n\n================================================================================\nMSG: dynamic_reconfigure/BoolParameter\nstring name\nbool value\n\n================================================================================\nMSG: dynamic_reconfigure/IntParameter\nstring name\nint32 value\n\n================================================================================\nMSG: dynamic_reconfigure/StrParameter\nstring name\nstring value\n\n================================================================================\nMSG: dynamic_reconfigure/DoubleParameter\nstring name\nfloat64 value\n\n================================================================================\nMSG: dynamic_reconfigure/GroupState\nstring name\nbool state\nint32 id\nint32 parent\n";
          };
      };

      template <> struct MD5Sum<dynamic_reconfigure::ConfigDescription>
      {

          static const char * value() 
          { 
              return "757ce9d44ba8ddd801bb30bc456f946f"; 
          };

          static const uint64_t static_value1 = 0x757ce9d44ba8ddd8ULL;
          static const uint64_t static_value2 = 0x01bb30bc456f946fULL;
      }; // end struct MD5Sum<dynamic_reconfigure::ConfigDescription>

      template <> struct DataType<dynamic_reconfigure::ConfigDescription>
      {
          static const char * value() { return "dynamic_reconfigure/ConfigDescription";};
      }; // end DataType

      template <> struct Definition<dynamic_reconfigure::ConfigDescription>
      {
          static const char * value()
          { 
              return "Group[] groups\nConfig max\nConfig min\nConfig dflt\n\n================================================================================\nMSG: dynamic_reconfigure/Group\nstring name\nstring type\nParamDescription[] parameters\nint32 parent \nint32 id\n\n================================================================================\nMSG: dynamic_reconfigure/ParamDescription\nstring name\nstring type\nuint32 level\nstring description\nstring edit_method\n\n================================================================================\nMSG: dynamic_reconfigure/Config\nBoolParameter[] bools\nIntParameter[] ints\nStrParameter[] strs\nDoubleParameter[] doubles\nGroupState[] groups\n\n================================================================================\nMSG: dynamic_reconfigure/BoolParameter\nstring name\nbool value\n\n================================================================================\nMSG: dynamic_reconfigure/IntParameter\nstring name\nint32 value\n\n================================================================================\nMSG: dynamic_reconfigure/StrParameter\nstring name\nstring value\n\n================================================================================\nMSG: dynamic_reconfigure/DoubleParameter\nstring name\nfloat64 value\n\n================================================================================\nMSG: dynamic_reconfigure/GroupState\nstring name\nbool state\nint32 id\nint32 parent\n";
          };
      };

      template <> struct MD5Sum<dynamic_reconfigure::DoubleParameter>
      {

          static const char * value() 
          { 
              return "d8512f27253c0f65f928a67c329cd658"; 
          };

          static const uint64_t static_value1 = 0xd8512f27253c0f65ULL;
          static const uint64_t static_value2 = 0xf928a67c329cd658ULL;
      }; // end struct MD5Sum<dynamic_reconfigure::DoubleParameter>

      template <> struct DataType<dynamic_reconfigure::DoubleParameter>
      {
          static const char * value() { return "dynamic_reconfigure/DoubleParameter";};
      }; // end DataType

      template <> struct Definition<dynamic_reconfigure::DoubleParameter>
      {
          static const char * value()
          { 
              return "string name\nfloat64 value\n";
          };
      };

      template <> struct MD5Sum<dynamic_reconfigure::Group>
      {

          static const char * value() 
          { 
              return "9e8cd9e9423c94823db3614dd8b1cf7a"; 
          };

          static const uint64_t static_value1 = 0x9e8cd9e9423c9482ULL;
          static const uint64_t static_value2 = 0x3db3614dd8b1cf7aULL;
      }; // end struct MD5Sum<dynamic_reconfigure::Group>

      template <> struct DataType<dynamic_reconfigure::Group>
      {
          static const char * value() { return "dynamic_reconfigure/Group";};
      }; // end DataType

      template <> struct Definition<dynamic_reconfigure::Group>
      {
          static const char * value()
          { 
              return "string name\nstring type\nParamDescription[] parameters\nint32 parent \nint32 id\n\n================================================================================\nMSG: dynamic_reconfigure/ParamDescription\nstring name\nstring type\nuint32 level\nstring description\nstring edit_method\n";
          };
      };

      template <> struct MD5Sum<dynamic_reconfigure::GroupState>
      {

          static const char * value() 
          { 
              return "a2d87f51dc22930325041a2f8b1571f8"; 
          };

          static const uint64_t static_value1 = 0xa2d87f51dc229303ULL;
          static const uint64_t static_value2 = 0x25041a2f8b1571f8ULL;
      }; // end struct MD5Sum<dynamic_reconfigure::GroupState>

      template <> struct DataType<dynamic_reconfigure::GroupState>
      {
          static const char * value() { return "dynamic_reconfigure/GroupState";};
      }; // end DataType

      template <> struct Definition<dynamic_reconfigure::GroupState>
      {
          static const char * value()
          { 
              return "string name\nbool state\nint32 id\nint32 parent\n";
          };
      };

      template <> struct MD5Sum<dynamic_reconfigure::IntParameter>
      {

          static const char * value() 
          { 
              return "65fedc7a0cbfb8db035e46194a350bf1"; 
          };

          static const uint64_t static_value1 = 0x65fedc7a0cbfb8dbULL;
          static const uint64_t static_value2 = 0x035e46194a350bf1ULL;
      }; // end struct MD5Sum<dynamic_reconfigure::IntParameter>

      template <> struct DataType<dynamic_reconfigure::IntParameter>
      {
          static const char * value() { return "dynamic_reconfigure/IntParameter";};
      }; // end DataType

      template <> struct Definition<dynamic_reconfigure::IntParameter>
      {
          static const char * value()
          { 
              return "string name\nint32 value\n";
          };
      };

      template <> struct MD5Sum<dynamic_reconfigure::ParamDescription>
      {

          static const char * value() 
          { 
              return "7434fcb9348c13054e0c3b267c8cb34d"; 
          };

          static const uint64_t static_value1 = 0x7434fcb9348c1305ULL;
          static const uint64_t static_value2 = 0x4e0c3b267c8cb34dULL;
      }; // end struct MD5Sum<dynamic_reconfigure::ParamDescription>

      template <> struct DataType<dynamic_reconfigure::ParamDescription>
      {
          static const char * value() { return "dynamic_reconfigure/ParamDescription";};
      }; // end DataType

      template <> struct Definition<dynamic_reconfigure::ParamDescription>
      {
          static const char * value()
          { 
              return "string name\nstring type\nuint32 level\nstring description\nstring edit_method\n";
          };
      };

      template <> struct MD5Sum<dynamic_reconfigure::SensorLevels>
      {

          static const char * value() 
          { 
              return "6322637bee96d5489db6e2127c47602c"; 
          };

          static const uint64_t static_value1 = 0x6322637bee96d548ULL;
          static const uint64_t static_value2 = 0x9db6e2127c47602cULL;
      }; // end struct MD5Sum<dynamic_reconfigure::SensorLevels>

      template <> struct DataType<dynamic_reconfigure::SensorLevels>
      {
          static const char * value() { return "dynamic_reconfigure/SensorLevels";};
      }; // end DataType

      template <> struct Definition<dynamic_reconfigure::SensorLevels>
      {
          static const char * value()
          { 
              return "# This message is deprecated, please use driver_base/SensorLevels instead.\n\nbyte RECONFIGURE_CLOSE = 3  # Parameters that need a sensor to be stopped completely when changed\nbyte RECONFIGURE_STOP = 1  # Parameters that need a sensor to stop streaming when changed\nbyte RECONFIGURE_RUNNING = 0 # Parameters that can be changed while a sensor is streaming\n";
          };
      };

      template <> struct MD5Sum<dynamic_reconfigure::StrParameter>
      {

          static const char * value() 
          { 
              return "bc6ccc4a57f61779c8eaae61e9f422e0"; 
          };

          static const uint64_t static_value1 = 0xbc6ccc4a57f61779ULL;
          static const uint64_t static_value2 = 0xc8eaae61e9f422e0ULL;
      }; // end struct MD5Sum<dynamic_reconfigure::StrParameter>

      template <> struct DataType<dynamic_reconfigure::StrParameter>
      {
          static const char * value() { return "dynamic_reconfigure/StrParameter";};
      }; // end DataType

      template <> struct Definition<dynamic_reconfigure::StrParameter>
      {
          static const char * value()
          { 
              return "string name\nstring value\n";
          };
      };

      template <> struct MD5Sum<dynamic_reconfigure::ReconfigureRequest>
      {

          static const char * value() 
          { 
              return "ac41a77620a4a0348b7001641796a8a1"; 
          };

          static const uint64_t static_value1 = 0xac41a77620a4a034ULL;
          static const uint64_t static_value2 = 0x8b7001641796a8a1ULL;
      }; // end struct MD5Sum<dynamic_reconfigure::ReconfigureRequest>

      template <> struct DataType<dynamic_reconfigure::ReconfigureRequest>
      {
          static const char * value() { return "dynamic_reconfigure/ReconfigureRequest";};
      }; // end DataType

      template <> struct Definition<dynamic_reconfigure::ReconfigureRequest>
      {
          static const char * value()
          { 
              return dynamic_reconfigure::ReconfigureRequest::XML_SOURCE.c_str();
          };
      };

      template <> struct MD5Sum<dynamic_reconfigure::ReconfigureResponse>
      {

          static const char * value() 
          { 
              return "ac41a77620a4a0348b7001641796a8a1"; 
          };

          static const uint64_t static_value1 = 0xac41a77620a4a034ULL;
          static const uint64_t static_value2 = 0x8b7001641796a8a1ULL;
      }; // end struct MD5Sum<dynamic_reconfigure::ReconfigureResponse>

      template <> struct DataType<dynamic_reconfigure::ReconfigureResponse>
      {
          static const char * value() { return "dynamic_reconfigure/ReconfigureResponse";};
      }; // end DataType

      template <> struct Definition<dynamic_reconfigure::ReconfigureResponse>
      {
          static const char * value()
          { 
              return dynamic_reconfigure::ReconfigureResponse::XML_SOURCE.c_str();
          };
      };

      template <> struct MD5Sum<dynamic_reconfigure::Reconfigure>
      {

          static const char * value() 
          { 
              return "d41d8cd98f00b204e9800998ecf8427e"; 
          };

          static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
          static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
      }; // end struct MD5Sum<dynamic_reconfigure::Reconfigure>

      template <> struct DataType<dynamic_reconfigure::Reconfigure>
      {
          static const char * value() { return "dynamic_reconfigure/Reconfigure";};
      }; // end DataType

      template <> struct Definition<dynamic_reconfigure::Reconfigure>
      {
          static const char * value()
          { 
              return dynamic_reconfigure::Reconfigure::XML_SOURCE.c_str();
          };
      };

  }; // end namespace message_traits

}; // namespace ros

#endif // _CODEGEN_DYNAMIC_RECONFIGURE_GENCPP_ROS_H_
