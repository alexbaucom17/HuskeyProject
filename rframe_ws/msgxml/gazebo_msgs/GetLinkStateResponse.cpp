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
#include "gazebo_msgs/GetLinkStateResponse.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int gazebo_msgs::GetLinkStateResponse::ID;
const unsigned int gazebo_msgs::GetLinkStateResponse::DATA_VERSION;
const std::string gazebo_msgs::GetLinkStateResponse::DATA_TYPE_NAME = "GetLinkStateResponse";
const std::string gazebo_msgs::GetLinkStateResponse::DATA_TYPE_FULL_NAME = "gazebo_msgs::GetLinkStateResponse";
const std::string gazebo_msgs::GetLinkStateResponse::VERSION_MD5 = "344a8ce563b593470472f3097c4c021f";
/* xml source for this class */
const std::string gazebo_msgs::GetLinkStateResponse::XML_SOURCE = "<class name=\"GetLinkStateResponse\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\" id=\"1781288141\">\
  <field name=\"link_state\" type=\"gazebo_msgs::LinkState\" sourceType=\"gazebo_msgs::LinkState\" comment=\"\"/>\
  <field name=\"success\" type=\"bool\" sourceType=\"bool\" comment=\"return true if get info is successful\"/>\
  <field name=\"status_message\" type=\"string\" sourceType=\"string\" comment=\"comments if available\"/>\
</class>";

gazebo_msgs::GetLinkStateResponse::GetLinkStateResponse() : link_state(), success(0), status_message()
{  
};

gazebo_msgs::GetLinkStateResponse::GetLinkStateResponse(const gazebo_msgs::GetLinkStateResponse & inobj) : link_state(inobj.link_state), success(inobj.success), status_message(inobj.status_message)
{
};

gazebo_msgs::GetLinkStateResponse::~GetLinkStateResponse()
{
};

gazebo_msgs::GetLinkStateResponse * gazebo_msgs::GetLinkStateResponse::New()
{ 
    return new GetLinkStateResponse();
};

bool gazebo_msgs::GetLinkStateResponse::dataTypeFlat() 
{  
    return gazebo_msgs::LinkState::dataTypeFlat() && rframe::CodeGenTraits<std::string>::flat();

};

gazebo_msgs::GetLinkStateResponse & gazebo_msgs::GetLinkStateResponse::operator=(const gazebo_msgs::GetLinkStateResponse & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus gazebo_msgs::GetLinkStateResponse is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(gazebo_msgs::GetLinkStateResponse));
        }
        else */ 
        {

            link_state = inobj.link_state;
            success = inobj.success;
            status_message = inobj.status_message;
        }
    }

    return *this;
}

bool gazebo_msgs::GetLinkStateResponse::operator==(const gazebo_msgs::GetLinkStateResponse & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (link_state == inobj.link_state)
             && (success == inobj.success)
             && (status_message == inobj.status_message);
    }

    return ret;
}

bool gazebo_msgs::GetLinkStateResponse::operator!=(const gazebo_msgs::GetLinkStateResponse & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool gazebo_msgs::GetLinkStateResponse::operator<(const gazebo_msgs::GetLinkStateResponse & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (link_state < inobj.link_state) return true;
        if (inobj.link_state <  link_state) return false; 
        if (success < inobj.success) return true;
        if (inobj.success <  success) return false; 
        if (status_message < inobj.status_message) return true;
        if (inobj.status_message <  status_message) return false; ;
    }

    return ret;
}

bool gazebo_msgs::GetLinkStateResponse::operator>(const gazebo_msgs::GetLinkStateResponse & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (link_state > inobj.link_state) return true;
        if (inobj.link_state >  link_state) return false; 
        if (success > inobj.success) return true;
        if (inobj.success >  success) return false; 
        if (status_message > inobj.status_message) return true;
        if (inobj.status_message >  status_message) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const gazebo_msgs::GetLinkStateResponse & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"link_state",t.link_state,indent,false);
    rframe::json_io::encode(sstr,"success",t.success,indent,false);
    rframe::json_io::encode(sstr,"status_message",t.status_message,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string gazebo_msgs::GetLinkStateResponse::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const gazebo_msgs::GetLinkStateResponse & value)
{
    return s << value.toStr(false);
}

