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
#include "control_msgs/PointHeadGoal.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int control_msgs::PointHeadGoal::ID;
const unsigned int control_msgs::PointHeadGoal::DATA_VERSION;
const std::string control_msgs::PointHeadGoal::DATA_TYPE_NAME = "PointHeadGoal";
const std::string control_msgs::PointHeadGoal::DATA_TYPE_FULL_NAME = "control_msgs::PointHeadGoal";
const std::string control_msgs::PointHeadGoal::VERSION_MD5 = "dfb1fa5d4bb94cc9cec3afcc1a08525d";
/* xml source for this class */
const std::string control_msgs::PointHeadGoal::XML_SOURCE = "<class name=\"PointHeadGoal\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"8b92b1cd5e06c8a94c917dc3209a4c1d\" rosDesc=\"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\ngeometry_msgs/PointStamped target\\ngeometry_msgs/Vector3 pointing_axis\\nstring pointing_frame\\nduration min_duration\\nfloat64 max_velocity\\n\\n================================================================================\\nMSG: geometry_msgs/PointStamped\\n# This represents a Point with reference coordinate frame and timestamp\\nHeader header\\nPoint point\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: geometry_msgs/Point\\n# This contains the position of a point in free space\\nfloat64 x\\nfloat64 y\\nfloat64 z\\n\\n================================================================================\\nMSG: geometry_msgs/Vector3\\n# This represents a vector in free space. \\n# It is only meant to represent a direction. Therefore, it does not\\n# make sense to apply a translation to it (e.g., when applying a \\n# generic rigid transformation to a Vector3, tf2 will only apply the\\n# rotation). If you want your data to be translatable too, use the\\n# geometry_msgs/Point message instead.\\n\\nfloat64 x\\nfloat64 y\\n\" comment=\"====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\" id=\"1246705459\">\
  <field name=\"target\" type=\"geometry_msgs::PointStamped\" sourceType=\"geometry_msgs::PointStamped\" comment=\"\"/>\
  <field name=\"pointing_axis\" type=\"geometry_msgs::Vector3\" sourceType=\"geometry_msgs::Vector3\" comment=\"\"/>\
  <field name=\"pointing_frame\" type=\"string\" sourceType=\"string\" comment=\"\"/>\
  <field name=\"min_duration\" type=\"std_msgs::RosDuration\" sourceType=\"duration\" comment=\"\"/>\
  <field name=\"max_velocity\" type=\"double\" sourceType=\"float64\" comment=\"\"/>\
</class>";

control_msgs::PointHeadGoal::PointHeadGoal() : target(), pointing_axis(), pointing_frame(), min_duration(), max_velocity(0)
{  
};

control_msgs::PointHeadGoal::PointHeadGoal(const control_msgs::PointHeadGoal & inobj) : target(inobj.target), pointing_axis(inobj.pointing_axis), pointing_frame(inobj.pointing_frame), min_duration(inobj.min_duration), max_velocity(inobj.max_velocity)
{
};

control_msgs::PointHeadGoal::~PointHeadGoal()
{
};

control_msgs::PointHeadGoal * control_msgs::PointHeadGoal::New()
{ 
    return new PointHeadGoal();
};

bool control_msgs::PointHeadGoal::dataTypeFlat() 
{  
    return geometry_msgs::PointStamped::dataTypeFlat() && geometry_msgs::Vector3::dataTypeFlat() && std_msgs::RosDuration::dataTypeFlat() && rframe::CodeGenTraits<std::string>::flat();

};

control_msgs::PointHeadGoal & control_msgs::PointHeadGoal::operator=(const control_msgs::PointHeadGoal & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus control_msgs::PointHeadGoal is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(control_msgs::PointHeadGoal));
        }
        else */ 
        {

            target = inobj.target;
            pointing_axis = inobj.pointing_axis;
            pointing_frame = inobj.pointing_frame;
            min_duration = inobj.min_duration;
            max_velocity = inobj.max_velocity;
        }
    }

    return *this;
}

bool control_msgs::PointHeadGoal::operator==(const control_msgs::PointHeadGoal & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (target == inobj.target)
             && (pointing_axis == inobj.pointing_axis)
             && (pointing_frame == inobj.pointing_frame)
             && (min_duration == inobj.min_duration)
             && (max_velocity == inobj.max_velocity);
    }

    return ret;
}

bool control_msgs::PointHeadGoal::operator!=(const control_msgs::PointHeadGoal & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool control_msgs::PointHeadGoal::operator<(const control_msgs::PointHeadGoal & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (target < inobj.target) return true;
        if (inobj.target <  target) return false; 
        if (pointing_axis < inobj.pointing_axis) return true;
        if (inobj.pointing_axis <  pointing_axis) return false; 
        if (pointing_frame < inobj.pointing_frame) return true;
        if (inobj.pointing_frame <  pointing_frame) return false; 
        if (min_duration < inobj.min_duration) return true;
        if (inobj.min_duration <  min_duration) return false; 
        if (max_velocity < inobj.max_velocity) return true;
        if (inobj.max_velocity <  max_velocity) return false; ;
    }

    return ret;
}

bool control_msgs::PointHeadGoal::operator>(const control_msgs::PointHeadGoal & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (target > inobj.target) return true;
        if (inobj.target >  target) return false; 
        if (pointing_axis > inobj.pointing_axis) return true;
        if (inobj.pointing_axis >  pointing_axis) return false; 
        if (pointing_frame > inobj.pointing_frame) return true;
        if (inobj.pointing_frame >  pointing_frame) return false; 
        if (min_duration > inobj.min_duration) return true;
        if (inobj.min_duration >  min_duration) return false; 
        if (max_velocity > inobj.max_velocity) return true;
        if (inobj.max_velocity >  max_velocity) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const control_msgs::PointHeadGoal & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"target",t.target,indent,false);
    rframe::json_io::encode(sstr,"pointing_axis",t.pointing_axis,indent,false);
    rframe::json_io::encode(sstr,"pointing_frame",t.pointing_frame,indent,false);
    rframe::json_io::encode(sstr,"min_duration",t.min_duration,indent,false);
    rframe::json_io::encode(sstr,"max_velocity",t.max_velocity,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string control_msgs::PointHeadGoal::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const control_msgs::PointHeadGoal & value)
{
    return s << value.toStr(false);
}

