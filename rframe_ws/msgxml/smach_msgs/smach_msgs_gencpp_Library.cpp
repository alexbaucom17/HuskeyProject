// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:07 -0500
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

#include "smach_msgs_gencpp_Library.h"
#include <common/Log.h>
#include <common/TypeRegistry.h>
#include <messaging/Message.h>

#include <smach_msgs/SmachContainerInitialStatusCmd.h>
#include <smach_msgs/SmachContainerStatus.h>
#include <smach_msgs/SmachContainerStructure.h>

extern "C"
{
    /** library access method */
    int rframeRegisterDataLibrary()
    {
        return smach_msgs::registerLibrary();
    };
}

namespace smach_msgs
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
            case SmachContainerInitialStatusCmd::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<SmachContainerInitialStatusCmd>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case SmachContainerStatus::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<SmachContainerStatus>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case SmachContainerStructure::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<SmachContainerStructure>(),std::bind(deallocateMessage,std::placeholders::_1));
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
    //int register_smach_msgs_gencpp()
    int registerLibrary()
    {
        int retval = rframe::Error::SUCCESS;
        static bool registered = false;
        rframe::TypeRegistry & reg = rframe::TypeRegistry::instance();

        LOG_INFO("registering data for library: smach_msgs_gencpp");

        if (registered == false)
        {
            registered = true;

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = smach_msgs::SmachContainerInitialStatusCmd::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<smach_msgs::SmachContainerInitialStatusCmd>(
                    // boost::lambda::new_ptr<smach_msgs::SmachContainerInitialStatusCmd>(),
                    [](){ return new smach_msgs::SmachContainerInitialStatusCmd(); },
                                std::bind(allocateMessage,smach_msgs::SmachContainerInitialStatusCmd::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: SmachContainerInitialStatusCmd");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = smach_msgs::SmachContainerInitialStatusCmd::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(smach_msgs::SmachContainerInitialStatusCmd::DATA_TYPE_NAME,smach_msgs::SmachContainerInitialStatusCmd::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: SmachContainerInitialStatusCmd");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = smach_msgs::SmachContainerStatus::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<smach_msgs::SmachContainerStatus>(
                    // boost::lambda::new_ptr<smach_msgs::SmachContainerStatus>(),
                    [](){ return new smach_msgs::SmachContainerStatus(); },
                                std::bind(allocateMessage,smach_msgs::SmachContainerStatus::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: SmachContainerStatus");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = smach_msgs::SmachContainerStatus::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(smach_msgs::SmachContainerStatus::DATA_TYPE_NAME,smach_msgs::SmachContainerStatus::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: SmachContainerStatus");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = smach_msgs::SmachContainerStructure::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<smach_msgs::SmachContainerStructure>(
                    // boost::lambda::new_ptr<smach_msgs::SmachContainerStructure>(),
                    [](){ return new smach_msgs::SmachContainerStructure(); },
                                std::bind(allocateMessage,smach_msgs::SmachContainerStructure::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: SmachContainerStructure");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = smach_msgs::SmachContainerStructure::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(smach_msgs::SmachContainerStructure::DATA_TYPE_NAME,smach_msgs::SmachContainerStructure::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: SmachContainerStructure");
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
  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:00 -0500\
  From Template/Script: rosToXML.rb\
 \
\
-->\
<classes library_name=\"smach_msgs_gencpp\" namespace=\"smach_msgs\">\
\
<class name=\"SmachContainerInitialStatusCmd\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"45f8cf31fc29b829db77f23001f788d6\" rosDesc=\"# The path to the node in the server\\nstring path\\n\\n# The desired initial state(s)\\nstring[] initial_states\\n\\n# Initial values for the local user data of the state machine\\n# A pickled user data structure\\n# i.e. the UserData's internal dictionary\\nstring local_data\\n\" comment=\"The path to the node in the server\">\
  <field name=\"path\" type=\"string\" sourceType=\"string\" comment=\"The desired initial state(s)\"/>\
  <field name=\"initial_states\" type=\"vector(string)\" sourceType=\"string\" comment=\"Initial values for the local user data of the state machine  A pickled user data structure  i.e. the UserData's internal dictionary\"/>\
  <field name=\"local_data\" type=\"string\" sourceType=\"string\" comment=\"\"/>\
</class>\
\
<class name=\"SmachContainerStatus\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"5ba2bb79ac19e3842d562a191f2a675b\" rosDesc=\"Header header\\n\\n# The path to this node in the server\\nstring path\\n\\n# The initial state description\\n# Effects an arc from the top state to each one\\nstring[] initial_states\\n\\n# The current state description\\nstring[] active_states\\n\\n# A pickled user data structure\\n# i.e. the UserData's internal dictionary\\nstring local_data\\n\\n# Debugging info string\\nstring info\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\" comment=\"\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"The path to this node in the server\"/>\
  <field name=\"path\" type=\"string\" sourceType=\"string\" comment=\"The initial state description  Effects an arc from the top state to each one\"/>\
  <field name=\"initial_states\" type=\"vector(string)\" sourceType=\"string\" comment=\"The current state description\"/>\
  <field name=\"active_states\" type=\"vector(string)\" sourceType=\"string\" comment=\"A pickled user data structure  i.e. the UserData's internal dictionary\"/>\
  <field name=\"local_data\" type=\"string\" sourceType=\"string\" comment=\"Debugging info string\"/>\
  <field name=\"info\" type=\"string\" sourceType=\"string\" comment=\"\"/>\
</class>\
\
<class name=\"SmachContainerStructure\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"3d3d1e0d0f99779ee9e58101a5dcf7ea\" rosDesc=\"Header header\\n\\n# The path to this node in the server\\nstring path\\n\\n# The children of this node\\nstring[] children\\n\\n# The outcome edges\\n# Each index across these arrays denote one edge\\nstring[] internal_outcomes\\nstring[] outcomes_from\\nstring[] outcomes_to\\n\\n# The potential outcomes from this container\\nstring[] container_outcomes\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\" comment=\"\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"The path to this node in the server\"/>\
  <field name=\"path\" type=\"string\" sourceType=\"string\" comment=\"The children of this node\"/>\
  <field name=\"children\" type=\"vector(string)\" sourceType=\"string\" comment=\"The outcome edges  Each index across these arrays denote one edge\"/>\
  <field name=\"internal_outcomes\" type=\"vector(string)\" sourceType=\"string\" comment=\"\"/>\
  <field name=\"outcomes_from\" type=\"vector(string)\" sourceType=\"string\" comment=\"\"/>\
  <field name=\"outcomes_to\" type=\"vector(string)\" sourceType=\"string\" comment=\"The potential outcomes from this container\"/>\
  <field name=\"container_outcomes\" type=\"vector(string)\" sourceType=\"string\" comment=\"\"/>\
</class>\
\
<dependency name=\"std_msgs_gencpp\"/>\
<dependency name=\"std_srvs_gencpp\"/>\
\
</classes>\
";
    }

}; // end namespace smach_msgs

