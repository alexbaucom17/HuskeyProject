// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:09 -0500
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
#include "trajectory_msgs/MultiDOFJointTrajectoryPoint.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int trajectory_msgs::MultiDOFJointTrajectoryPoint::ID;
const unsigned int trajectory_msgs::MultiDOFJointTrajectoryPoint::DATA_VERSION;
const std::string trajectory_msgs::MultiDOFJointTrajectoryPoint::DATA_TYPE_NAME = "MultiDOFJointTrajectoryPoint";
const std::string trajectory_msgs::MultiDOFJointTrajectoryPoint::DATA_TYPE_FULL_NAME = "trajectory_msgs::MultiDOFJointTrajectoryPoint";
const std::string trajectory_msgs::MultiDOFJointTrajectoryPoint::VERSION_MD5 = "b4a0fe9f47ebcde23a4615f634c7aab7";
/* xml source for this class */
const std::string trajectory_msgs::MultiDOFJointTrajectoryPoint::XML_SOURCE = "<class name=\"MultiDOFJointTrajectoryPoint\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"3ebe08d1abd5b65862d50e09430db776\" rosDesc=\"# Each multi-dof joint can specify a transform (up to 6 DOF)\\ngeometry_msgs/Transform[] transforms\\n\\n# There can be a velocity specified for the origin of the joint \\ngeometry_msgs/Twist[] velocities\\n\\n# There can be an acceleration specified for the origin of the joint \\ngeometry_msgs/Twist[] accelerations\\n\\nduration time_from_start\\n\\n================================================================================\\nMSG: geometry_msgs/Transform\\n# This represents the transform between two coordinate frames in free space.\\n\\nVector3 translation\\nQuaternion rotation\\n\\n================================================================================\\nMSG: geometry_msgs/Vector3\\n# This represents a vector in free space. \\n# It is only meant to represent a direction. Therefore, it does not\\n# make sense to apply a translation to it (e.g., when applying a \\n# generic rigid transformation to a Vector3, tf2 will only apply the\\n# rotation). If you want your data to be translatable too, use the\\n# geometry_msgs/Point message instead.\\n\\nfloat64 x\\nfloat64 y\\nfloat64 z\\n================================================================================\\nMSG: geometry_msgs/Quaternion\\n# This represents an orientation in free space in quaternion form.\\n\\nfloat64 x\\nfloat64 y\\nfloat64 z\\nfloat64 w\\n\\n================================================================================\\nMSG: geometry_msgs/Twist\\n# This expresses velocity in free space broken into its linear and angular parts.\\nVector3  linear\\nVector3  angular\\n\" comment=\"Each multi-dof joint can specify a transform (up to 6 DOF)\" id=\"109236943\">\
  <field name=\"transforms\" type=\"vector(geometry_msgs::Transform)\" sourceType=\"geometry_msgs::Transform\" comment=\"There can be a velocity specified for the origin of the joint\"/>\
  <field name=\"velocities\" type=\"vector(geometry_msgs::Twist)\" sourceType=\"geometry_msgs::Twist\" comment=\"There can be an acceleration specified for the origin of the joint\"/>\
  <field name=\"accelerations\" type=\"vector(geometry_msgs::Twist)\" sourceType=\"geometry_msgs::Twist\" comment=\"\"/>\
  <field name=\"time_from_start\" type=\"std_msgs::RosDuration\" sourceType=\"duration\" comment=\"\"/>\
</class>";

trajectory_msgs::MultiDOFJointTrajectoryPoint::MultiDOFJointTrajectoryPoint() : transforms(), velocities(), accelerations(), time_from_start()
{  
};

trajectory_msgs::MultiDOFJointTrajectoryPoint::MultiDOFJointTrajectoryPoint(const trajectory_msgs::MultiDOFJointTrajectoryPoint & inobj) : transforms(inobj.transforms), velocities(inobj.velocities), accelerations(inobj.accelerations), time_from_start(inobj.time_from_start)
{
};

trajectory_msgs::MultiDOFJointTrajectoryPoint::~MultiDOFJointTrajectoryPoint()
{
};

trajectory_msgs::MultiDOFJointTrajectoryPoint * trajectory_msgs::MultiDOFJointTrajectoryPoint::New()
{ 
    return new MultiDOFJointTrajectoryPoint();
};

bool trajectory_msgs::MultiDOFJointTrajectoryPoint::dataTypeFlat() 
{   
    return false; 
};

trajectory_msgs::MultiDOFJointTrajectoryPoint & trajectory_msgs::MultiDOFJointTrajectoryPoint::operator=(const trajectory_msgs::MultiDOFJointTrajectoryPoint & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus trajectory_msgs::MultiDOFJointTrajectoryPoint is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(trajectory_msgs::MultiDOFJointTrajectoryPoint));
        }
        else */ 
        {

            transforms = inobj.transforms;
            velocities = inobj.velocities;
            accelerations = inobj.accelerations;
            time_from_start = inobj.time_from_start;
        }
    }

    return *this;
}

bool trajectory_msgs::MultiDOFJointTrajectoryPoint::operator==(const trajectory_msgs::MultiDOFJointTrajectoryPoint & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (transforms == inobj.transforms)
             && (velocities == inobj.velocities)
             && (accelerations == inobj.accelerations)
             && (time_from_start == inobj.time_from_start);
    }

    return ret;
}

bool trajectory_msgs::MultiDOFJointTrajectoryPoint::operator!=(const trajectory_msgs::MultiDOFJointTrajectoryPoint & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool trajectory_msgs::MultiDOFJointTrajectoryPoint::operator<(const trajectory_msgs::MultiDOFJointTrajectoryPoint & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (transforms < inobj.transforms) return true;
        if (inobj.transforms <  transforms) return false; 
        if (velocities < inobj.velocities) return true;
        if (inobj.velocities <  velocities) return false; 
        if (accelerations < inobj.accelerations) return true;
        if (inobj.accelerations <  accelerations) return false; 
        if (time_from_start < inobj.time_from_start) return true;
        if (inobj.time_from_start <  time_from_start) return false; ;
    }

    return ret;
}

bool trajectory_msgs::MultiDOFJointTrajectoryPoint::operator>(const trajectory_msgs::MultiDOFJointTrajectoryPoint & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (transforms > inobj.transforms) return true;
        if (inobj.transforms >  transforms) return false; 
        if (velocities > inobj.velocities) return true;
        if (inobj.velocities >  velocities) return false; 
        if (accelerations > inobj.accelerations) return true;
        if (inobj.accelerations >  accelerations) return false; 
        if (time_from_start > inobj.time_from_start) return true;
        if (inobj.time_from_start >  time_from_start) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const trajectory_msgs::MultiDOFJointTrajectoryPoint & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"transforms",t.transforms,indent,false);
    rframe::json_io::encode(sstr,"velocities",t.velocities,indent,false);
    rframe::json_io::encode(sstr,"accelerations",t.accelerations,indent,false);
    rframe::json_io::encode(sstr,"time_from_start",t.time_from_start,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string trajectory_msgs::MultiDOFJointTrajectoryPoint::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const trajectory_msgs::MultiDOFJointTrajectoryPoint & value)
{
    return s << value.toStr(false);
}

