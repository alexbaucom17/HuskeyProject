// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:45:00 -0500
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

#ifndef _CODEGEN_TURTLE_ACTIONLIB_GENCPP_ROS_H_
#define _CODEGEN_TURTLE_ACTIONLIB_GENCPP_ROS_H_

#include <opensource/ros/serialization.h>
#include <opensource/ros/message_traits.h>
#include <opensource/ros/message_operations.h>

#include <messaging/ros/ROSMessageFactory.h>
#include <messaging/Message.h>

namespace rframe { class DataTypeInfo; };

#include "turtle_actionlib_gencpp_Library.h"

#include "actionlib_msgs/actionlib_msgs_gencpp_ROS.h"
#include "std_msgs/std_msgs_gencpp_ROS.h"
#include "std_srvs/std_srvs_gencpp_ROS.h"

namespace turtle_actionlib { 

    /** definition of message factory for turtle_actionlib_gencpp */
    class turtle_actionlib_gencppROSMessageFactory : public ROSMessageFactory
    {
    public:
        /** constructor */
        turtle_actionlib_gencppROSMessageFactory();
        /** destructor */
        virtual ~turtle_actionlib_gencppROSMessageFactory();

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
    ROSMessageFactory * allocate_turtle_actionlib_gencpp();

}; // end namespace turtle_actionlib

// declare ros serialization templates
namespace ros
{
  namespace serialization
  {  

      template <> struct Serializer<turtle_actionlib::ShapeAction>
      {
          template <typename Stream> inline static void write(Stream & stream, const turtle_actionlib::ShapeAction & t)
          { 
              stream.next(t.action_goal); 
              stream.next(t.action_result); 
              stream.next(t.action_feedback); 
          };

          template <typename Stream> inline static void read(Stream & stream, turtle_actionlib::ShapeAction & t)
          { 
              stream.next(t.action_goal); 
              stream.next(t.action_result); 
              stream.next(t.action_feedback); 
          };

          inline static uint32_t serializedLength(const turtle_actionlib::ShapeAction & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.action_goal); 
              size += serializationLength(t.action_result); 
              size += serializationLength(t.action_feedback); 
              return size;
          };
      }; // end struct Serializer<turtle_actionlib::ShapeAction>

      template <> struct Serializer<turtle_actionlib::ShapeActionFeedback>
      {
          template <typename Stream> inline static void write(Stream & stream, const turtle_actionlib::ShapeActionFeedback & t)
          { 
              stream.next(t.header); 
              stream.next(t.status); 
              stream.next(t.feedback); 
          };

          template <typename Stream> inline static void read(Stream & stream, turtle_actionlib::ShapeActionFeedback & t)
          { 
              stream.next(t.header); 
              stream.next(t.status); 
              stream.next(t.feedback); 
          };

          inline static uint32_t serializedLength(const turtle_actionlib::ShapeActionFeedback & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.header); 
              size += serializationLength(t.status); 
              size += serializationLength(t.feedback); 
              return size;
          };
      }; // end struct Serializer<turtle_actionlib::ShapeActionFeedback>

      template <> struct Serializer<turtle_actionlib::ShapeActionGoal>
      {
          template <typename Stream> inline static void write(Stream & stream, const turtle_actionlib::ShapeActionGoal & t)
          { 
              stream.next(t.header); 
              stream.next(t.goal_id); 
              stream.next(t.goal); 
          };

          template <typename Stream> inline static void read(Stream & stream, turtle_actionlib::ShapeActionGoal & t)
          { 
              stream.next(t.header); 
              stream.next(t.goal_id); 
              stream.next(t.goal); 
          };

          inline static uint32_t serializedLength(const turtle_actionlib::ShapeActionGoal & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.header); 
              size += serializationLength(t.goal_id); 
              size += serializationLength(t.goal); 
              return size;
          };
      }; // end struct Serializer<turtle_actionlib::ShapeActionGoal>

      template <> struct Serializer<turtle_actionlib::ShapeActionResult>
      {
          template <typename Stream> inline static void write(Stream & stream, const turtle_actionlib::ShapeActionResult & t)
          { 
              stream.next(t.header); 
              stream.next(t.status); 
              stream.next(t.result); 
          };

          template <typename Stream> inline static void read(Stream & stream, turtle_actionlib::ShapeActionResult & t)
          { 
              stream.next(t.header); 
              stream.next(t.status); 
              stream.next(t.result); 
          };

          inline static uint32_t serializedLength(const turtle_actionlib::ShapeActionResult & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.header); 
              size += serializationLength(t.status); 
              size += serializationLength(t.result); 
              return size;
          };
      }; // end struct Serializer<turtle_actionlib::ShapeActionResult>

      template <> struct Serializer<turtle_actionlib::ShapeFeedback>
      {
          template <typename Stream> inline static void write(Stream & stream, const turtle_actionlib::ShapeFeedback & t)
          { 
          };

          template <typename Stream> inline static void read(Stream & stream, turtle_actionlib::ShapeFeedback & t)
          { 
          };

          inline static uint32_t serializedLength(const turtle_actionlib::ShapeFeedback & t)
          { 
              uint32_t size = 0;

              return size;
          };
      }; // end struct Serializer<turtle_actionlib::ShapeFeedback>

      template <> struct Serializer<turtle_actionlib::ShapeGoal>
      {
          template <typename Stream> inline static void write(Stream & stream, const turtle_actionlib::ShapeGoal & t)
          { 
              stream.next(t.edges); 
              stream.next(t.radius); 
          };

          template <typename Stream> inline static void read(Stream & stream, turtle_actionlib::ShapeGoal & t)
          { 
              stream.next(t.edges); 
              stream.next(t.radius); 
          };

          inline static uint32_t serializedLength(const turtle_actionlib::ShapeGoal & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.edges); 
              size += serializationLength(t.radius); 
              return size;
          };
      }; // end struct Serializer<turtle_actionlib::ShapeGoal>

      template <> struct Serializer<turtle_actionlib::ShapeResult>
      {
          template <typename Stream> inline static void write(Stream & stream, const turtle_actionlib::ShapeResult & t)
          { 
              stream.next(t.interior_angle); 
              stream.next(t.apothem); 
          };

          template <typename Stream> inline static void read(Stream & stream, turtle_actionlib::ShapeResult & t)
          { 
              stream.next(t.interior_angle); 
              stream.next(t.apothem); 
          };

          inline static uint32_t serializedLength(const turtle_actionlib::ShapeResult & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.interior_angle); 
              size += serializationLength(t.apothem); 
              return size;
          };
      }; // end struct Serializer<turtle_actionlib::ShapeResult>

      template <> struct Serializer<turtle_actionlib::Velocity>
      {
          template <typename Stream> inline static void write(Stream & stream, const turtle_actionlib::Velocity & t)
          { 
              stream.next(t.linear); 
              stream.next(t.angular); 
          };

          template <typename Stream> inline static void read(Stream & stream, turtle_actionlib::Velocity & t)
          { 
              stream.next(t.linear); 
              stream.next(t.angular); 
          };

          inline static uint32_t serializedLength(const turtle_actionlib::Velocity & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.linear); 
              size += serializationLength(t.angular); 
              return size;
          };
      }; // end struct Serializer<turtle_actionlib::Velocity>

  }; // namespace serialization

  namespace message_traits
  {

      template <> struct MD5Sum<turtle_actionlib::ShapeAction>
      {

          static const char * value() 
          { 
              return "d73b17d6237a925511f5d7727a1dc903"; 
          };

          static const uint64_t static_value1 = 0xd73b17d6237a9255ULL;
          static const uint64_t static_value2 = 0x11f5d7727a1dc903ULL;
      }; // end struct MD5Sum<turtle_actionlib::ShapeAction>

      template <> struct DataType<turtle_actionlib::ShapeAction>
      {
          static const char * value() { return "turtle_actionlib/ShapeAction";};
      }; // end DataType

      template <> struct Definition<turtle_actionlib::ShapeAction>
      {
          static const char * value()
          { 
              return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\nShapeActionGoal action_goal\nShapeActionResult action_result\nShapeActionFeedback action_feedback\n\n================================================================================\nMSG: turtle_actionlib/ShapeActionGoal\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\nHeader header\nactionlib_msgs/GoalID goal_id\nShapeGoal goal\n\n================================================================================\nMSG: std_msgs/Header\n# Standard metadata for higher-level stamped data types.\n# This is generally used to communicate timestamped data \n# in a particular coordinate frame.\n# \n# sequence ID: consecutively increasing ID \nuint32 seq\n#Two-integer timestamp that is expressed as:\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n# time-handling sugar is provided by the client library\ntime stamp\n#Frame this data is associated with\n# 0: no frame\n# 1: global frame\nstring frame_id\n\n================================================================================\nMSG: actionlib_msgs/GoalID\n# The stamp should store the time at which this goal was requested.\n# It is used by an action server when it tries to preempt all\n# goals that were requested before a certain time\ntime stamp\n\n# The id provides a way to associate feedback and\n# result message with specific goal requests. The id\n# specified must be unique.\nstring id\n\n\n================================================================================\nMSG: turtle_actionlib/ShapeGoal\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n#goal definition\nint32 edges\nfloat32 radius\n\n================================================================================\nMSG: turtle_actionlib/ShapeActionResult\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\nHeader header\nactionlib_msgs/GoalStatus status\nShapeResult result\n\n================================================================================\nMSG: actionlib_msgs/GoalStatus\nGoalID goal_id\nuint8 status\nuint8 PENDING         = 0   # The goal has yet to be processed by the action server\nuint8 ACTIVE          = 1   # The goal is currently being processed by the action server\nuint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n                            #   and has since completed its execution (Terminal State)\nuint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\nuint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n                            #    to some failure (Terminal State)\nuint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n                            #    because the goal was unattainable or invalid (Terminal State)\nuint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n                            #    and has not yet completed execution\nuint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n                            #    but the action server has not yet confirmed that the goal is canceled\nuint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n                            #    and was successfully cancelled (Terminal State)\nuint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n                            #    sent over the wire by an action server\n\n#Allow for the user to associate a string with GoalStatus for debugging\nstring text\n\n\n================================================================================\nMSG: turtle_actionlib/ShapeResult\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n#result definition\nfloat32 interior_angle\nfloat32 apothem\n\n================================================================================\nMSG: turtle_actionlib/ShapeActionFeedback\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\nHeader header\nactionlib_msgs/GoalStatus status\nShapeFeedback feedback\n\n================================================================================\nMSG: turtle_actionlib/ShapeFeedback\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n#feedback\n\n\n";
          };
      };

      template <> struct MD5Sum<turtle_actionlib::ShapeActionFeedback>
      {

          static const char * value() 
          { 
              return "aae20e09065c3809e8a8e87c4c8953fd"; 
          };

          static const uint64_t static_value1 = 0xaae20e09065c3809ULL;
          static const uint64_t static_value2 = 0xe8a8e87c4c8953fdULL;
      }; // end struct MD5Sum<turtle_actionlib::ShapeActionFeedback>

      template <> struct DataType<turtle_actionlib::ShapeActionFeedback>
      {
          static const char * value() { return "turtle_actionlib/ShapeActionFeedback";};
      }; // end DataType

      template <> struct Definition<turtle_actionlib::ShapeActionFeedback>
      {
          static const char * value()
          { 
              return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\nHeader header\nactionlib_msgs/GoalStatus status\nShapeFeedback feedback\n\n================================================================================\nMSG: std_msgs/Header\n# Standard metadata for higher-level stamped data types.\n# This is generally used to communicate timestamped data \n# in a particular coordinate frame.\n# \n# sequence ID: consecutively increasing ID \nuint32 seq\n#Two-integer timestamp that is expressed as:\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n# time-handling sugar is provided by the client library\ntime stamp\n#Frame this data is associated with\n# 0: no frame\n# 1: global frame\nstring frame_id\n\n================================================================================\nMSG: actionlib_msgs/GoalStatus\nGoalID goal_id\nuint8 status\nuint8 PENDING         = 0   # The goal has yet to be processed by the action server\nuint8 ACTIVE          = 1   # The goal is currently being processed by the action server\nuint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n                            #   and has since completed its execution (Terminal State)\nuint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\nuint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n                            #    to some failure (Terminal State)\nuint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n                            #    because the goal was unattainable or invalid (Terminal State)\nuint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n                            #    and has not yet completed execution\nuint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n                            #    but the action server has not yet confirmed that the goal is canceled\nuint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n                            #    and was successfully cancelled (Terminal State)\nuint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n                            #    sent over the wire by an action server\n\n#Allow for the user to associate a string with GoalStatus for debugging\nstring text\n\n\n================================================================================\nMSG: actionlib_msgs/GoalID\n# The stamp should store the time at which this goal was requested.\n# It is used by an action server when it tries to preempt all\n# goals that were requested before a certain time\ntime stamp\n\n# The id provides a way to associate feedback and\n# result message with specific goal requests. The id\n# specified must be unique.\nstring id\n\n\n================================================================================\nMSG: turtle_actionlib/ShapeFeedback\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n#feedback\n\n\n";
          };
      };

      template <> struct MD5Sum<turtle_actionlib::ShapeActionGoal>
      {

          static const char * value() 
          { 
              return "dbfccd187f2ec9c593916447ffd6cc77"; 
          };

          static const uint64_t static_value1 = 0xdbfccd187f2ec9c5ULL;
          static const uint64_t static_value2 = 0x93916447ffd6cc77ULL;
      }; // end struct MD5Sum<turtle_actionlib::ShapeActionGoal>

      template <> struct DataType<turtle_actionlib::ShapeActionGoal>
      {
          static const char * value() { return "turtle_actionlib/ShapeActionGoal";};
      }; // end DataType

      template <> struct Definition<turtle_actionlib::ShapeActionGoal>
      {
          static const char * value()
          { 
              return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\nHeader header\nactionlib_msgs/GoalID goal_id\nShapeGoal goal\n\n================================================================================\nMSG: std_msgs/Header\n# Standard metadata for higher-level stamped data types.\n# This is generally used to communicate timestamped data \n# in a particular coordinate frame.\n# \n# sequence ID: consecutively increasing ID \nuint32 seq\n#Two-integer timestamp that is expressed as:\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n# time-handling sugar is provided by the client library\ntime stamp\n#Frame this data is associated with\n# 0: no frame\n# 1: global frame\nstring frame_id\n\n================================================================================\nMSG: actionlib_msgs/GoalID\n# The stamp should store the time at which this goal was requested.\n# It is used by an action server when it tries to preempt all\n# goals that were requested before a certain time\ntime stamp\n\n# The id provides a way to associate feedback and\n# result message with specific goal requests. The id\n# specified must be unique.\nstring id\n\n\n================================================================================\nMSG: turtle_actionlib/ShapeGoal\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n#goal definition\nint32 edges\nfloat32 radius\n";
          };
      };

      template <> struct MD5Sum<turtle_actionlib::ShapeActionResult>
      {

          static const char * value() 
          { 
              return "c8d13d5d140f1047a2e4d3bf5c045822"; 
          };

          static const uint64_t static_value1 = 0xc8d13d5d140f1047ULL;
          static const uint64_t static_value2 = 0xa2e4d3bf5c045822ULL;
      }; // end struct MD5Sum<turtle_actionlib::ShapeActionResult>

      template <> struct DataType<turtle_actionlib::ShapeActionResult>
      {
          static const char * value() { return "turtle_actionlib/ShapeActionResult";};
      }; // end DataType

      template <> struct Definition<turtle_actionlib::ShapeActionResult>
      {
          static const char * value()
          { 
              return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\nHeader header\nactionlib_msgs/GoalStatus status\nShapeResult result\n\n================================================================================\nMSG: std_msgs/Header\n# Standard metadata for higher-level stamped data types.\n# This is generally used to communicate timestamped data \n# in a particular coordinate frame.\n# \n# sequence ID: consecutively increasing ID \nuint32 seq\n#Two-integer timestamp that is expressed as:\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n# time-handling sugar is provided by the client library\ntime stamp\n#Frame this data is associated with\n# 0: no frame\n# 1: global frame\nstring frame_id\n\n================================================================================\nMSG: actionlib_msgs/GoalStatus\nGoalID goal_id\nuint8 status\nuint8 PENDING         = 0   # The goal has yet to be processed by the action server\nuint8 ACTIVE          = 1   # The goal is currently being processed by the action server\nuint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n                            #   and has since completed its execution (Terminal State)\nuint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\nuint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n                            #    to some failure (Terminal State)\nuint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n                            #    because the goal was unattainable or invalid (Terminal State)\nuint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n                            #    and has not yet completed execution\nuint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n                            #    but the action server has not yet confirmed that the goal is canceled\nuint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n                            #    and was successfully cancelled (Terminal State)\nuint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n                            #    sent over the wire by an action server\n\n#Allow for the user to associate a string with GoalStatus for debugging\nstring text\n\n\n================================================================================\nMSG: actionlib_msgs/GoalID\n# The stamp should store the time at which this goal was requested.\n# It is used by an action server when it tries to preempt all\n# goals that were requested before a certain time\ntime stamp\n\n# The id provides a way to associate feedback and\n# result message with specific goal requests. The id\n# specified must be unique.\nstring id\n\n\n================================================================================\nMSG: turtle_actionlib/ShapeResult\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n#result definition\nfloat32 interior_angle\nfloat32 apothem\n";
          };
      };

      template <> struct MD5Sum<turtle_actionlib::ShapeFeedback>
      {

          static const char * value() 
          { 
              return "d41d8cd98f00b204e9800998ecf8427e"; 
          };

          static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
          static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
      }; // end struct MD5Sum<turtle_actionlib::ShapeFeedback>

      template <> struct DataType<turtle_actionlib::ShapeFeedback>
      {
          static const char * value() { return "turtle_actionlib/ShapeFeedback";};
      }; // end DataType

      template <> struct Definition<turtle_actionlib::ShapeFeedback>
      {
          static const char * value()
          { 
              return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n#feedback\n\n\n";
          };
      };

      template <> struct MD5Sum<turtle_actionlib::ShapeGoal>
      {

          static const char * value() 
          { 
              return "3b9202ab7292cebe5a95ab2bf6b9c091"; 
          };

          static const uint64_t static_value1 = 0x3b9202ab7292cebeULL;
          static const uint64_t static_value2 = 0x5a95ab2bf6b9c091ULL;
      }; // end struct MD5Sum<turtle_actionlib::ShapeGoal>

      template <> struct DataType<turtle_actionlib::ShapeGoal>
      {
          static const char * value() { return "turtle_actionlib/ShapeGoal";};
      }; // end DataType

      template <> struct Definition<turtle_actionlib::ShapeGoal>
      {
          static const char * value()
          { 
              return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n#goal definition\nint32 edges\nfloat32 radius\n";
          };
      };

      template <> struct MD5Sum<turtle_actionlib::ShapeResult>
      {

          static const char * value() 
          { 
              return "b06c6e2225f820dbc644270387cd1a7c"; 
          };

          static const uint64_t static_value1 = 0xb06c6e2225f820dbULL;
          static const uint64_t static_value2 = 0xc644270387cd1a7cULL;
      }; // end struct MD5Sum<turtle_actionlib::ShapeResult>

      template <> struct DataType<turtle_actionlib::ShapeResult>
      {
          static const char * value() { return "turtle_actionlib/ShapeResult";};
      }; // end DataType

      template <> struct Definition<turtle_actionlib::ShapeResult>
      {
          static const char * value()
          { 
              return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n#result definition\nfloat32 interior_angle\nfloat32 apothem\n";
          };
      };

      template <> struct MD5Sum<turtle_actionlib::Velocity>
      {

          static const char * value() 
          { 
              return "9d5c2dcd348ac8f76ce2a4307bd63a13"; 
          };

          static const uint64_t static_value1 = 0x9d5c2dcd348ac8f7ULL;
          static const uint64_t static_value2 = 0x6ce2a4307bd63a13ULL;
      }; // end struct MD5Sum<turtle_actionlib::Velocity>

      template <> struct DataType<turtle_actionlib::Velocity>
      {
          static const char * value() { return "turtle_actionlib/Velocity";};
      }; // end DataType

      template <> struct Definition<turtle_actionlib::Velocity>
      {
          static const char * value()
          { 
              return "# Copied from turtlesim https://github.com/ros/ros_tutorials/blob/f7da7779e82dcc3977b2c220a843cd86dd269832/turtlesim/msg/Velocity.msg. We had to copy this into this package since it has been replaced with geometry_msgs/Twist there and comforming to Twist requires to change code, which I doubt worth time it takes. So if you think it is, please go ahead make a patch.\n\nfloat32 linear\nfloat32 angular\n";
          };
      };

  }; // end namespace message_traits

}; // namespace ros

#endif // _CODEGEN_TURTLE_ACTIONLIB_GENCPP_ROS_H_
