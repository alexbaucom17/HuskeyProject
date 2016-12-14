// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:53 -0500
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
#include "sensor_msgs/JointState.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int sensor_msgs::JointState::ID;
const unsigned int sensor_msgs::JointState::DATA_VERSION;
const std::string sensor_msgs::JointState::DATA_TYPE_NAME = "JointState";
const std::string sensor_msgs::JointState::DATA_TYPE_FULL_NAME = "sensor_msgs::JointState";
const std::string sensor_msgs::JointState::VERSION_MD5 = "300ead38d53c1b5c9ce18e16aace5e54";
/* xml source for this class */
const std::string sensor_msgs::JointState::XML_SOURCE = "<class name=\"JointState\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"3066dcd76a6cfaef579bd0f34173e9fd\" rosDesc=\"# This is a message that holds data to describe the state of a set of torque controlled joints. \\n#\\n# The state of each joint (revolute or prismatic) is defined by:\\n#  * the position of the joint (rad or m),\\n#  * the velocity of the joint (rad/s or m/s) and \\n#  * the effort that is applied in the joint (Nm or N).\\n#\\n# Each joint is uniquely identified by its name\\n# The header specifies the time at which the joint states were recorded. All the joint states\\n# in one message have to be recorded at the same time.\\n#\\n# This message consists of a multiple arrays, one for each part of the joint state. \\n# The goal is to make each of the fields optional. When e.g. your joints have no\\n# effort associated with them, you can leave the effort array empty. \\n#\\n# All arrays in this message should have the same size, or be empty.\\n# This is the only way to uniquely associate the joint name with the correct\\n# states.\\n\\n\\nHeader header\\n\\nstring[] name\\nfloat64[] position\\nfloat64[] velocity\\nfloat64[] effort\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\" comment=\"This is a message that holds data to describe the state of a set of torque controlled joints.    The state of each joint (revolute or prismatic) is defined by:   * the position of the joint (rad or m),   * the velocity of the joint (rad/s or m/s) and    * the effort that is applied in the joint (Nm or N).   Each joint is uniquely identified by its name  The header specifies the time at which the joint states were recorded. All the joint states  in one message have to be recorded at the same time.   This message consists of a multiple arrays, one for each part of the joint state.   The goal is to make each of the fields optional. When e.g. your joints have no  effort associated with them, you can leave the effort array empty.    All arrays in this message should have the same size, or be empty.  This is the only way to uniquely associate the joint name with the correct  states.\" id=\"237354218\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"\"/>\
  <field name=\"name\" type=\"vector(string)\" sourceType=\"string\" comment=\"\"/>\
  <field name=\"position\" type=\"vector(double)\" sourceType=\"float64\" comment=\"\"/>\
  <field name=\"velocity\" type=\"vector(double)\" sourceType=\"float64\" comment=\"\"/>\
  <field name=\"effort\" type=\"vector(double)\" sourceType=\"float64\" comment=\"\"/>\
</class>";

sensor_msgs::JointState::JointState() : header(), name(), position(), velocity(), effort()
{  
};

sensor_msgs::JointState::JointState(const sensor_msgs::JointState & inobj) : header(inobj.header), name(inobj.name), position(inobj.position), velocity(inobj.velocity), effort(inobj.effort)
{
};

sensor_msgs::JointState::~JointState()
{
};

sensor_msgs::JointState * sensor_msgs::JointState::New()
{ 
    return new JointState();
};

bool sensor_msgs::JointState::dataTypeFlat() 
{   
    return false; 
};

sensor_msgs::JointState & sensor_msgs::JointState::operator=(const sensor_msgs::JointState & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus sensor_msgs::JointState is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(sensor_msgs::JointState));
        }
        else */ 
        {

            header = inobj.header;
            name = inobj.name;
            position = inobj.position;
            velocity = inobj.velocity;
            effort = inobj.effort;
        }
    }

    return *this;
}

bool sensor_msgs::JointState::operator==(const sensor_msgs::JointState & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (header == inobj.header)
             && (name == inobj.name)
             && (position == inobj.position)
             && (velocity == inobj.velocity)
             && (effort == inobj.effort);
    }

    return ret;
}

bool sensor_msgs::JointState::operator!=(const sensor_msgs::JointState & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool sensor_msgs::JointState::operator<(const sensor_msgs::JointState & inobj) const
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
        if (name < inobj.name) return true;
        if (inobj.name <  name) return false; 
        if (position < inobj.position) return true;
        if (inobj.position <  position) return false; 
        if (velocity < inobj.velocity) return true;
        if (inobj.velocity <  velocity) return false; 
        if (effort < inobj.effort) return true;
        if (inobj.effort <  effort) return false; ;
    }

    return ret;
}

bool sensor_msgs::JointState::operator>(const sensor_msgs::JointState & inobj) const
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
        if (name > inobj.name) return true;
        if (inobj.name >  name) return false; 
        if (position > inobj.position) return true;
        if (inobj.position >  position) return false; 
        if (velocity > inobj.velocity) return true;
        if (inobj.velocity >  velocity) return false; 
        if (effort > inobj.effort) return true;
        if (inobj.effort >  effort) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const sensor_msgs::JointState & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"header",t.header,indent,false);
    rframe::json_io::encode(sstr,"name",t.name,indent,false);
    rframe::json_io::encode(sstr,"position",t.position,indent,false);
    rframe::json_io::encode(sstr,"velocity",t.velocity,indent,false);
    rframe::json_io::encode(sstr,"effort",t.effort,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string sensor_msgs::JointState::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const sensor_msgs::JointState & value)
{
    return s << value.toStr(false);
}
