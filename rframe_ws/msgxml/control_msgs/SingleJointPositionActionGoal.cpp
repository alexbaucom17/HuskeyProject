// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:04 -0500
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
#include "control_msgs/SingleJointPositionActionGoal.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int control_msgs::SingleJointPositionActionGoal::ID;
const unsigned int control_msgs::SingleJointPositionActionGoal::DATA_VERSION;
const std::string control_msgs::SingleJointPositionActionGoal::DATA_TYPE_NAME = "SingleJointPositionActionGoal";
const std::string control_msgs::SingleJointPositionActionGoal::DATA_TYPE_FULL_NAME = "control_msgs::SingleJointPositionActionGoal";
const std::string control_msgs::SingleJointPositionActionGoal::VERSION_MD5 = "95dd920032f0c6370688df2f7f749469";
/* xml source for this class */
const std::string control_msgs::SingleJointPositionActionGoal::XML_SOURCE = "<class name=\"SingleJointPositionActionGoal\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"4b0d3d091471663e17749c1d0db90f61\" rosDesc=\"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n\\nHeader header\\nactionlib_msgs/GoalID goal_id\\nSingleJointPositionGoal goal\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: actionlib_msgs/GoalID\\n# The stamp should store the time at which this goal was requested.\\n# It is used by an action server when it tries to preempt all\\n# goals that were requested before a certain time\\ntime stamp\\n\\n# The id provides a way to associate feedback and\\n# result message with specific goal requests. The id\\n# specified must be unique.\\nstring id\\n\\n\\n================================================================================\\nMSG: control_msgs/SingleJointPositionGoal\\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\nfloat64 position\\nduration min_duration\\nfloat64 max_velocity\\n\" comment=\"====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\" id=\"1246705463\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"\"/>\
  <field name=\"goal_id\" type=\"actionlib_msgs::GoalID\" sourceType=\"actionlib_msgs::GoalID\" comment=\"\"/>\
  <field name=\"goal\" type=\"SingleJointPositionGoal\" sourceType=\"SingleJointPositionGoal\" comment=\"\"/>\
</class>";

control_msgs::SingleJointPositionActionGoal::SingleJointPositionActionGoal() : header(), goal_id(), goal()
{  
};

control_msgs::SingleJointPositionActionGoal::SingleJointPositionActionGoal(const control_msgs::SingleJointPositionActionGoal & inobj) : header(inobj.header), goal_id(inobj.goal_id), goal(inobj.goal)
{
};

control_msgs::SingleJointPositionActionGoal::~SingleJointPositionActionGoal()
{
};

control_msgs::SingleJointPositionActionGoal * control_msgs::SingleJointPositionActionGoal::New()
{ 
    return new SingleJointPositionActionGoal();
};

bool control_msgs::SingleJointPositionActionGoal::dataTypeFlat() 
{  
    return std_msgs::Header::dataTypeFlat() && actionlib_msgs::GoalID::dataTypeFlat() && SingleJointPositionGoal::dataTypeFlat();

};

control_msgs::SingleJointPositionActionGoal & control_msgs::SingleJointPositionActionGoal::operator=(const control_msgs::SingleJointPositionActionGoal & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus control_msgs::SingleJointPositionActionGoal is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(control_msgs::SingleJointPositionActionGoal));
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

bool control_msgs::SingleJointPositionActionGoal::operator==(const control_msgs::SingleJointPositionActionGoal & inobj) const
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

bool control_msgs::SingleJointPositionActionGoal::operator!=(const control_msgs::SingleJointPositionActionGoal & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool control_msgs::SingleJointPositionActionGoal::operator<(const control_msgs::SingleJointPositionActionGoal & inobj) const
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

bool control_msgs::SingleJointPositionActionGoal::operator>(const control_msgs::SingleJointPositionActionGoal & inobj) const
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

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const control_msgs::SingleJointPositionActionGoal & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"header",t.header,indent,false);
    rframe::json_io::encode(sstr,"goal_id",t.goal_id,indent,false);
    rframe::json_io::encode(sstr,"goal",t.goal,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string control_msgs::SingleJointPositionActionGoal::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const control_msgs::SingleJointPositionActionGoal & value)
{
    return s << value.toStr(false);
}

