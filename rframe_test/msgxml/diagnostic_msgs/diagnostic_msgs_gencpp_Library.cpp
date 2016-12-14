// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:48 -0500
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

#include "diagnostic_msgs_gencpp_Library.h"
#include <common/Log.h>
#include <common/TypeRegistry.h>
#include <messaging/Message.h>

#include <diagnostic_msgs/DiagnosticArray.h>
#include <diagnostic_msgs/DiagnosticStatus.h>
#include <diagnostic_msgs/KeyValue.h>
#include <diagnostic_msgs/AddDiagnosticsRequest.h>
#include <diagnostic_msgs/AddDiagnosticsResponse.h>
#include <diagnostic_msgs/AddDiagnostics.h>
#include <diagnostic_msgs/SelfTestRequest.h>
#include <diagnostic_msgs/SelfTestResponse.h>
#include <diagnostic_msgs/SelfTest.h>

extern "C"
{
    /** library access method */
    int rframeRegisterDataLibrary()
    {
        return diagnostic_msgs::registerLibrary();
    };
}

namespace diagnostic_msgs
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
            case DiagnosticArray::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<DiagnosticArray>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case DiagnosticStatus::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<DiagnosticStatus>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case KeyValue::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<KeyValue>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case AddDiagnosticsRequest::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<AddDiagnosticsRequest>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case AddDiagnosticsResponse::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<AddDiagnosticsResponse>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case AddDiagnostics::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<AddDiagnostics>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case SelfTestRequest::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<SelfTestRequest>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case SelfTestResponse::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<SelfTestResponse>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case SelfTest::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<SelfTest>(),std::bind(deallocateMessage,std::placeholders::_1));
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
    //int register_diagnostic_msgs_gencpp()
    int registerLibrary()
    {
        int retval = rframe::Error::SUCCESS;
        static bool registered = false;
        rframe::TypeRegistry & reg = rframe::TypeRegistry::instance();

        LOG_INFO("registering data for library: diagnostic_msgs_gencpp");

        if (registered == false)
        {
            registered = true;

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = diagnostic_msgs::DiagnosticArray::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<diagnostic_msgs::DiagnosticArray>(
                    // boost::lambda::new_ptr<diagnostic_msgs::DiagnosticArray>(),
                    [](){ return new diagnostic_msgs::DiagnosticArray(); },
                                std::bind(allocateMessage,diagnostic_msgs::DiagnosticArray::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: DiagnosticArray");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = diagnostic_msgs::DiagnosticArray::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(diagnostic_msgs::DiagnosticArray::DATA_TYPE_NAME,diagnostic_msgs::DiagnosticArray::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: DiagnosticArray");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = diagnostic_msgs::DiagnosticStatus::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<diagnostic_msgs::DiagnosticStatus>(
                    // boost::lambda::new_ptr<diagnostic_msgs::DiagnosticStatus>(),
                    [](){ return new diagnostic_msgs::DiagnosticStatus(); },
                                std::bind(allocateMessage,diagnostic_msgs::DiagnosticStatus::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: DiagnosticStatus");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = diagnostic_msgs::DiagnosticStatus::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(diagnostic_msgs::DiagnosticStatus::DATA_TYPE_NAME,diagnostic_msgs::DiagnosticStatus::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: DiagnosticStatus");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = diagnostic_msgs::KeyValue::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<diagnostic_msgs::KeyValue>(
                    // boost::lambda::new_ptr<diagnostic_msgs::KeyValue>(),
                    [](){ return new diagnostic_msgs::KeyValue(); },
                                std::bind(allocateMessage,diagnostic_msgs::KeyValue::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: KeyValue");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = diagnostic_msgs::KeyValue::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(diagnostic_msgs::KeyValue::DATA_TYPE_NAME,diagnostic_msgs::KeyValue::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: KeyValue");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = diagnostic_msgs::AddDiagnosticsRequest::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<diagnostic_msgs::AddDiagnosticsRequest>(
                    // boost::lambda::new_ptr<diagnostic_msgs::AddDiagnosticsRequest>(),
                    [](){ return new diagnostic_msgs::AddDiagnosticsRequest(); },
                                std::bind(allocateMessage,diagnostic_msgs::AddDiagnosticsRequest::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: AddDiagnosticsRequest");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = diagnostic_msgs::AddDiagnosticsRequest::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(diagnostic_msgs::AddDiagnosticsRequest::DATA_TYPE_NAME,diagnostic_msgs::AddDiagnosticsRequest::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: AddDiagnosticsRequest");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = diagnostic_msgs::AddDiagnosticsResponse::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<diagnostic_msgs::AddDiagnosticsResponse>(
                    // boost::lambda::new_ptr<diagnostic_msgs::AddDiagnosticsResponse>(),
                    [](){ return new diagnostic_msgs::AddDiagnosticsResponse(); },
                                std::bind(allocateMessage,diagnostic_msgs::AddDiagnosticsResponse::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: AddDiagnosticsResponse");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = diagnostic_msgs::AddDiagnosticsResponse::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(diagnostic_msgs::AddDiagnosticsResponse::DATA_TYPE_NAME,diagnostic_msgs::AddDiagnosticsResponse::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: AddDiagnosticsResponse");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = diagnostic_msgs::AddDiagnostics::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<diagnostic_msgs::AddDiagnostics>(
                    // boost::lambda::new_ptr<diagnostic_msgs::AddDiagnostics>(),
                    [](){ return new diagnostic_msgs::AddDiagnostics(); },
                                std::bind(allocateMessage,diagnostic_msgs::AddDiagnostics::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: AddDiagnostics");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = diagnostic_msgs::AddDiagnostics::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(diagnostic_msgs::AddDiagnostics::DATA_TYPE_NAME,diagnostic_msgs::AddDiagnostics::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: AddDiagnostics");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = diagnostic_msgs::SelfTestRequest::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<diagnostic_msgs::SelfTestRequest>(
                    // boost::lambda::new_ptr<diagnostic_msgs::SelfTestRequest>(),
                    [](){ return new diagnostic_msgs::SelfTestRequest(); },
                                std::bind(allocateMessage,diagnostic_msgs::SelfTestRequest::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: SelfTestRequest");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = diagnostic_msgs::SelfTestRequest::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(diagnostic_msgs::SelfTestRequest::DATA_TYPE_NAME,diagnostic_msgs::SelfTestRequest::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: SelfTestRequest");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = diagnostic_msgs::SelfTestResponse::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<diagnostic_msgs::SelfTestResponse>(
                    // boost::lambda::new_ptr<diagnostic_msgs::SelfTestResponse>(),
                    [](){ return new diagnostic_msgs::SelfTestResponse(); },
                                std::bind(allocateMessage,diagnostic_msgs::SelfTestResponse::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: SelfTestResponse");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = diagnostic_msgs::SelfTestResponse::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(diagnostic_msgs::SelfTestResponse::DATA_TYPE_NAME,diagnostic_msgs::SelfTestResponse::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: SelfTestResponse");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = diagnostic_msgs::SelfTest::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<diagnostic_msgs::SelfTest>(
                    // boost::lambda::new_ptr<diagnostic_msgs::SelfTest>(),
                    [](){ return new diagnostic_msgs::SelfTest(); },
                                std::bind(allocateMessage,diagnostic_msgs::SelfTest::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: SelfTest");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = diagnostic_msgs::SelfTest::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(diagnostic_msgs::SelfTest::DATA_TYPE_NAME,diagnostic_msgs::SelfTest::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: SelfTest");
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
  Generated by:         alex on alex-laptop, 2016-11-23 12:44:29 -0500\
  From Template/Script: rosToXML.rb\
 \
\
-->\
<classes library_name=\"diagnostic_msgs_gencpp\" namespace=\"diagnostic_msgs\">\
\
<class name=\"DiagnosticArray\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"60810da900de1dd6ddd437c3503511da\" rosDesc=\"# This message is used to send diagnostic information about the state of the robot\\nHeader header #for timestamp\\nDiagnosticStatus[] status # an array of components being reported on\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: diagnostic_msgs/DiagnosticStatus\\n# This message holds the status of an individual component of the robot.\\n# \\n\\n# Possible levels of operations\\nbyte OK=0\\nbyte WARN=1\\nbyte ERROR=2\\nbyte STALE=3\\n\\nbyte level # level of operation enumerated above \\nstring name # a description of the test/component reporting\\nstring message # a description of the status\\nstring hardware_id # a hardware unique string\\nKeyValue[] values # an array of values associated with the status\\n\\n\\n================================================================================\\nMSG: diagnostic_msgs/KeyValue\\nstring key # what to label this value when viewing\\nstring value # a value to track over time\\n\" comment=\"This message is used to send diagnostic information about the state of the robot\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"for timestamp\"/>\
  <field name=\"status\" type=\"vector(DiagnosticStatus)\" sourceType=\"DiagnosticStatus\" comment=\"an array of components being reported on\"/>\
</class>\
\
<class name=\"DiagnosticStatus\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"d0ce08bc6e5ba34c7754f563a9cabaf1\" rosDesc=\"# This message holds the status of an individual component of the robot.\\n# \\n\\n# Possible levels of operations\\nbyte OK=0\\nbyte WARN=1\\nbyte ERROR=2\\nbyte STALE=3\\n\\nbyte level # level of operation enumerated above \\nstring name # a description of the test/component reporting\\nstring message # a description of the status\\nstring hardware_id # a hardware unique string\\nKeyValue[] values # an array of values associated with the status\\n\\n\\n================================================================================\\nMSG: diagnostic_msgs/KeyValue\\nstring key # what to label this value when viewing\\nstring value # a value to track over time\\n\" comment=\"This message holds the status of an individual component of the robot.\">\
  <constant init=\"0\" name=\"OK\" type=\"char\" sourceType=\"byte\" comment=\"\"/>\
  <constant init=\"1\" name=\"WARN\" type=\"char\" sourceType=\"byte\" comment=\"\"/>\
  <constant init=\"2\" name=\"ERROR\" type=\"char\" sourceType=\"byte\" comment=\"\"/>\
  <constant init=\"3\" name=\"STALE\" type=\"char\" sourceType=\"byte\" comment=\"\"/>\
  <field name=\"level\" type=\"char\" sourceType=\"byte\" comment=\"level of operation enumerated above\"/>\
  <field name=\"name\" type=\"string\" sourceType=\"string\" comment=\"a description of the test/component reporting\"/>\
  <field name=\"message\" type=\"string\" sourceType=\"string\" comment=\"a description of the status\"/>\
  <field name=\"hardware_id\" type=\"string\" sourceType=\"string\" comment=\"a hardware unique string\"/>\
  <field name=\"values\" type=\"vector(KeyValue)\" sourceType=\"KeyValue\" comment=\"an array of values associated with the status\"/>\
</class>\
\
<class name=\"KeyValue\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"cf57fdc6617a881a88c16e768132149c\" rosDesc=\"string key # what to label this value when viewing\\nstring value # a value to track over time\\n\" comment=\"\">\
  <field name=\"key\" type=\"string\" sourceType=\"string\" comment=\"what to label this value when viewing\"/>\
  <field name=\"value\" type=\"string\" sourceType=\"string\" comment=\"a value to track over time\"/>\
</class>\
\
<class name=\"AddDiagnosticsRequest\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"This service is used as part of the process for loading analyzers at runtime,  and should be used by a loader script or program, not as a standalone service.  Information about dynamic addition of analyzers can be found at  http://wiki.ros.org/diagnostics/Tutorials/Adding%20Analyzers%20at%20Runtime\">\
  <field name=\"load_namespace\" type=\"string\" sourceType=\"string\" comment=\"no comment provided\"/>\
</class>\
\
<class name=\"AddDiagnosticsResponse\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"This service is used as part of the process for loading analyzers at runtime,  and should be used by a loader script or program, not as a standalone service.  Information about dynamic addition of analyzers can be found at  http://wiki.ros.org/diagnostics/Tutorials/Adding%20Analyzers%20at%20Runtime\">\
  <field name=\"success\" type=\"bool\" sourceType=\"bool\" comment=\"Message with additional information about the success or failure\"/>\
  <field name=\"message\" type=\"string\" sourceType=\"string\" comment=\"\"/>\
</class>\
\
<class name=\"AddDiagnostics\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"This service is used as part of the process for loading analyzers at runtime,  and should be used by a loader script or program, not as a standalone service.  Information about dynamic addition of analyzers can be found at  http://wiki.ros.org/diagnostics/Tutorials/Adding%20Analyzers%20at%20Runtime\">\
  <definition name=\"Request\" type=\"AddDiagnosticsRequest\"/>\
  <definition name=\"Response\" type=\"AddDiagnosticsResponse\"/>\
  <field name=\"request\" type=\"Request\" comment=\"request data type\"/>\
  <field name=\"response\" type=\"Response\" comment=\"response data type\"/>\
</class>\
\
<class name=\"SelfTestRequest\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
</class>\
\
<class name=\"SelfTestResponse\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
  <field name=\"id\" type=\"string\" sourceType=\"string\" comment=\"\"/>\
  <field name=\"passed\" type=\"char\" sourceType=\"byte\" comment=\"\"/>\
  <field name=\"status\" type=\"vector(DiagnosticStatus)\" sourceType=\"DiagnosticStatus\" comment=\"\"/>\
</class>\
\
<class name=\"SelfTest\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
  <definition name=\"Request\" type=\"SelfTestRequest\"/>\
  <definition name=\"Response\" type=\"SelfTestResponse\"/>\
  <field name=\"request\" type=\"Request\" comment=\"request data type\"/>\
  <field name=\"response\" type=\"Response\" comment=\"response data type\"/>\
</class>\
\
<dependency name=\"std_msgs_gencpp\"/>\
<dependency name=\"std_srvs_gencpp\"/>\
\
</classes>\
";
    }

}; // end namespace diagnostic_msgs
