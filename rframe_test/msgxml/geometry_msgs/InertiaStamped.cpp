// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:49 -0500
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
#include "geometry_msgs/InertiaStamped.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int geometry_msgs::InertiaStamped::ID;
const unsigned int geometry_msgs::InertiaStamped::DATA_VERSION;
const std::string geometry_msgs::InertiaStamped::DATA_TYPE_NAME = "InertiaStamped";
const std::string geometry_msgs::InertiaStamped::DATA_TYPE_FULL_NAME = "geometry_msgs::InertiaStamped";
const std::string geometry_msgs::InertiaStamped::VERSION_MD5 = "8d2232cb721271d1d0599799dca44c96";
/* xml source for this class */
const std::string geometry_msgs::InertiaStamped::XML_SOURCE = "<class name=\"InertiaStamped\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"ddee48caeab5a966c5e8d166654a9ac7\" rosDesc=\"Header header\\nInertia inertia\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: geometry_msgs/Inertia\\n# Mass [kg]\\nfloat64 m\\n\\n# Center of mass [m]\\ngeometry_msgs/Vector3 com\\n\\n# Inertia Tensor [kg-m^2]\\n#     | ixx ixy ixz |\\n# I = | ixy iyy iyz |\\n#     | ixz iyz izz |\\nfloat64 ixx\\nfloat64 ixy\\nfloat64 ixz\\nfloat64 iyy\\nfloat64 iyz\\nfloat64 izz\\n\\n================================================================================\\nMSG: geometry_msgs/Vector3\\n# This represents a vector in free space. \\n# It is only meant to represent a direction. Therefore, it does not\\n# make sense to apply a translation to it (e.g., when applying a \\n# generic rigid transformation to a Vector3, tf2 will only apply the\\n# rotation). If you want your data to be translatable too, use the\\n# geometry_msgs/Point message instead.\\n\\nfloat64 x\\nfloat64 y\\n\" comment=\"\" id=\"1901327795\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"\"/>\
  <field name=\"inertia\" type=\"Inertia\" sourceType=\"Inertia\" comment=\"\"/>\
</class>";

geometry_msgs::InertiaStamped::InertiaStamped() : header(), inertia()
{  
};

geometry_msgs::InertiaStamped::InertiaStamped(const geometry_msgs::InertiaStamped & inobj) : header(inobj.header), inertia(inobj.inertia)
{
};

geometry_msgs::InertiaStamped::~InertiaStamped()
{
};

geometry_msgs::InertiaStamped * geometry_msgs::InertiaStamped::New()
{ 
    return new InertiaStamped();
};

bool geometry_msgs::InertiaStamped::dataTypeFlat() 
{  
    return std_msgs::Header::dataTypeFlat() && Inertia::dataTypeFlat();

};

geometry_msgs::InertiaStamped & geometry_msgs::InertiaStamped::operator=(const geometry_msgs::InertiaStamped & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus geometry_msgs::InertiaStamped is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(geometry_msgs::InertiaStamped));
        }
        else */ 
        {

            header = inobj.header;
            inertia = inobj.inertia;
        }
    }

    return *this;
}

bool geometry_msgs::InertiaStamped::operator==(const geometry_msgs::InertiaStamped & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (header == inobj.header)
             && (inertia == inobj.inertia);
    }

    return ret;
}

bool geometry_msgs::InertiaStamped::operator!=(const geometry_msgs::InertiaStamped & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool geometry_msgs::InertiaStamped::operator<(const geometry_msgs::InertiaStamped & inobj) const
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
        if (inertia < inobj.inertia) return true;
        if (inobj.inertia <  inertia) return false; ;
    }

    return ret;
}

bool geometry_msgs::InertiaStamped::operator>(const geometry_msgs::InertiaStamped & inobj) const
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
        if (inertia > inobj.inertia) return true;
        if (inobj.inertia >  inertia) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const geometry_msgs::InertiaStamped & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"header",t.header,indent,false);
    rframe::json_io::encode(sstr,"inertia",t.inertia,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string geometry_msgs::InertiaStamped::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const geometry_msgs::InertiaStamped & value)
{
    return s << value.toStr(false);
}
