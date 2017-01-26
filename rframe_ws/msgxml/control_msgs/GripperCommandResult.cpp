// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:46 -0500
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
#include "control_msgs/GripperCommandResult.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int control_msgs::GripperCommandResult::ID;
const unsigned int control_msgs::GripperCommandResult::DATA_VERSION;
const std::string control_msgs::GripperCommandResult::DATA_TYPE_NAME = "GripperCommandResult";
const std::string control_msgs::GripperCommandResult::DATA_TYPE_FULL_NAME = "control_msgs::GripperCommandResult";
const std::string control_msgs::GripperCommandResult::VERSION_MD5 = "fd6b9d604b79ee4a3b9ccdb89904f8ed";
/* xml source for this class */
const std::string control_msgs::GripperCommandResult::XML_SOURCE = "<class name=\"GripperCommandResult\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"e4cbff56d3562bcf113da5a5adeef91f\" rosDesc=\"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\nfloat64 position  # The current gripper gap size (in meters)\\nfloat64 effort    # The current effort exerted (in Newtons)\\nbool stalled      # True iff the gripper is exerting max effort and not moving\\nbool reached_goal # True iff the gripper position has reached the commanded setpoint\\n\" comment=\"====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\" id=\"1246705443\">\
  <field name=\"position\" type=\"double\" sourceType=\"float64\" comment=\"The current gripper gap size (in meters)\"/>\
  <field name=\"effort\" type=\"double\" sourceType=\"float64\" comment=\"The current effort exerted (in Newtons)\"/>\
  <field name=\"stalled\" type=\"bool\" sourceType=\"bool\" comment=\"True iff the gripper is exerting max effort and not moving\"/>\
  <field name=\"reached_goal\" type=\"bool\" sourceType=\"bool\" comment=\"True iff the gripper position has reached the commanded setpoint\"/>\
</class>";

control_msgs::GripperCommandResult::GripperCommandResult() : position(0), effort(0), stalled(0), reached_goal(0)
{  
};

control_msgs::GripperCommandResult::GripperCommandResult(const control_msgs::GripperCommandResult & inobj) : position(inobj.position), effort(inobj.effort), stalled(inobj.stalled), reached_goal(inobj.reached_goal)
{
};

control_msgs::GripperCommandResult::~GripperCommandResult()
{
};

control_msgs::GripperCommandResult * control_msgs::GripperCommandResult::New()
{ 
    return new GripperCommandResult();
};

bool control_msgs::GripperCommandResult::dataTypeFlat() 
{  
    return true;
};

control_msgs::GripperCommandResult & control_msgs::GripperCommandResult::operator=(const control_msgs::GripperCommandResult & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus control_msgs::GripperCommandResult is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(control_msgs::GripperCommandResult));
        }
        else */ 
        {

            position = inobj.position;
            effort = inobj.effort;
            stalled = inobj.stalled;
            reached_goal = inobj.reached_goal;
        }
    }

    return *this;
}

bool control_msgs::GripperCommandResult::operator==(const control_msgs::GripperCommandResult & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (position == inobj.position)
             && (effort == inobj.effort)
             && (stalled == inobj.stalled)
             && (reached_goal == inobj.reached_goal);
    }

    return ret;
}

bool control_msgs::GripperCommandResult::operator!=(const control_msgs::GripperCommandResult & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool control_msgs::GripperCommandResult::operator<(const control_msgs::GripperCommandResult & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (position < inobj.position) return true;
        if (inobj.position <  position) return false; 
        if (effort < inobj.effort) return true;
        if (inobj.effort <  effort) return false; 
        if (stalled < inobj.stalled) return true;
        if (inobj.stalled <  stalled) return false; 
        if (reached_goal < inobj.reached_goal) return true;
        if (inobj.reached_goal <  reached_goal) return false; ;
    }

    return ret;
}

bool control_msgs::GripperCommandResult::operator>(const control_msgs::GripperCommandResult & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (position > inobj.position) return true;
        if (inobj.position >  position) return false; 
        if (effort > inobj.effort) return true;
        if (inobj.effort >  effort) return false; 
        if (stalled > inobj.stalled) return true;
        if (inobj.stalled >  stalled) return false; 
        if (reached_goal > inobj.reached_goal) return true;
        if (inobj.reached_goal >  reached_goal) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const control_msgs::GripperCommandResult & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"position",t.position,indent,false);
    rframe::json_io::encode(sstr,"effort",t.effort,indent,false);
    rframe::json_io::encode(sstr,"stalled",t.stalled,indent,false);
    rframe::json_io::encode(sstr,"reached_goal",t.reached_goal,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string control_msgs::GripperCommandResult::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const control_msgs::GripperCommandResult & value)
{
    return s << value.toStr(false);
}
