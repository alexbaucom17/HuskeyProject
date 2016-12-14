// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:45 -0500
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

#ifndef _CODEGEN_ACTIONLIB_MSGS_GENCPP_ROS_H_
#define _CODEGEN_ACTIONLIB_MSGS_GENCPP_ROS_H_

#include <opensource/ros/serialization.h>
#include <opensource/ros/message_traits.h>
#include <opensource/ros/message_operations.h>

#include <messaging/ros/ROSMessageFactory.h>
#include <messaging/Message.h>

namespace rframe { class DataTypeInfo; };

#include "actionlib_msgs_gencpp_Library.h"

#include "std_msgs/std_msgs_gencpp_ROS.h"
#include "std_srvs/std_srvs_gencpp_ROS.h"

namespace actionlib_msgs { 

    /** definition of message factory for actionlib_msgs_gencpp */
    class actionlib_msgs_gencppROSMessageFactory : public ROSMessageFactory
    {
    public:
        /** constructor */
        actionlib_msgs_gencppROSMessageFactory();
        /** destructor */
        virtual ~actionlib_msgs_gencppROSMessageFactory();

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
    ROSMessageFactory * allocate_actionlib_msgs_gencpp();

}; // end namespace actionlib_msgs

// declare ros serialization templates
namespace ros
{
  namespace serialization
  {  

      template <> struct Serializer<actionlib_msgs::GoalID>
      {
          template <typename Stream> inline static void write(Stream & stream, const actionlib_msgs::GoalID & t)
          { 
              stream.next(t.stamp); 
              stream.next(t.id); 
          };

          template <typename Stream> inline static void read(Stream & stream, actionlib_msgs::GoalID & t)
          { 
              stream.next(t.stamp); 
              stream.next(t.id); 
          };

          inline static uint32_t serializedLength(const actionlib_msgs::GoalID & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.stamp); 
              size += serializationLength(t.id); 
              return size;
          };
      }; // end struct Serializer<actionlib_msgs::GoalID>

      template <> struct Serializer<actionlib_msgs::GoalStatus>
      {
          template <typename Stream> inline static void write(Stream & stream, const actionlib_msgs::GoalStatus & t)
          { 
              stream.next(t.goal_id); 
              stream.next(t.status); 
              stream.next(t.text); 
          };

          template <typename Stream> inline static void read(Stream & stream, actionlib_msgs::GoalStatus & t)
          { 
              stream.next(t.goal_id); 
              stream.next(t.status); 
              stream.next(t.text); 
          };

          inline static uint32_t serializedLength(const actionlib_msgs::GoalStatus & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.goal_id); 
              size += serializationLength(t.status); 
              size += serializationLength(t.text); 
              return size;
          };
      }; // end struct Serializer<actionlib_msgs::GoalStatus>

      template <> struct Serializer<actionlib_msgs::GoalStatusArray>
      {
          template <typename Stream> inline static void write(Stream & stream, const actionlib_msgs::GoalStatusArray & t)
          { 
              stream.next(t.header); 
              stream.next(t.status_list); 
          };

          template <typename Stream> inline static void read(Stream & stream, actionlib_msgs::GoalStatusArray & t)
          { 
              stream.next(t.header); 
              stream.next(t.status_list); 
          };

          inline static uint32_t serializedLength(const actionlib_msgs::GoalStatusArray & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.header); 
              size += serializationLength(t.status_list); 
              return size;
          };
      }; // end struct Serializer<actionlib_msgs::GoalStatusArray>

  }; // namespace serialization

  namespace message_traits
  {

      template <> struct MD5Sum<actionlib_msgs::GoalID>
      {

          static const char * value() 
          { 
              return "302881f31927c1df708a2dbab0e80ee8"; 
          };

          static const uint64_t static_value1 = 0x302881f31927c1dfULL;
          static const uint64_t static_value2 = 0x708a2dbab0e80ee8ULL;
      }; // end struct MD5Sum<actionlib_msgs::GoalID>

      template <> struct DataType<actionlib_msgs::GoalID>
      {
          static const char * value() { return "actionlib_msgs/GoalID";};
      }; // end DataType

      template <> struct Definition<actionlib_msgs::GoalID>
      {
          static const char * value()
          { 
              return "# The stamp should store the time at which this goal was requested.\n# It is used by an action server when it tries to preempt all\n# goals that were requested before a certain time\ntime stamp\n\n# The id provides a way to associate feedback and\n# result message with specific goal requests. The id\n# specified must be unique.\nstring id\n\n";
          };
      };

      template <> struct MD5Sum<actionlib_msgs::GoalStatus>
      {

          static const char * value() 
          { 
              return "d388f9b87b3c471f784434d671988d4a"; 
          };

          static const uint64_t static_value1 = 0xd388f9b87b3c471fULL;
          static const uint64_t static_value2 = 0x784434d671988d4aULL;
      }; // end struct MD5Sum<actionlib_msgs::GoalStatus>

      template <> struct DataType<actionlib_msgs::GoalStatus>
      {
          static const char * value() { return "actionlib_msgs/GoalStatus";};
      }; // end DataType

      template <> struct Definition<actionlib_msgs::GoalStatus>
      {
          static const char * value()
          { 
              return "GoalID goal_id\nuint8 status\nuint8 PENDING         = 0   # The goal has yet to be processed by the action server\nuint8 ACTIVE          = 1   # The goal is currently being processed by the action server\nuint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n                            #   and has since completed its execution (Terminal State)\nuint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\nuint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n                            #    to some failure (Terminal State)\nuint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n                            #    because the goal was unattainable or invalid (Terminal State)\nuint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n                            #    and has not yet completed execution\nuint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n                            #    but the action server has not yet confirmed that the goal is canceled\nuint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n                            #    and was successfully cancelled (Terminal State)\nuint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n                            #    sent over the wire by an action server\n\n#Allow for the user to associate a string with GoalStatus for debugging\nstring text\n\n\n================================================================================\nMSG: actionlib_msgs/GoalID\n# The stamp should store the time at which this goal was requested.\n# It is used by an action server when it tries to preempt all\n# goals that were requested before a certain time\ntime stamp\n\n# The id provides a way to associate feedback and\n# result message with specific goal requests. The id\n# specified must be unique.\nstring id\n\n";
          };
      };

      template <> struct MD5Sum<actionlib_msgs::GoalStatusArray>
      {

          static const char * value() 
          { 
              return "8b2b82f13216d0a8ea88bd3af735e619"; 
          };

          static const uint64_t static_value1 = 0x8b2b82f13216d0a8ULL;
          static const uint64_t static_value2 = 0xea88bd3af735e619ULL;
      }; // end struct MD5Sum<actionlib_msgs::GoalStatusArray>

      template <> struct DataType<actionlib_msgs::GoalStatusArray>
      {
          static const char * value() { return "actionlib_msgs/GoalStatusArray";};
      }; // end DataType

      template <> struct Definition<actionlib_msgs::GoalStatusArray>
      {
          static const char * value()
          { 
              return "# Stores the statuses for goals that are currently being tracked\n# by an action server\nHeader header\nGoalStatus[] status_list\n\n\n================================================================================\nMSG: std_msgs/Header\n# Standard metadata for higher-level stamped data types.\n# This is generally used to communicate timestamped data \n# in a particular coordinate frame.\n# \n# sequence ID: consecutively increasing ID \nuint32 seq\n#Two-integer timestamp that is expressed as:\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n# time-handling sugar is provided by the client library\ntime stamp\n#Frame this data is associated with\n# 0: no frame\n# 1: global frame\nstring frame_id\n\n================================================================================\nMSG: actionlib_msgs/GoalStatus\nGoalID goal_id\nuint8 status\nuint8 PENDING         = 0   # The goal has yet to be processed by the action server\nuint8 ACTIVE          = 1   # The goal is currently being processed by the action server\nuint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n                            #   and has since completed its execution (Terminal State)\nuint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\nuint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n                            #    to some failure (Terminal State)\nuint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n                            #    because the goal was unattainable or invalid (Terminal State)\nuint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n                            #    and has not yet completed execution\nuint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n                            #    but the action server has not yet confirmed that the goal is canceled\nuint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n                            #    and was successfully cancelled (Terminal State)\nuint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n                            #    sent over the wire by an action server\n\n#Allow for the user to associate a string with GoalStatus for debugging\nstring text\n\n\n================================================================================\nMSG: actionlib_msgs/GoalID\n# The stamp should store the time at which this goal was requested.\n# It is used by an action server when it tries to preempt all\n# goals that were requested before a certain time\ntime stamp\n\n# The id provides a way to associate feedback and\n# result message with specific goal requests. The id\n# specified must be unique.\nstring id\n\n";
          };
      };

  }; // end namespace message_traits

}; // namespace ros

#endif // _CODEGEN_ACTIONLIB_MSGS_GENCPP_ROS_H_
