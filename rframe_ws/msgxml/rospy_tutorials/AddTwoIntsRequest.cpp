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
#include "rospy_tutorials/AddTwoIntsRequest.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int rospy_tutorials::AddTwoIntsRequest::ID;
const unsigned int rospy_tutorials::AddTwoIntsRequest::DATA_VERSION;
const std::string rospy_tutorials::AddTwoIntsRequest::DATA_TYPE_NAME = "AddTwoIntsRequest";
const std::string rospy_tutorials::AddTwoIntsRequest::DATA_TYPE_FULL_NAME = "rospy_tutorials::AddTwoIntsRequest";
const std::string rospy_tutorials::AddTwoIntsRequest::VERSION_MD5 = "26a02fcf5060e2e506ce0b9e448ce353";
/* xml source for this class */
const std::string rospy_tutorials::AddTwoIntsRequest::XML_SOURCE = "<class name=\"AddTwoIntsRequest\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\" id=\"862848161\">\
  <field name=\"a\" type=\"long long int\" sourceType=\"int64\" comment=\"\"/>\
  <field name=\"b\" type=\"long long int\" sourceType=\"int64\" comment=\"no comment provided\"/>\
</class>";

rospy_tutorials::AddTwoIntsRequest::AddTwoIntsRequest() : a(0), b(0)
{  
};

rospy_tutorials::AddTwoIntsRequest::AddTwoIntsRequest(const rospy_tutorials::AddTwoIntsRequest & inobj) : a(inobj.a), b(inobj.b)
{
};

rospy_tutorials::AddTwoIntsRequest::~AddTwoIntsRequest()
{
};

rospy_tutorials::AddTwoIntsRequest * rospy_tutorials::AddTwoIntsRequest::New()
{ 
    return new AddTwoIntsRequest();
};

bool rospy_tutorials::AddTwoIntsRequest::dataTypeFlat() 
{  
    return true;
};

rospy_tutorials::AddTwoIntsRequest & rospy_tutorials::AddTwoIntsRequest::operator=(const rospy_tutorials::AddTwoIntsRequest & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus rospy_tutorials::AddTwoIntsRequest is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(rospy_tutorials::AddTwoIntsRequest));
        }
        else */ 
        {

            a = inobj.a;
            b = inobj.b;
        }
    }

    return *this;
}

bool rospy_tutorials::AddTwoIntsRequest::operator==(const rospy_tutorials::AddTwoIntsRequest & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (a == inobj.a)
             && (b == inobj.b);
    }

    return ret;
}

bool rospy_tutorials::AddTwoIntsRequest::operator!=(const rospy_tutorials::AddTwoIntsRequest & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool rospy_tutorials::AddTwoIntsRequest::operator<(const rospy_tutorials::AddTwoIntsRequest & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (a < inobj.a) return true;
        if (inobj.a <  a) return false; 
        if (b < inobj.b) return true;
        if (inobj.b <  b) return false; ;
    }

    return ret;
}

bool rospy_tutorials::AddTwoIntsRequest::operator>(const rospy_tutorials::AddTwoIntsRequest & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (a > inobj.a) return true;
        if (inobj.a >  a) return false; 
        if (b > inobj.b) return true;
        if (inobj.b >  b) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const rospy_tutorials::AddTwoIntsRequest & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"a",t.a,indent,false);
    rframe::json_io::encode(sstr,"b",t.b,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string rospy_tutorials::AddTwoIntsRequest::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const rospy_tutorials::AddTwoIntsRequest & value)
{
    return s << value.toStr(false);
}

