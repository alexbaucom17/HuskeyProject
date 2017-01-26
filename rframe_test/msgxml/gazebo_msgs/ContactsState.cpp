// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2016-11-23 17:33:56 -0500
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
#include "gazebo_msgs/ContactsState.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int gazebo_msgs::ContactsState::ID;
const unsigned int gazebo_msgs::ContactsState::DATA_VERSION;
const std::string gazebo_msgs::ContactsState::DATA_TYPE_NAME = "ContactsState";
const std::string gazebo_msgs::ContactsState::DATA_TYPE_FULL_NAME = "gazebo_msgs::ContactsState";
const std::string gazebo_msgs::ContactsState::VERSION_MD5 = "d362cd32b8c19f979cfd9b00d82f814d";
/* xml source for this class */
const std::string gazebo_msgs::ContactsState::XML_SOURCE = "<class name=\"ContactsState\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"acbcb1601a8e525bf72509f18e6f668d\" rosDesc=\"Header header                                   # stamp\\ngazebo_msgs/ContactState[] states            # array of geom pairs in contact\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: gazebo_msgs/ContactState\\nstring info                                   # text info on this contact\\nstring collision1_name                        # name of contact collision1\\nstring collision2_name                        # name of contact collision2\\ngeometry_msgs/Wrench[] wrenches               # list of forces/torques\\ngeometry_msgs/Wrench total_wrench             # sum of forces/torques in every DOF\\ngeometry_msgs/Vector3[] contact_positions     # list of contact position\\ngeometry_msgs/Vector3[] contact_normals       # list of contact normals\\nfloat64[] depths                              # list of penetration depths\\n\\n================================================================================\\nMSG: geometry_msgs/Wrench\\n# This represents force in free space, separated into\\n# its linear and angular parts.\\nVector3  force\\nVector3  torque\\n\\n================================================================================\\nMSG: geometry_msgs/Vector3\\n# This represents a vector in free space. \\n# It is only meant to represent a direction. Therefore, it does not\\n# make sense to apply a translation to it (e.g., when applying a \\n# generic rigid transformation to a Vector3, tf2 will only apply the\\n# rotation). If you want your data to be translatable too, use the\\n# geometry_msgs/Point message instead.\\n\\nfloat64 x\\nfloat64 y\\n\" comment=\"\" id=\"1781288114\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"stamp\"/>\
  <field name=\"states\" type=\"vector(gazebo_msgs::ContactState)\" sourceType=\"gazebo_msgs::ContactState\" comment=\"array of geom pairs in contact\"/>\
</class>";

gazebo_msgs::ContactsState::ContactsState() : header(), states()
{  
};

gazebo_msgs::ContactsState::ContactsState(const gazebo_msgs::ContactsState & inobj) : header(inobj.header), states(inobj.states)
{
};

gazebo_msgs::ContactsState::~ContactsState()
{
};

gazebo_msgs::ContactsState * gazebo_msgs::ContactsState::New()
{ 
    return new ContactsState();
};

bool gazebo_msgs::ContactsState::dataTypeFlat() 
{   
    return false; 
};

gazebo_msgs::ContactsState & gazebo_msgs::ContactsState::operator=(const gazebo_msgs::ContactsState & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus gazebo_msgs::ContactsState is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(gazebo_msgs::ContactsState));
        }
        else */ 
        {

            header = inobj.header;
            states = inobj.states;
        }
    }

    return *this;
}

bool gazebo_msgs::ContactsState::operator==(const gazebo_msgs::ContactsState & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (header == inobj.header)
             && (states == inobj.states);
    }

    return ret;
}

bool gazebo_msgs::ContactsState::operator!=(const gazebo_msgs::ContactsState & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool gazebo_msgs::ContactsState::operator<(const gazebo_msgs::ContactsState & inobj) const
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
        if (states < inobj.states) return true;
        if (inobj.states <  states) return false; ;
    }

    return ret;
}

bool gazebo_msgs::ContactsState::operator>(const gazebo_msgs::ContactsState & inobj) const
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
        if (states > inobj.states) return true;
        if (inobj.states >  states) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const gazebo_msgs::ContactsState & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"header",t.header,indent,false);
    rframe::json_io::encode(sstr,"states",t.states,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string gazebo_msgs::ContactsState::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const gazebo_msgs::ContactsState & value)
{
    return s << value.toStr(false);
}
