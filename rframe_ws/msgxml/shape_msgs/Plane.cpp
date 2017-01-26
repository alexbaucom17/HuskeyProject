// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:07 -0500
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
#include "shape_msgs/Plane.h"
#include <string.h> // for memset 
#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int shape_msgs::Plane::ID;
const unsigned int shape_msgs::Plane::DATA_VERSION;
const std::string shape_msgs::Plane::DATA_TYPE_NAME = "Plane";
const std::string shape_msgs::Plane::DATA_TYPE_FULL_NAME = "shape_msgs::Plane";
const std::string shape_msgs::Plane::VERSION_MD5 = "509493124fdc15dd661df8ea458b923c";
/* xml source for this class */
const std::string shape_msgs::Plane::XML_SOURCE = "<class name=\"Plane\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"2c1b92ed8f31492f8e73f6a4a44ca796\" rosDesc=\"# Representation of a plane, using the plane equation ax + by + cz + d = 0\\n\\n# a := coef[0]\\n# b := coef[1]\\n# c := coef[2]\\n# d := coef[3]\\n\\nfloat64[4] coef\\n\" comment=\"Representation of a plane, using the plane equation ax + by + cz + d = 0\" id=\"2077658563\">\
  <field name=\"coef\" type=\"double\" size=\"4\" sourceType=\"float64\" comment=\"\"/>\
</class>";

shape_msgs::Plane::Plane() 
{  
    memset(coef.data(),0,sizeof(double)*4); 
};

shape_msgs::Plane::Plane(const shape_msgs::Plane & inobj) 
{
    coef = inobj.coef;
};

shape_msgs::Plane::~Plane()
{
};

shape_msgs::Plane * shape_msgs::Plane::New()
{ 
    return new Plane();
};

bool shape_msgs::Plane::dataTypeFlat() 
{  
    return true;
};

shape_msgs::Plane & shape_msgs::Plane::operator=(const shape_msgs::Plane & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus shape_msgs::Plane is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(shape_msgs::Plane));
        }
        else */ 
        {

            coef = inobj.coef;
        }
    }

    return *this;
}

bool shape_msgs::Plane::operator==(const shape_msgs::Plane & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (coef == inobj.coef);
    }

    return ret;
}

bool shape_msgs::Plane::operator!=(const shape_msgs::Plane & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool shape_msgs::Plane::operator<(const shape_msgs::Plane & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (coef < inobj.coef) return true;
        if (inobj.coef <  coef) return false; ;
    }

    return ret;
}

bool shape_msgs::Plane::operator>(const shape_msgs::Plane & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (coef > inobj.coef) return true;
        if (inobj.coef >  coef) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const shape_msgs::Plane & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"coef",t.coef,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string shape_msgs::Plane::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const shape_msgs::Plane & value)
{
    return s << value.toStr(false);
}

