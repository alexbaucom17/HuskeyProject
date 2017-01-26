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
#include "turtle_actionlib/ShapeGoal.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int turtle_actionlib::ShapeGoal::ID;
const unsigned int turtle_actionlib::ShapeGoal::DATA_VERSION;
const std::string turtle_actionlib::ShapeGoal::DATA_TYPE_NAME = "ShapeGoal";
const std::string turtle_actionlib::ShapeGoal::DATA_TYPE_FULL_NAME = "turtle_actionlib::ShapeGoal";
const std::string turtle_actionlib::ShapeGoal::VERSION_MD5 = "b316fe6d42acd3a997ee03e038210e49";
/* xml source for this class */
const std::string turtle_actionlib::ShapeGoal::XML_SOURCE = "<class name=\"ShapeGoal\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"3b9202ab7292cebe5a95ab2bf6b9c091\" rosDesc=\"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n#goal definition\\nint32 edges\\nfloat32 radius\\n\" comment=\"====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ====== goal definition\" id=\"1300583015\">\
  <field name=\"edges\" type=\"int\" sourceType=\"int32\" comment=\"\"/>\
  <field name=\"radius\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
</class>";

turtle_actionlib::ShapeGoal::ShapeGoal() : edges(0), radius(0)
{  
};

turtle_actionlib::ShapeGoal::ShapeGoal(const turtle_actionlib::ShapeGoal & inobj) : edges(inobj.edges), radius(inobj.radius)
{
};

turtle_actionlib::ShapeGoal::~ShapeGoal()
{
};

turtle_actionlib::ShapeGoal * turtle_actionlib::ShapeGoal::New()
{ 
    return new ShapeGoal();
};

bool turtle_actionlib::ShapeGoal::dataTypeFlat() 
{  
    return true;
};

turtle_actionlib::ShapeGoal & turtle_actionlib::ShapeGoal::operator=(const turtle_actionlib::ShapeGoal & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus turtle_actionlib::ShapeGoal is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(turtle_actionlib::ShapeGoal));
        }
        else */ 
        {

            edges = inobj.edges;
            radius = inobj.radius;
        }
    }

    return *this;
}

bool turtle_actionlib::ShapeGoal::operator==(const turtle_actionlib::ShapeGoal & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (edges == inobj.edges)
             && (radius == inobj.radius);
    }

    return ret;
}

bool turtle_actionlib::ShapeGoal::operator!=(const turtle_actionlib::ShapeGoal & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool turtle_actionlib::ShapeGoal::operator<(const turtle_actionlib::ShapeGoal & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (edges < inobj.edges) return true;
        if (inobj.edges <  edges) return false; 
        if (radius < inobj.radius) return true;
        if (inobj.radius <  radius) return false; ;
    }

    return ret;
}

bool turtle_actionlib::ShapeGoal::operator>(const turtle_actionlib::ShapeGoal & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (edges > inobj.edges) return true;
        if (inobj.edges >  edges) return false; 
        if (radius > inobj.radius) return true;
        if (inobj.radius >  radius) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const turtle_actionlib::ShapeGoal & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"edges",t.edges,indent,false);
    rframe::json_io::encode(sstr,"radius",t.radius,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string turtle_actionlib::ShapeGoal::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const turtle_actionlib::ShapeGoal & value)
{
    return s << value.toStr(false);
}

