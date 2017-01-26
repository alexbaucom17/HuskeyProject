// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:05 -0500
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
#include "gazebo_msgs/GetJointPropertiesResponse.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned char gazebo_msgs::GetJointPropertiesResponse::REVOLUTE = 0;
const unsigned char gazebo_msgs::GetJointPropertiesResponse::CONTINUOUS = 1;
const unsigned char gazebo_msgs::GetJointPropertiesResponse::PRISMATIC = 2;
const unsigned char gazebo_msgs::GetJointPropertiesResponse::FIXED = 3;
const unsigned char gazebo_msgs::GetJointPropertiesResponse::BALL = 4;
const unsigned char gazebo_msgs::GetJointPropertiesResponse::UNIVERSAL = 5;

const unsigned int gazebo_msgs::GetJointPropertiesResponse::ID;
const unsigned int gazebo_msgs::GetJointPropertiesResponse::DATA_VERSION;
const std::string gazebo_msgs::GetJointPropertiesResponse::DATA_TYPE_NAME = "GetJointPropertiesResponse";
const std::string gazebo_msgs::GetJointPropertiesResponse::DATA_TYPE_FULL_NAME = "gazebo_msgs::GetJointPropertiesResponse";
const std::string gazebo_msgs::GetJointPropertiesResponse::VERSION_MD5 = "ff4aa507e5b9b40e039452aeeade2fad";
/* xml source for this class */
const std::string gazebo_msgs::GetJointPropertiesResponse::XML_SOURCE = "<class name=\"GetJointPropertiesResponse\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\" id=\"1781288135\">\
  <field name=\"type\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
  <constant init=\"0\" name=\"REVOLUTE\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"single DOF\"/>\
  <constant init=\"1\" name=\"CONTINUOUS\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"single DOF (revolute w/o joints)\"/>\
  <constant init=\"2\" name=\"PRISMATIC\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"single DOF\"/>\
  <constant init=\"3\" name=\"FIXED\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"0 DOF\"/>\
  <constant init=\"4\" name=\"BALL\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"3 DOF\"/>\
  <constant init=\"5\" name=\"UNIVERSAL\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"2 DOF  dynamics properties\"/>\
  <field name=\"damping\" type=\"vector(double)\" sourceType=\"float64\" comment=\"joint state\"/>\
  <field name=\"position\" type=\"vector(double)\" sourceType=\"float64\" comment=\"\"/>\
  <field name=\"rate\" type=\"vector(double)\" sourceType=\"float64\" comment=\"service return status\"/>\
  <field name=\"success\" type=\"bool\" sourceType=\"bool\" comment=\"return true if get successful\"/>\
  <field name=\"status_message\" type=\"string\" sourceType=\"string\" comment=\"comments if available\"/>\
</class>";

gazebo_msgs::GetJointPropertiesResponse::GetJointPropertiesResponse() : type(0), damping(), position(), rate(), success(0), status_message()
{  
};

gazebo_msgs::GetJointPropertiesResponse::GetJointPropertiesResponse(const gazebo_msgs::GetJointPropertiesResponse & inobj) : type(inobj.type), damping(inobj.damping), position(inobj.position), rate(inobj.rate), success(inobj.success), status_message(inobj.status_message)
{
};

gazebo_msgs::GetJointPropertiesResponse::~GetJointPropertiesResponse()
{
};

gazebo_msgs::GetJointPropertiesResponse * gazebo_msgs::GetJointPropertiesResponse::New()
{ 
    return new GetJointPropertiesResponse();
};

bool gazebo_msgs::GetJointPropertiesResponse::dataTypeFlat() 
{   
    return false; 
};

gazebo_msgs::GetJointPropertiesResponse & gazebo_msgs::GetJointPropertiesResponse::operator=(const gazebo_msgs::GetJointPropertiesResponse & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus gazebo_msgs::GetJointPropertiesResponse is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(gazebo_msgs::GetJointPropertiesResponse));
        }
        else */ 
        {

            type = inobj.type;
            damping = inobj.damping;
            position = inobj.position;
            rate = inobj.rate;
            success = inobj.success;
            status_message = inobj.status_message;
        }
    }

    return *this;
}

bool gazebo_msgs::GetJointPropertiesResponse::operator==(const gazebo_msgs::GetJointPropertiesResponse & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (type == inobj.type)
             && (damping == inobj.damping)
             && (position == inobj.position)
             && (rate == inobj.rate)
             && (success == inobj.success)
             && (status_message == inobj.status_message);
    }

    return ret;
}

bool gazebo_msgs::GetJointPropertiesResponse::operator!=(const gazebo_msgs::GetJointPropertiesResponse & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool gazebo_msgs::GetJointPropertiesResponse::operator<(const gazebo_msgs::GetJointPropertiesResponse & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (type < inobj.type) return true;
        if (inobj.type <  type) return false; 
        if (damping < inobj.damping) return true;
        if (inobj.damping <  damping) return false; 
        if (position < inobj.position) return true;
        if (inobj.position <  position) return false; 
        if (rate < inobj.rate) return true;
        if (inobj.rate <  rate) return false; 
        if (success < inobj.success) return true;
        if (inobj.success <  success) return false; 
        if (status_message < inobj.status_message) return true;
        if (inobj.status_message <  status_message) return false; ;
    }

    return ret;
}

bool gazebo_msgs::GetJointPropertiesResponse::operator>(const gazebo_msgs::GetJointPropertiesResponse & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (type > inobj.type) return true;
        if (inobj.type >  type) return false; 
        if (damping > inobj.damping) return true;
        if (inobj.damping >  damping) return false; 
        if (position > inobj.position) return true;
        if (inobj.position >  position) return false; 
        if (rate > inobj.rate) return true;
        if (inobj.rate >  rate) return false; 
        if (success > inobj.success) return true;
        if (inobj.success >  success) return false; 
        if (status_message > inobj.status_message) return true;
        if (inobj.status_message >  status_message) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const gazebo_msgs::GetJointPropertiesResponse & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"type",t.type,indent,false);
    rframe::json_io::encode(sstr,"damping",t.damping,indent,false);
    rframe::json_io::encode(sstr,"position",t.position,indent,false);
    rframe::json_io::encode(sstr,"rate",t.rate,indent,false);
    rframe::json_io::encode(sstr,"success",t.success,indent,false);
    rframe::json_io::encode(sstr,"status_message",t.status_message,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string gazebo_msgs::GetJointPropertiesResponse::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const gazebo_msgs::GetJointPropertiesResponse & value)
{
    return s << value.toStr(false);
}

