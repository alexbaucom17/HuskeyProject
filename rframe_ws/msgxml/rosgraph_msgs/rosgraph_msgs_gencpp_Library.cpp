// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:52 -0500
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

#include "rosgraph_msgs_gencpp_Library.h"
#include <common/Log.h>
#include <common/TypeRegistry.h>
#include <messaging/Message.h>

#include <rosgraph_msgs/Clock.h>
#include <rosgraph_msgs/Log.h>
#include <rosgraph_msgs/TopicStatistics.h>

extern "C"
{
    /** library access method */
    int rframeRegisterDataLibrary()
    {
        return rosgraph_msgs::registerLibrary();
    };
}

namespace rosgraph_msgs
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
            case Clock::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<Clock>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case Log::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<Log>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case TopicStatistics::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<TopicStatistics>(),std::bind(deallocateMessage,std::placeholders::_1));
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
    //int register_rosgraph_msgs_gencpp()
    int registerLibrary()
    {
        int retval = rframe::Error::SUCCESS;
        static bool registered = false;
        rframe::TypeRegistry & reg = rframe::TypeRegistry::instance();

        LOG_INFO("registering data for library: rosgraph_msgs_gencpp");

        if (registered == false)
        {
            registered = true;

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = rosgraph_msgs::Clock::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<rosgraph_msgs::Clock>(
                    // boost::lambda::new_ptr<rosgraph_msgs::Clock>(),
                    [](){ return new rosgraph_msgs::Clock(); },
                                std::bind(allocateMessage,rosgraph_msgs::Clock::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: Clock");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = rosgraph_msgs::Clock::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(rosgraph_msgs::Clock::DATA_TYPE_NAME,rosgraph_msgs::Clock::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: Clock");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = rosgraph_msgs::Log::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<rosgraph_msgs::Log>(
                    // boost::lambda::new_ptr<rosgraph_msgs::Log>(),
                    [](){ return new rosgraph_msgs::Log(); },
                                std::bind(allocateMessage,rosgraph_msgs::Log::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: Log");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = rosgraph_msgs::Log::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(rosgraph_msgs::Log::DATA_TYPE_NAME,rosgraph_msgs::Log::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: Log");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = rosgraph_msgs::TopicStatistics::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<rosgraph_msgs::TopicStatistics>(
                    // boost::lambda::new_ptr<rosgraph_msgs::TopicStatistics>(),
                    [](){ return new rosgraph_msgs::TopicStatistics(); },
                                std::bind(allocateMessage,rosgraph_msgs::TopicStatistics::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: TopicStatistics");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = rosgraph_msgs::TopicStatistics::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(rosgraph_msgs::TopicStatistics::DATA_TYPE_NAME,rosgraph_msgs::TopicStatistics::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: TopicStatistics");
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
  Generated by:         alex on alex-laptop, 2016-11-23 12:44:34 -0500\
  From Template/Script: rosToXML.rb\
 \
\
-->\
<classes library_name=\"rosgraph_msgs_gencpp\" namespace=\"rosgraph_msgs\">\
\
<class name=\"Clock\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"a9c97c1d230cfc112e270351a944ee47\" rosDesc=\"# roslib/Clock is used for publishing simulated time in ROS. \\n# This message simply communicates the current time.\\n# For more information, see http://www.ros.org/wiki/Clock\\ntime clock\\n\" comment=\"roslib/Clock is used for publishing simulated time in ROS.   This message simply communicates the current time.  For more information, see http://www.ros.org/wiki/Clock\">\
  <field name=\"clock\" type=\"std_msgs::RosTime\" sourceType=\"time\" comment=\"\"/>\
</class>\
\
<class name=\"Log\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"acffd30cd6b6de30f120938c17c593fb\" rosDesc=\"##\\n## Severity level constants\\n##\\nbyte DEBUG=1 #debug level\\nbyte INFO=2  #general level\\nbyte WARN=4  #warning level\\nbyte ERROR=8 #error level\\nbyte FATAL=16 #fatal/critical level\\n##\\n## Fields\\n##\\nHeader header\\nbyte level\\nstring name # name of the node\\nstring msg # message \\nstring file # file the message came from\\nstring function # function the message came from\\nuint32 line # line the message came from\\nstring[] topics # topic names that the node publishes\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\" comment=\"\">\
  <constant init=\"1\" name=\"DEBUG\" type=\"char\" sourceType=\"byte\" comment=\"debug level\"/>\
  <constant init=\"2\" name=\"INFO\" type=\"char\" sourceType=\"byte\" comment=\"general level\"/>\
  <constant init=\"4\" name=\"WARN\" type=\"char\" sourceType=\"byte\" comment=\"warning level\"/>\
  <constant init=\"8\" name=\"ERROR\" type=\"char\" sourceType=\"byte\" comment=\"error level\"/>\
  <constant init=\"16\" name=\"FATAL\" type=\"char\" sourceType=\"byte\" comment=\"fatal/critical level\"/>\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"\"/>\
  <field name=\"level\" type=\"char\" sourceType=\"byte\" comment=\"\"/>\
  <field name=\"name\" type=\"string\" sourceType=\"string\" comment=\"name of the node\"/>\
  <field name=\"msg\" type=\"string\" sourceType=\"string\" comment=\"message\"/>\
  <field name=\"file\" type=\"string\" sourceType=\"string\" comment=\"file the message came from\"/>\
  <field name=\"function\" type=\"string\" sourceType=\"string\" comment=\"function the message came from\"/>\
  <field name=\"line\" type=\"unsigned int\" sourceType=\"uint32\" comment=\"line the message came from\"/>\
  <field name=\"topics\" type=\"vector(string)\" sourceType=\"string\" comment=\"topic names that the node publishes\"/>\
</class>\
\
<class name=\"TopicStatistics\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"10152ed868c5097a5e2e4a89d7daa710\" rosDesc=\"# name of the topic\\nstring topic\\n\\n# node id of the publisher\\nstring node_pub\\n\\n# node id of the subscriber\\nstring node_sub\\n\\n# the statistics apply to this time window\\ntime window_start\\ntime window_stop\\n\\n# number of messages delivered during the window\\nint32 delivered_msgs\\n# numbers of messages dropped during the window\\nint32 dropped_msgs\\n\\n# traffic during the window, in bytes\\nint32 traffic\\n\\n# mean/stddev/max period between two messages\\nduration period_mean\\nduration period_stddev\\nduration period_max\\n\\n# mean/stddev/max age of the message based on the\\n# timestamp in the message header. In case the\\n# message does not have a header, it will be 0.\\nduration stamp_age_mean\\nduration stamp_age_stddev\\nduration stamp_age_max\\n\" comment=\"name of the topic\">\
  <field name=\"topic\" type=\"string\" sourceType=\"string\" comment=\"node id of the publisher\"/>\
  <field name=\"node_pub\" type=\"string\" sourceType=\"string\" comment=\"node id of the subscriber\"/>\
  <field name=\"node_sub\" type=\"string\" sourceType=\"string\" comment=\"the statistics apply to this time window\"/>\
  <field name=\"window_start\" type=\"std_msgs::RosTime\" sourceType=\"time\" comment=\"\"/>\
  <field name=\"window_stop\" type=\"std_msgs::RosTime\" sourceType=\"time\" comment=\"number of messages delivered during the window\"/>\
  <field name=\"delivered_msgs\" type=\"int\" sourceType=\"int32\" comment=\"numbers of messages dropped during the window\"/>\
  <field name=\"dropped_msgs\" type=\"int\" sourceType=\"int32\" comment=\"traffic during the window, in bytes\"/>\
  <field name=\"traffic\" type=\"int\" sourceType=\"int32\" comment=\"mean/stddev/max period between two messages\"/>\
  <field name=\"period_mean\" type=\"std_msgs::RosDuration\" sourceType=\"duration\" comment=\"\"/>\
  <field name=\"period_stddev\" type=\"std_msgs::RosDuration\" sourceType=\"duration\" comment=\"\"/>\
  <field name=\"period_max\" type=\"std_msgs::RosDuration\" sourceType=\"duration\" comment=\"mean/stddev/max age of the message based on the  timestamp in the message header. In case the  message does not have a header, it will be 0.\"/>\
  <field name=\"stamp_age_mean\" type=\"std_msgs::RosDuration\" sourceType=\"duration\" comment=\"\"/>\
  <field name=\"stamp_age_stddev\" type=\"std_msgs::RosDuration\" sourceType=\"duration\" comment=\"\"/>\
  <field name=\"stamp_age_max\" type=\"std_msgs::RosDuration\" sourceType=\"duration\" comment=\"\"/>\
</class>\
\
<dependency name=\"std_msgs_gencpp\"/>\
<dependency name=\"std_srvs_gencpp\"/>\
\
</classes>\
";
    }

}; // end namespace rosgraph_msgs
