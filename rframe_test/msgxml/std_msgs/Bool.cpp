// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:55 -0500
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
#include "std_msgs/Bool.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int std_msgs::Bool::ID;
const unsigned int std_msgs::Bool::DATA_VERSION;
const std::string std_msgs::Bool::DATA_TYPE_NAME = "Bool";
const std::string std_msgs::Bool::DATA_TYPE_FULL_NAME = "std_msgs::Bool";
const std::string std_msgs::Bool::VERSION_MD5 = "d8082f862916f54764aef5fdb57208d2";
/* xml source for this class */
const std::string std_msgs::Bool::XML_SOURCE = "<class name=\"Bool\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"8b94c1b53db61fb6aed406028ad6332a\" rosDesc=\"\" comment=\"\" id=\"2068109264\">\
  <field name=\"data\" type=\"bool\" sourceType=\"bool\" comment=\"\"/>\
</class>";

std_msgs::Bool::Bool() : data(0)
{  
};

std_msgs::Bool::Bool(const std_msgs::Bool & inobj) : data(inobj.data)
{
};

std_msgs::Bool::~Bool()
{
};

std_msgs::Bool * std_msgs::Bool::New()
{ 
    return new Bool();
};

bool std_msgs::Bool::dataTypeFlat() 
{  
    return true;
};

std_msgs::Bool & std_msgs::Bool::operator=(const std_msgs::Bool & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus std_msgs::Bool is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(std_msgs::Bool));
        }
        else */ 
        {

            data = inobj.data;
        }
    }

    return *this;
}

bool std_msgs::Bool::operator==(const std_msgs::Bool & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (data == inobj.data);
    }

    return ret;
}

bool std_msgs::Bool::operator!=(const std_msgs::Bool & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool std_msgs::Bool::operator<(const std_msgs::Bool & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (data < inobj.data) return true;
        if (inobj.data <  data) return false; ;
    }

    return ret;
}

bool std_msgs::Bool::operator>(const std_msgs::Bool & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (data > inobj.data) return true;
        if (inobj.data >  data) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const std_msgs::Bool & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"data",t.data,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string std_msgs::Bool::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const std_msgs::Bool & value)
{
    return s << value.toStr(false);
}
