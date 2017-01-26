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
#include "geometry_msgs/Point32.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int geometry_msgs::Point32::ID;
const unsigned int geometry_msgs::Point32::DATA_VERSION;
const std::string geometry_msgs::Point32::DATA_TYPE_NAME = "Point32";
const std::string geometry_msgs::Point32::DATA_TYPE_FULL_NAME = "geometry_msgs::Point32";
const std::string geometry_msgs::Point32::VERSION_MD5 = "cbe4550ef5353ec045ec0babfd13d235";
/* xml source for this class */
const std::string geometry_msgs::Point32::XML_SOURCE = "<class name=\"Point32\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"cc153912f1453b708d221682bc23d9ac\" rosDesc=\"# This contains the position of a point in free space(with 32 bits of precision).\\n# It is recommeded to use Point wherever possible instead of Point32.  \\n# \\n# This recommendation is to promote interoperability.  \\n#\\n# This message is designed to take up less space when sending\\n# lots of points at once, as in the case of a PointCloud.  \\n\\nfloat32 x\\nfloat32 y\\n\" comment=\"This contains the position of a point in free space(with 32 bits of precision).  It is recommeded to use Point wherever possible instead of Point32.      This recommendation is to promote interoperability.     This message is designed to take up less space when sending  lots of points at once, as in the case of a PointCloud.\" id=\"1901327797\">\
  <field name=\"x\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <field name=\"y\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <field name=\"z\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
</class>";

geometry_msgs::Point32::Point32() : x(0), y(0), z(0)
{  
};

geometry_msgs::Point32::Point32(const geometry_msgs::Point32 & inobj) : x(inobj.x), y(inobj.y), z(inobj.z)
{
};

geometry_msgs::Point32::~Point32()
{
};

geometry_msgs::Point32 * geometry_msgs::Point32::New()
{ 
    return new Point32();
};

bool geometry_msgs::Point32::dataTypeFlat() 
{  
    return true;
};

geometry_msgs::Point32 & geometry_msgs::Point32::operator=(const geometry_msgs::Point32 & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus geometry_msgs::Point32 is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(geometry_msgs::Point32));
        }
        else */ 
        {

            x = inobj.x;
            y = inobj.y;
            z = inobj.z;
        }
    }

    return *this;
}

bool geometry_msgs::Point32::operator==(const geometry_msgs::Point32 & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (x == inobj.x)
             && (y == inobj.y)
             && (z == inobj.z);
    }

    return ret;
}

bool geometry_msgs::Point32::operator!=(const geometry_msgs::Point32 & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool geometry_msgs::Point32::operator<(const geometry_msgs::Point32 & inobj) const
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
        if (z < inobj.z) return true;
        if (inobj.z <  z) return false; ;
    }

    return ret;
}

bool geometry_msgs::Point32::operator>(const geometry_msgs::Point32 & inobj) const
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
        if (z > inobj.z) return true;
        if (inobj.z >  z) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const geometry_msgs::Point32 & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"x",t.x,indent,false);
    rframe::json_io::encode(sstr,"y",t.y,indent,false);
    rframe::json_io::encode(sstr,"z",t.z,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string geometry_msgs::Point32::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const geometry_msgs::Point32 & value)
{
    return s << value.toStr(false);
}

