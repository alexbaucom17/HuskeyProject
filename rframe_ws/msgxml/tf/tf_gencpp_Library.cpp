// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:08 -0500
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

#include "tf_gencpp_Library.h"
#include <common/Log.h>
#include <common/TypeRegistry.h>
#include <messaging/Message.h>

#include <tf/tfMessage.h>
#include <tf/FrameGraphRequest.h>
#include <tf/FrameGraphResponse.h>
#include <tf/FrameGraph.h>

extern "C"
{
    /** library access method */
    int rframeRegisterDataLibrary()
    {
        return tf::registerLibrary();
    };
}

namespace tf
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
            case tfMessage::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<tfMessage>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case FrameGraphRequest::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<FrameGraphRequest>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case FrameGraphResponse::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<FrameGraphResponse>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case FrameGraph::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<FrameGraph>(),std::bind(deallocateMessage,std::placeholders::_1));
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
    //int register_tf_gencpp()
    int registerLibrary()
    {
        int retval = rframe::Error::SUCCESS;
        static bool registered = false;
        rframe::TypeRegistry & reg = rframe::TypeRegistry::instance();

        LOG_INFO("registering data for library: tf_gencpp");

        if (registered == false)
        {
            registered = true;

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = tf::tfMessage::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<tf::tfMessage>(
                    // boost::lambda::new_ptr<tf::tfMessage>(),
                    [](){ return new tf::tfMessage(); },
                                std::bind(allocateMessage,tf::tfMessage::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: tfMessage");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = tf::tfMessage::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(tf::tfMessage::DATA_TYPE_NAME,tf::tfMessage::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: tfMessage");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = tf::FrameGraphRequest::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<tf::FrameGraphRequest>(
                    // boost::lambda::new_ptr<tf::FrameGraphRequest>(),
                    [](){ return new tf::FrameGraphRequest(); },
                                std::bind(allocateMessage,tf::FrameGraphRequest::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: FrameGraphRequest");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = tf::FrameGraphRequest::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(tf::FrameGraphRequest::DATA_TYPE_NAME,tf::FrameGraphRequest::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: FrameGraphRequest");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = tf::FrameGraphResponse::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<tf::FrameGraphResponse>(
                    // boost::lambda::new_ptr<tf::FrameGraphResponse>(),
                    [](){ return new tf::FrameGraphResponse(); },
                                std::bind(allocateMessage,tf::FrameGraphResponse::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: FrameGraphResponse");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = tf::FrameGraphResponse::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(tf::FrameGraphResponse::DATA_TYPE_NAME,tf::FrameGraphResponse::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: FrameGraphResponse");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = tf::FrameGraph::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<tf::FrameGraph>(
                    // boost::lambda::new_ptr<tf::FrameGraph>(),
                    [](){ return new tf::FrameGraph(); },
                                std::bind(allocateMessage,tf::FrameGraph::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: FrameGraph");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = tf::FrameGraph::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(tf::FrameGraph::DATA_TYPE_NAME,tf::FrameGraph::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: FrameGraph");
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
<classes library_name=\"tf_gencpp\" namespace=\"tf\">\
\
<class name=\"tfMessage\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"94810edda583a504dfda3829e70d7eec\" rosDesc=\"geometry_msgs/TransformStamped[] transforms\\n\\n================================================================================\\nMSG: geometry_msgs/TransformStamped\\n# This expresses a transform from coordinate frame header.frame_id\\n# to the coordinate frame child_frame_id\\n#\\n# This message is mostly used by the \\n# &lt;a href=\\&quot;http://wiki.ros.org/tf\\&quot;&gt;tf&lt;/a&gt; package. \\n# See its documentation for more information.\\n\\nHeader header\\nstring child_frame_id # the frame id of the child frame\\nTransform transform\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: geometry_msgs/Transform\\n# This represents the transform between two coordinate frames in free space.\\n\\nVector3 translation\\nQuaternion rotation\\n\\n================================================================================\\nMSG: geometry_msgs/Vector3\\n# This represents a vector in free space. \\n# It is only meant to represent a direction. Therefore, it does not\\n# make sense to apply a translation to it (e.g., when applying a \\n# generic rigid transformation to a Vector3, tf2 will only apply the\\n# rotation). If you want your data to be translatable too, use the\\n# geometry_msgs/Point message instead.\\n\\nfloat64 x\\nfloat64 y\\nfloat64 z\\n================================================================================\\nMSG: geometry_msgs/Quaternion\\n# This represents an orientation in free space in quaternion form.\\n\\nfloat64 x\\nfloat64 y\\nfloat64 z\\nfloat64 w\\n\" comment=\"\">\
  <field name=\"transforms\" type=\"vector(geometry_msgs::TransformStamped)\" sourceType=\"geometry_msgs::TransformStamped\" comment=\"\"/>\
</class>\
\
<class name=\"FrameGraphRequest\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
</class>\
\
<class name=\"FrameGraphResponse\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
  <field name=\"dot_graph\" type=\"string\" sourceType=\"string\" comment=\"\"/>\
</class>\
\
<class name=\"FrameGraph\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
  <definition name=\"Request\" type=\"FrameGraphRequest\"/>\
  <definition name=\"Response\" type=\"FrameGraphResponse\"/>\
  <field name=\"request\" type=\"Request\" comment=\"request data type\"/>\
  <field name=\"response\" type=\"Response\" comment=\"response data type\"/>\
</class>\
\
<dependency name=\"geometry_msgs_gencpp\"/>\
<dependency name=\"std_msgs_gencpp\"/>\
<dependency name=\"std_srvs_gencpp\"/>\
\
</classes>\
";
    }

}; // end namespace tf

