// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:09 -0500
//  From Template/Script: data_templates/DataLibraryTemplate.cpp
 
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

#include "turtle_actionlib_gencpp_Library.h"
#include <common/Log.h>
#include <common/TypeRegistry.h>
#include <messaging/Message.h>

#include <turtle_actionlib/ShapeAction.h>
#include <turtle_actionlib/ShapeActionFeedback.h>
#include <turtle_actionlib/ShapeActionGoal.h>
#include <turtle_actionlib/ShapeActionResult.h>
#include <turtle_actionlib/ShapeFeedback.h>
#include <turtle_actionlib/ShapeGoal.h>
#include <turtle_actionlib/ShapeResult.h>
#include <turtle_actionlib/Velocity.h>

extern "C"
{
    /** library access method */
    int rframeRegisterDataLibrary()
    {
        return turtle_actionlib::registerLibrary();
    };
}

namespace turtle_actionlib
{

    static void deallocateMessage(MessageBase * msg)
    {
        delete msg;
    }

    static int allocateMessage(rframe::ID_TYPE id, std::shared_ptr<MessageBase> & msg)
    {
        int retval = rframe::Error::SUCCESS;
        bool found = true;
        switch (id)
        { 
            case ShapeAction::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<ShapeAction>(),std::bind(deallocateMessage,std::placeholders::_1));
                if (tempMsg.get() == NULL)
                {
                    retval = rframe::Error::MEMORY_ALLOC;
                } 
                else
                {
                    msg.swap(tempMsg);
                }
                break;
            } 
            case ShapeActionFeedback::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<ShapeActionFeedback>(),std::bind(deallocateMessage,std::placeholders::_1));
                if (tempMsg.get() == NULL)
                {
                    retval = rframe::Error::MEMORY_ALLOC;
                } 
                else
                {
                    msg.swap(tempMsg);
                }
                break;
            } 
            case ShapeActionGoal::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<ShapeActionGoal>(),std::bind(deallocateMessage,std::placeholders::_1));
                if (tempMsg.get() == NULL)
                {
                    retval = rframe::Error::MEMORY_ALLOC;
                } 
                else
                {
                    msg.swap(tempMsg);
                }
                break;
            } 
            case ShapeActionResult::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<ShapeActionResult>(),std::bind(deallocateMessage,std::placeholders::_1));
                if (tempMsg.get() == NULL)
                {
                    retval = rframe::Error::MEMORY_ALLOC;
                } 
                else
                {
                    msg.swap(tempMsg);
                }
                break;
            } 
            case ShapeFeedback::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<ShapeFeedback>(),std::bind(deallocateMessage,std::placeholders::_1));
                if (tempMsg.get() == NULL)
                {
                    retval = rframe::Error::MEMORY_ALLOC;
                } 
                else
                {
                    msg.swap(tempMsg);
                }
                break;
            } 
            case ShapeGoal::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<ShapeGoal>(),std::bind(deallocateMessage,std::placeholders::_1));
                if (tempMsg.get() == NULL)
                {
                    retval = rframe::Error::MEMORY_ALLOC;
                } 
                else
                {
                    msg.swap(tempMsg);
                }
                break;
            } 
            case ShapeResult::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<ShapeResult>(),std::bind(deallocateMessage,std::placeholders::_1));
                if (tempMsg.get() == NULL)
                {
                    retval = rframe::Error::MEMORY_ALLOC;
                } 
                else
                {
                    msg.swap(tempMsg);
                }
                break;
            } 
            case Velocity::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<Velocity>(),std::bind(deallocateMessage,std::placeholders::_1));
                if (tempMsg.get() == NULL)
                {
                    retval = rframe::Error::MEMORY_ALLOC;
                } 
                else
                {
                    msg.swap(tempMsg);
                }
                break;
            } 
            default:
            {
                found = false;
            }
        }

        if (found == false)
        {
            retval = rframe::Error::PARAM_RANGE;
        }
        else if (msg.get() == NULL)
        {
            retval = rframe::Error::MEMORY_ALLOC;
        }
        else if (msg.get() != NULL)
        {
            retval = rframe::Error::SUCCESS;
        }

        return retval;
    }

    /** registry this data set with the system */
    //int register_turtle_actionlib_gencpp()
    int registerLibrary()
    {
        int retval = rframe::Error::SUCCESS;
        static bool registered = false;
        rframe::TypeRegistry & reg = rframe::TypeRegistry::instance();

        LOG_INFO("registering data for library: turtle_actionlib_gencpp");

        if (registered == false)
        {
            registered = true;

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtle_actionlib::ShapeAction::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtle_actionlib::ShapeAction>(
                    // boost::lambda::new_ptr<turtle_actionlib::ShapeAction>(),
                    [](){ return new turtle_actionlib::ShapeAction(); },
                                std::bind(allocateMessage,turtle_actionlib::ShapeAction::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: ShapeAction");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtle_actionlib::ShapeAction::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtle_actionlib::ShapeAction::DATA_TYPE_NAME,turtle_actionlib::ShapeAction::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: ShapeAction");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtle_actionlib::ShapeActionFeedback::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtle_actionlib::ShapeActionFeedback>(
                    // boost::lambda::new_ptr<turtle_actionlib::ShapeActionFeedback>(),
                    [](){ return new turtle_actionlib::ShapeActionFeedback(); },
                                std::bind(allocateMessage,turtle_actionlib::ShapeActionFeedback::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: ShapeActionFeedback");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtle_actionlib::ShapeActionFeedback::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtle_actionlib::ShapeActionFeedback::DATA_TYPE_NAME,turtle_actionlib::ShapeActionFeedback::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: ShapeActionFeedback");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtle_actionlib::ShapeActionGoal::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtle_actionlib::ShapeActionGoal>(
                    // boost::lambda::new_ptr<turtle_actionlib::ShapeActionGoal>(),
                    [](){ return new turtle_actionlib::ShapeActionGoal(); },
                                std::bind(allocateMessage,turtle_actionlib::ShapeActionGoal::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: ShapeActionGoal");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtle_actionlib::ShapeActionGoal::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtle_actionlib::ShapeActionGoal::DATA_TYPE_NAME,turtle_actionlib::ShapeActionGoal::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: ShapeActionGoal");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtle_actionlib::ShapeActionResult::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtle_actionlib::ShapeActionResult>(
                    // boost::lambda::new_ptr<turtle_actionlib::ShapeActionResult>(),
                    [](){ return new turtle_actionlib::ShapeActionResult(); },
                                std::bind(allocateMessage,turtle_actionlib::ShapeActionResult::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: ShapeActionResult");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtle_actionlib::ShapeActionResult::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtle_actionlib::ShapeActionResult::DATA_TYPE_NAME,turtle_actionlib::ShapeActionResult::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: ShapeActionResult");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtle_actionlib::ShapeFeedback::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtle_actionlib::ShapeFeedback>(
                    // boost::lambda::new_ptr<turtle_actionlib::ShapeFeedback>(),
                    [](){ return new turtle_actionlib::ShapeFeedback(); },
                                std::bind(allocateMessage,turtle_actionlib::ShapeFeedback::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: ShapeFeedback");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtle_actionlib::ShapeFeedback::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtle_actionlib::ShapeFeedback::DATA_TYPE_NAME,turtle_actionlib::ShapeFeedback::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: ShapeFeedback");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtle_actionlib::ShapeGoal::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtle_actionlib::ShapeGoal>(
                    // boost::lambda::new_ptr<turtle_actionlib::ShapeGoal>(),
                    [](){ return new turtle_actionlib::ShapeGoal(); },
                                std::bind(allocateMessage,turtle_actionlib::ShapeGoal::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: ShapeGoal");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtle_actionlib::ShapeGoal::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtle_actionlib::ShapeGoal::DATA_TYPE_NAME,turtle_actionlib::ShapeGoal::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: ShapeGoal");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtle_actionlib::ShapeResult::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtle_actionlib::ShapeResult>(
                    // boost::lambda::new_ptr<turtle_actionlib::ShapeResult>(),
                    [](){ return new turtle_actionlib::ShapeResult(); },
                                std::bind(allocateMessage,turtle_actionlib::ShapeResult::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: ShapeResult");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtle_actionlib::ShapeResult::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtle_actionlib::ShapeResult::DATA_TYPE_NAME,turtle_actionlib::ShapeResult::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: ShapeResult");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtle_actionlib::Velocity::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtle_actionlib::Velocity>(
                    // boost::lambda::new_ptr<turtle_actionlib::Velocity>(),
                    [](){ return new turtle_actionlib::Velocity(); },
                                std::bind(allocateMessage,turtle_actionlib::Velocity::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: Velocity");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtle_actionlib::Velocity::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtle_actionlib::Velocity::DATA_TYPE_NAME,turtle_actionlib::Velocity::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: Velocity");
            }

        }

        return retval;
    };

    std::string xmlSource()
    {
        return "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\
<!--\
 \
  AUTOGENERATED FILE:   do not edit\
\
  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:01 -0500\
  From Template/Script: rosToXML.rb\
 \
\
-->\
<classes library_name=\"turtle_actionlib_gencpp\" namespace=\"turtle_actionlib\">\
\
<class name=\"ShapeAction\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"d73b17d6237a925511f5d7727a1dc903\" rosDesc=\"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n\\nShapeActionGoal action_goal\\nShapeActionResult action_result\\nShapeActionFeedback action_feedback\\n\\n================================================================================\\nMSG: turtle_actionlib/ShapeActionGoal\\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n\\nHeader header\\nactionlib_msgs/GoalID goal_id\\nShapeGoal goal\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: actionlib_msgs/GoalID\\n# The stamp should store the time at which this goal was requested.\\n# It is used by an action server when it tries to preempt all\\n# goals that were requested before a certain time\\ntime stamp\\n\\n# The id provides a way to associate feedback and\\n# result message with specific goal requests. The id\\n# specified must be unique.\\nstring id\\n\\n\\n================================================================================\\nMSG: turtle_actionlib/ShapeGoal\\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n#goal definition\\nint32 edges\\nfloat32 radius\\n\\n================================================================================\\nMSG: turtle_actionlib/ShapeActionResult\\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n\\nHeader header\\nactionlib_msgs/GoalStatus status\\nShapeResult result\\n\\n================================================================================\\nMSG: actionlib_msgs/GoalStatus\\nGoalID goal_id\\nuint8 status\\nuint8 PENDING         = 0   # The goal has yet to be processed by the action server\\nuint8 ACTIVE          = 1   # The goal is currently being processed by the action server\\nuint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\\n                            #   and has since completed its execution (Terminal State)\\nuint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\\nuint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\\n                            #    to some failure (Terminal State)\\nuint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\\n                            #    because the goal was unattainable or invalid (Terminal State)\\nuint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\\n                            #    and has not yet completed execution\\nuint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\\n                            #    but the action server has not yet confirmed that the goal is canceled\\nuint8 RECALLED        = 8   # The goal received a cancel request before it started executing\\n                            #    and was successfully cancelled (Terminal State)\\nuint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\\n                            #    sent over the wire by an action server\\n\\n#Allow for the user to associate a string with GoalStatus for debugging\\nstring text\\n\\n\\n================================================================================\\nMSG: turtle_actionlib/ShapeResult\\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n#result definition\\nfloat32 interior_angle\\nfloat32 apothem\\n\\n================================================================================\\nMSG: turtle_actionlib/ShapeActionFeedback\\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n\\nHeader header\\nactionlib_msgs/GoalStatus status\\nShapeFeedback feedback\\n\\n================================================================================\\nMSG: turtle_actionlib/ShapeFeedback\\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n#feedback\\n\\n\\n\" comment=\"====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\">\
  <field name=\"action_goal\" type=\"ShapeActionGoal\" sourceType=\"ShapeActionGoal\" comment=\"\"/>\
  <field name=\"action_result\" type=\"ShapeActionResult\" sourceType=\"ShapeActionResult\" comment=\"\"/>\
  <field name=\"action_feedback\" type=\"ShapeActionFeedback\" sourceType=\"ShapeActionFeedback\" comment=\"\"/>\
</class>\
\
<class name=\"ShapeActionFeedback\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"aae20e09065c3809e8a8e87c4c8953fd\" rosDesc=\"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n\\nHeader header\\nactionlib_msgs/GoalStatus status\\nShapeFeedback feedback\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: actionlib_msgs/GoalStatus\\nGoalID goal_id\\nuint8 status\\nuint8 PENDING         = 0   # The goal has yet to be processed by the action server\\nuint8 ACTIVE          = 1   # The goal is currently being processed by the action server\\nuint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\\n                            #   and has since completed its execution (Terminal State)\\nuint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\\nuint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\\n                            #    to some failure (Terminal State)\\nuint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\\n                            #    because the goal was unattainable or invalid (Terminal State)\\nuint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\\n                            #    and has not yet completed execution\\nuint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\\n                            #    but the action server has not yet confirmed that the goal is canceled\\nuint8 RECALLED        = 8   # The goal received a cancel request before it started executing\\n                            #    and was successfully cancelled (Terminal State)\\nuint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\\n                            #    sent over the wire by an action server\\n\\n#Allow for the user to associate a string with GoalStatus for debugging\\nstring text\\n\\n\\n================================================================================\\nMSG: actionlib_msgs/GoalID\\n# The stamp should store the time at which this goal was requested.\\n# It is used by an action server when it tries to preempt all\\n# goals that were requested before a certain time\\ntime stamp\\n\\n# The id provides a way to associate feedback and\\n# result message with specific goal requests. The id\\n# specified must be unique.\\nstring id\\n\\n\\n================================================================================\\nMSG: turtle_actionlib/ShapeFeedback\\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n#feedback\\n\\n\\n\" comment=\"====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"\"/>\
  <field name=\"status\" type=\"actionlib_msgs::GoalStatus\" sourceType=\"actionlib_msgs::GoalStatus\" comment=\"\"/>\
  <field name=\"feedback\" type=\"ShapeFeedback\" sourceType=\"ShapeFeedback\" comment=\"\"/>\
</class>\
\
<class name=\"ShapeActionGoal\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"dbfccd187f2ec9c593916447ffd6cc77\" rosDesc=\"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n\\nHeader header\\nactionlib_msgs/GoalID goal_id\\nShapeGoal goal\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: actionlib_msgs/GoalID\\n# The stamp should store the time at which this goal was requested.\\n# It is used by an action server when it tries to preempt all\\n# goals that were requested before a certain time\\ntime stamp\\n\\n# The id provides a way to associate feedback and\\n# result message with specific goal requests. The id\\n# specified must be unique.\\nstring id\\n\\n\\n================================================================================\\nMSG: turtle_actionlib/ShapeGoal\\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n#goal definition\\nint32 edges\\nfloat32 radius\\n\" comment=\"====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"\"/>\
  <field name=\"goal_id\" type=\"actionlib_msgs::GoalID\" sourceType=\"actionlib_msgs::GoalID\" comment=\"\"/>\
  <field name=\"goal\" type=\"ShapeGoal\" sourceType=\"ShapeGoal\" comment=\"\"/>\
</class>\
\
<class name=\"ShapeActionResult\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"c8d13d5d140f1047a2e4d3bf5c045822\" rosDesc=\"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n\\nHeader header\\nactionlib_msgs/GoalStatus status\\nShapeResult result\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: actionlib_msgs/GoalStatus\\nGoalID goal_id\\nuint8 status\\nuint8 PENDING         = 0   # The goal has yet to be processed by the action server\\nuint8 ACTIVE          = 1   # The goal is currently being processed by the action server\\nuint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\\n                            #   and has since completed its execution (Terminal State)\\nuint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\\nuint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\\n                            #    to some failure (Terminal State)\\nuint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\\n                            #    because the goal was unattainable or invalid (Terminal State)\\nuint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\\n                            #    and has not yet completed execution\\nuint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\\n                            #    but the action server has not yet confirmed that the goal is canceled\\nuint8 RECALLED        = 8   # The goal received a cancel request before it started executing\\n                            #    and was successfully cancelled (Terminal State)\\nuint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\\n                            #    sent over the wire by an action server\\n\\n#Allow for the user to associate a string with GoalStatus for debugging\\nstring text\\n\\n\\n================================================================================\\nMSG: actionlib_msgs/GoalID\\n# The stamp should store the time at which this goal was requested.\\n# It is used by an action server when it tries to preempt all\\n# goals that were requested before a certain time\\ntime stamp\\n\\n# The id provides a way to associate feedback and\\n# result message with specific goal requests. The id\\n# specified must be unique.\\nstring id\\n\\n\\n================================================================================\\nMSG: turtle_actionlib/ShapeResult\\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n#result definition\\nfloat32 interior_angle\\nfloat32 apothem\\n\" comment=\"====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"\"/>\
  <field name=\"status\" type=\"actionlib_msgs::GoalStatus\" sourceType=\"actionlib_msgs::GoalStatus\" comment=\"\"/>\
  <field name=\"result\" type=\"ShapeResult\" sourceType=\"ShapeResult\" comment=\"\"/>\
</class>\
\
<class name=\"ShapeFeedback\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"d41d8cd98f00b204e9800998ecf8427e\" rosDesc=\"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n#feedback\\n\\n\\n\" comment=\"====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ====== feedback\">\
</class>\
\
<class name=\"ShapeGoal\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"3b9202ab7292cebe5a95ab2bf6b9c091\" rosDesc=\"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n#goal definition\\nint32 edges\\nfloat32 radius\\n\" comment=\"====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ====== goal definition\">\
  <field name=\"edges\" type=\"int\" sourceType=\"int32\" comment=\"\"/>\
  <field name=\"radius\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
</class>\
\
<class name=\"ShapeResult\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"b06c6e2225f820dbc644270387cd1a7c\" rosDesc=\"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n#result definition\\nfloat32 interior_angle\\nfloat32 apothem\\n\" comment=\"====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ====== result definition\">\
  <field name=\"interior_angle\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <field name=\"apothem\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
</class>\
\
<class name=\"Velocity\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"9d5c2dcd348ac8f76ce2a4307bd63a13\" rosDesc=\"# Copied from turtlesim https://github.com/ros/ros_tutorials/blob/f7da7779e82dcc3977b2c220a843cd86dd269832/turtlesim/msg/Velocity.msg. We had to copy this into this package since it has been replaced with geometry_msgs/Twist there and comforming to Twist requires to change code, which I doubt worth time it takes. So if you think it is, please go ahead make a patch.\\n\\nfloat32 linear\\nfloat32 angular\\n\" comment=\"Copied from turtlesim https://github.com/ros/ros_tutorials/blob/f7da7779e82dcc3977b2c220a843cd86dd269832/turtlesim/msg/Velocity.msg. We had to copy this into this package since it has been replaced with geometry_msgs/Twist there and comforming to Twist requires to change code, which I doubt worth time it takes. So if you think it is, please go ahead make a patch.\">\
  <field name=\"linear\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <field name=\"angular\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
</class>\
\
<dependency name=\"actionlib_msgs_gencpp\"/>\
<dependency name=\"std_msgs_gencpp\"/>\
<dependency name=\"std_srvs_gencpp\"/>\
\
</classes>\
";
    }

}; // end namespace turtle_actionlib

