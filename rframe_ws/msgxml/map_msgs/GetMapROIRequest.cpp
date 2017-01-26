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
#include "map_msgs/GetMapROIRequest.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int map_msgs::GetMapROIRequest::ID;
const unsigned int map_msgs::GetMapROIRequest::DATA_VERSION;
const std::string map_msgs::GetMapROIRequest::DATA_TYPE_NAME = "GetMapROIRequest";
const std::string map_msgs::GetMapROIRequest::DATA_TYPE_FULL_NAME = "map_msgs::GetMapROIRequest";
const std::string map_msgs::GetMapROIRequest::VERSION_MD5 = "6bbcb05d179bab483f87c16b70da7509";
/* xml source for this class */
const std::string map_msgs::GetMapROIRequest::XML_SOURCE = "<class name=\"GetMapROIRequest\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\" id=\"851292628\">\
  <field name=\"x\" type=\"double\" sourceType=\"float64\" comment=\"\"/>\
  <field name=\"y\" type=\"double\" sourceType=\"float64\" comment=\"\"/>\
  <field name=\"l_x\" type=\"double\" sourceType=\"float64\" comment=\"\"/>\
  <field name=\"l_y\" type=\"double\" sourceType=\"float64\" comment=\"no comment provided\"/>\
</class>";

map_msgs::GetMapROIRequest::GetMapROIRequest() : x(0), y(0), l_x(0), l_y(0)
{  
};

map_msgs::GetMapROIRequest::GetMapROIRequest(const map_msgs::GetMapROIRequest & inobj) : x(inobj.x), y(inobj.y), l_x(inobj.l_x), l_y(inobj.l_y)
{
};

map_msgs::GetMapROIRequest::~GetMapROIRequest()
{
};

map_msgs::GetMapROIRequest * map_msgs::GetMapROIRequest::New()
{ 
    return new GetMapROIRequest();
};

bool map_msgs::GetMapROIRequest::dataTypeFlat() 
{  
    return true;
};

map_msgs::GetMapROIRequest & map_msgs::GetMapROIRequest::operator=(const map_msgs::GetMapROIRequest & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus map_msgs::GetMapROIRequest is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(map_msgs::GetMapROIRequest));
        }
        else */ 
        {

            x = inobj.x;
            y = inobj.y;
            l_x = inobj.l_x;
            l_y = inobj.l_y;
        }
    }

    return *this;
}

bool map_msgs::GetMapROIRequest::operator==(const map_msgs::GetMapROIRequest & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (x == inobj.x)
             && (y == inobj.y)
             && (l_x == inobj.l_x)
             && (l_y == inobj.l_y);
    }

    return ret;
}

bool map_msgs::GetMapROIRequest::operator!=(const map_msgs::GetMapROIRequest & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool map_msgs::GetMapROIRequest::operator<(const map_msgs::GetMapROIRequest & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (x < inobj.x) return true;
        if (inobj.x <  x) return false; 
        if (y < inobj.y) return true;
        if (inobj.y <  y) return false; 
        if (l_x < inobj.l_x) return true;
        if (inobj.l_x <  l_x) return false; 
        if (l_y < inobj.l_y) return true;
        if (inobj.l_y <  l_y) return false; ;
    }

    return ret;
}

bool map_msgs::GetMapROIRequest::operator>(const map_msgs::GetMapROIRequest & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (x > inobj.x) return true;
        if (inobj.x >  x) return false; 
        if (y > inobj.y) return true;
        if (inobj.y >  y) return false; 
        if (l_x > inobj.l_x) return true;
        if (inobj.l_x >  l_x) return false; 
        if (l_y > inobj.l_y) return true;
        if (inobj.l_y >  l_y) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const map_msgs::GetMapROIRequest & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"x",t.x,indent,false);
    rframe::json_io::encode(sstr,"y",t.y,indent,false);
    rframe::json_io::encode(sstr,"l_x",t.l_x,indent,false);
    rframe::json_io::encode(sstr,"l_y",t.l_y,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string map_msgs::GetMapROIRequest::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const map_msgs::GetMapROIRequest & value)
{
    return s << value.toStr(false);
}

