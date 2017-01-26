// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:06 -0500
//  From Template/Script: data_templates/DataClassTemplate.cpp
 
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

#include <math.h> // to allow use of common constants...
#include <common/Error.h>
#include "move_base_msgs/MoveBaseActionGoal.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int move_base_msgs::MoveBaseActionGoal::ID;
const unsigned int move_base_msgs::MoveBaseActionGoal::DATA_VERSION;
const std::string move_base_msgs::MoveBaseActionGoal::DATA_TYPE_NAME = "MoveBaseActionGoal";
const std::string move_base_msgs::MoveBaseActionGoal::DATA_TYPE_FULL_NAME = "move_base_msgs::MoveBaseActionGoal";
const std::string move_base_msgs::MoveBaseActionGoal::VERSION_MD5 = "b682113112347a212665a1023dca900c";
/* xml source for this class */
const std::string move_base_msgs::MoveBaseActionGoal::XML_SOURCE = "<class name=\"MoveBaseActionGoal\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"660d6895a1b9a16dce51fbdd9a64a56b\" rosDesc=\"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n\\nHeader header\\nactionlib_msgs/GoalID goal_id\\nMoveBaseGoal goal\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: actionlib_msgs/GoalID\\n# The stamp should store the time at which this goal was requested.\\n# It is used by an action server when it tries to preempt all\\n# goals that were requested before a certain time\\ntime stamp\\n\\n# The id provides a way to associate feedback and\\n# result message with specific goal requests. The id\\n# specified must be unique.\\nstring id\\n\\n\\n================================================================================\\nMSG: move_base_msgs/MoveBaseGoal\\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\ngeometry_msgs/PoseStamped target_pose\\n\\n================================================================================\\nMSG: geometry_msgs/PoseStamped\\n# A Pose with reference coordinate frame and timestamp\\nHeader header\\nPose pose\\n\\n================================================================================\\nMSG: geometry_msgs/Pose\\n# A representation of pose in free space, composed of position and orientation. \\nPoint position\\nQuaternion orientation\\n\\n================================================================================\\nMSG: geometry_msgs/Point\\n# This contains the position of a point in free space\\nfloat64 x\\nfloat64 y\\nfloat64 z\\n\\n================================================================================\\nMSG: geometry_msgs/Quaternion\\n# This represents an orientation in free space in quaternion form.\\n\\nfloat64 x\\nfloat64 y\\nfloat64 z\\nfloat64 w\\n\" comment=\"====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\" id=\"1344994992\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"\"/>\
  <field name=\"goal_id\" type=\"actionlib_msgs::GoalID\" sourceType=\"actionlib_msgs::GoalID\" comment=\"\"/>\
  <field name=\"goal\" type=\"MoveBaseGoal\" sourceType=\"MoveBaseGoal\" comment=\"\"/>\
</class>";

move_base_msgs::MoveBaseActionGoal::MoveBaseActionGoal() : header(), goal_id(), goal()
{  
};

move_base_msgs::MoveBaseActionGoal::MoveBaseActionGoal(const move_base_msgs::MoveBaseActionGoal & inobj) : header(inobj.header), goal_id(inobj.goal_id), goal(inobj.goal)
{
};

move_base_msgs::MoveBaseActionGoal::~MoveBaseActionGoal()
{
};

move_base_msgs::MoveBaseActionGoal * move_base_msgs::MoveBaseActionGoal::New()
{ 
    return new MoveBaseActionGoal();
};

bool move_base_msgs::MoveBaseActionGoal::dataTypeFlat() 
{  
    return std_msgs::Header::dataTypeFlat() && actionlib_msgs::GoalID::dataTypeFlat() && MoveBaseGoal::dataTypeFlat();

};

move_base_msgs::MoveBaseActionGoal & move_base_msgs::MoveBaseActionGoal::operator=(const move_base_msgs::MoveBaseActionGoal & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus move_base_msgs::MoveBaseActionGoal is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(move_base_msgs::MoveBaseActionGoal));
        }
        else */ 
        {

            header = inobj.header;
            goal_id = inobj.goal_id;
            goal = inobj.goal;
        }
    }

    return *this;
}

bool move_base_msgs::MoveBaseActionGoal::operator==(const move_base_msgs::MoveBaseActionGoal & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (header == inobj.header)
             && (goal_id == inobj.goal_id)
             && (goal == inobj.goal);
    }

    return ret;
}

bool move_base_msgs::MoveBaseActionGoal::operator!=(const move_base_msgs::MoveBaseActionGoal & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool move_base_msgs::MoveBaseActionGoal::operator<(const move_base_msgs::MoveBaseActionGoal & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (header < inobj.header) return true;
        if (inobj.header <  header) return false; 
        if (goal_id < inobj.goal_id) return true;
        if (inobj.goal_id <  goal_id) return false; 
        if (goal < inobj.goal) return true;
        if (inobj.goal <  goal) return false; ;
    }

    return ret;
}

bool move_base_msgs::MoveBaseActionGoal::operator>(const move_base_msgs::MoveBaseActionGoal & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (header > inobj.header) return true;
        if (inobj.header >  header) return false; 
        if (goal_id > inobj.goal_id) return true;
        if (inobj.goal_id >  goal_id) return false; 
        if (goal > inobj.goal) return true;
        if (inobj.goal >  goal) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const move_base_msgs::MoveBaseActionGoal & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"header",t.header,indent,false);
    rframe::json_io::encode(sstr,"goal_id",t.goal_id,indent,false);
    rframe::json_io::encode(sstr,"goal",t.goal,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string move_base_msgs::MoveBaseActionGoal::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const move_base_msgs::MoveBaseActionGoal & value)
{
    return s << value.toStr(false);
}

