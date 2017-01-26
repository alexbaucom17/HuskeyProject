// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:04 -0500
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

#ifndef _CODEGEN_DRIVER_BASE_GENCPP_ROS_H_
#define _CODEGEN_DRIVER_BASE_GENCPP_ROS_H_

#include <opensource/ros/serialization.h>
#include <opensource/ros/message_traits.h>
#include <opensource/ros/message_operations.h>

#include <messaging/ros/ROSMessageFactory.h>
#include <messaging/Message.h>

namespace rframe { class DataTypeInfo; };

#include "driver_base_gencpp_Library.h"

#include "std_msgs/std_msgs_gencpp_ROS.h"
#include "std_srvs/std_srvs_gencpp_ROS.h"

namespace driver_base { 

    /** definition of message factory for driver_base_gencpp */
    class driver_base_gencppROSMessageFactory : public ROSMessageFactory
    {
    public:
        /** constructor */
        driver_base_gencppROSMessageFactory();
        /** destructor */
        virtual ~driver_base_gencppROSMessageFactory();

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
    ROSMessageFactory * allocate_driver_base_gencpp();

}; // end namespace driver_base

// declare ros serialization templates
namespace ros
{
  namespace serialization
  {  

      template <> struct Serializer<driver_base::ConfigString>
      {
          template <typename Stream> inline static void write(Stream & stream, const driver_base::ConfigString & t)
          { 
              stream.next(t.name); 
              stream.next(t.value); 
          };

          template <typename Stream> inline static void read(Stream & stream, driver_base::ConfigString & t)
          { 
              stream.next(t.name); 
              stream.next(t.value); 
          };

          inline static uint32_t serializedLength(const driver_base::ConfigString & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.name); 
              size += serializationLength(t.value); 
              return size;
          };
      }; // end struct Serializer<driver_base::ConfigString>

      template <> struct Serializer<driver_base::ConfigValue>
      {
          template <typename Stream> inline static void write(Stream & stream, const driver_base::ConfigValue & t)
          { 
              stream.next(t.name); 
              stream.next(t.value); 
          };

          template <typename Stream> inline static void read(Stream & stream, driver_base::ConfigValue & t)
          { 
              stream.next(t.name); 
              stream.next(t.value); 
          };

          inline static uint32_t serializedLength(const driver_base::ConfigValue & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.name); 
              size += serializationLength(t.value); 
              return size;
          };
      }; // end struct Serializer<driver_base::ConfigValue>

      template <> struct Serializer<driver_base::SensorLevels>
      {
          template <typename Stream> inline static void write(Stream & stream, const driver_base::SensorLevels & t)
          { 
          };

          template <typename Stream> inline static void read(Stream & stream, driver_base::SensorLevels & t)
          { 
          };

          inline static uint32_t serializedLength(const driver_base::SensorLevels & t)
          { 
              uint32_t size = 0;

              return size;
          };
      }; // end struct Serializer<driver_base::SensorLevels>

  }; // namespace serialization

  namespace message_traits
  {

      template <> struct MD5Sum<driver_base::ConfigString>
      {

          static const char * value() 
          { 
              return "bc6ccc4a57f61779c8eaae61e9f422e0"; 
          };

          static const uint64_t static_value1 = 0xbc6ccc4a57f61779ULL;
          static const uint64_t static_value2 = 0xc8eaae61e9f422e0ULL;
      }; // end struct MD5Sum<driver_base::ConfigString>

      template <> struct DataType<driver_base::ConfigString>
      {
          static const char * value() { return "driver_base/ConfigString";};
      }; // end DataType

      template <> struct Definition<driver_base::ConfigString>
      {
          static const char * value()
          { 
              return "string name\nstring value\n";
          };
      };

      template <> struct MD5Sum<driver_base::ConfigValue>
      {

          static const char * value() 
          { 
              return "d8512f27253c0f65f928a67c329cd658"; 
          };

          static const uint64_t static_value1 = 0xd8512f27253c0f65ULL;
          static const uint64_t static_value2 = 0xf928a67c329cd658ULL;
      }; // end struct MD5Sum<driver_base::ConfigValue>

      template <> struct DataType<driver_base::ConfigValue>
      {
          static const char * value() { return "driver_base/ConfigValue";};
      }; // end DataType

      template <> struct Definition<driver_base::ConfigValue>
      {
          static const char * value()
          { 
              return "string name\nfloat64 value\n";
          };
      };

      template <> struct MD5Sum<driver_base::SensorLevels>
      {

          static const char * value() 
          { 
              return "6322637bee96d5489db6e2127c47602c"; 
          };

          static const uint64_t static_value1 = 0x6322637bee96d548ULL;
          static const uint64_t static_value2 = 0x9db6e2127c47602cULL;
      }; // end struct MD5Sum<driver_base::SensorLevels>

      template <> struct DataType<driver_base::SensorLevels>
      {
          static const char * value() { return "driver_base/SensorLevels";};
      }; // end DataType

      template <> struct Definition<driver_base::SensorLevels>
      {
          static const char * value()
          { 
              return "byte RECONFIGURE_CLOSE = 3  # Parameters that need a sensor to be stopped completely when changed\nbyte RECONFIGURE_STOP = 1  # Parameters that need a sensor to stop streaming when changed\nbyte RECONFIGURE_RUNNING = 0 # Parameters that can be changed while a sensor is streaming\n";
          };
      };

  }; // end namespace message_traits

}; // namespace ros

#endif // _CODEGEN_DRIVER_BASE_GENCPP_ROS_H_

