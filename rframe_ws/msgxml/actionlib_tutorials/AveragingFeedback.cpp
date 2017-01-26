// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:45 -0500
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
#include "actionlib_tutorials/AveragingFeedback.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int actionlib_tutorials::AveragingFeedback::ID;
const unsigned int actionlib_tutorials::AveragingFeedback::DATA_VERSION;
const std::string actionlib_tutorials::AveragingFeedback::DATA_TYPE_NAME = "AveragingFeedback";
const std::string actionlib_tutorials::AveragingFeedback::DATA_TYPE_FULL_NAME = "actionlib_tutorials::AveragingFeedback";
const std::string actionlib_tutorials::AveragingFeedback::VERSION_MD5 = "bc09c66baea0acd54dbcb316ddedb885";
/* xml source for this class */
const std::string actionlib_tutorials::AveragingFeedback::XML_SOURCE = "<class name=\"AveragingFeedback\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"9e8dfc53c2f2a032ca33fa80ec46fd4f\" rosDesc=\"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n#feedback\\nint32 sample\\nfloat32 data\\nfloat32 mean\\nfloat32 std_dev\\n\\n\" comment=\"====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ====== feedback\" id=\"1868636215\">\
  <field name=\"sample\" type=\"int\" sourceType=\"int32\" comment=\"\"/>\
  <field name=\"data\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <field name=\"mean\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <field name=\"std_dev\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
</class>";

actionlib_tutorials::AveragingFeedback::AveragingFeedback() : sample(0), data(0), mean(0), std_dev(0)
{  
};

actionlib_tutorials::AveragingFeedback::AveragingFeedback(const actionlib_tutorials::AveragingFeedback & inobj) : sample(inobj.sample), data(inobj.data), mean(inobj.mean), std_dev(inobj.std_dev)
{
};

actionlib_tutorials::AveragingFeedback::~AveragingFeedback()
{
};

actionlib_tutorials::AveragingFeedback * actionlib_tutorials::AveragingFeedback::New()
{ 
    return new AveragingFeedback();
};

bool actionlib_tutorials::AveragingFeedback::dataTypeFlat() 
{  
    return true;
};

actionlib_tutorials::AveragingFeedback & actionlib_tutorials::AveragingFeedback::operator=(const actionlib_tutorials::AveragingFeedback & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus actionlib_tutorials::AveragingFeedback is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(actionlib_tutorials::AveragingFeedback));
        }
        else */ 
        {

            sample = inobj.sample;
            data = inobj.data;
            mean = inobj.mean;
            std_dev = inobj.std_dev;
        }
    }

    return *this;
}

bool actionlib_tutorials::AveragingFeedback::operator==(const actionlib_tutorials::AveragingFeedback & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (sample == inobj.sample)
             && (data == inobj.data)
             && (mean == inobj.mean)
             && (std_dev == inobj.std_dev);
    }

    return ret;
}

bool actionlib_tutorials::AveragingFeedback::operator!=(const actionlib_tutorials::AveragingFeedback & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool actionlib_tutorials::AveragingFeedback::operator<(const actionlib_tutorials::AveragingFeedback & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (sample < inobj.sample) return true;
        if (inobj.sample <  sample) return false; 
        if (data < inobj.data) return true;
        if (inobj.data <  data) return false; 
        if (mean < inobj.mean) return true;
        if (inobj.mean <  mean) return false; 
        if (std_dev < inobj.std_dev) return true;
        if (inobj.std_dev <  std_dev) return false; ;
    }

    return ret;
}

bool actionlib_tutorials::AveragingFeedback::operator>(const actionlib_tutorials::AveragingFeedback & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (sample > inobj.sample) return true;
        if (inobj.sample >  sample) return false; 
        if (data > inobj.data) return true;
        if (inobj.data >  data) return false; 
        if (mean > inobj.mean) return true;
        if (inobj.mean >  mean) return false; 
        if (std_dev > inobj.std_dev) return true;
        if (inobj.std_dev >  std_dev) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const actionlib_tutorials::AveragingFeedback & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"sample",t.sample,indent,false);
    rframe::json_io::encode(sstr,"data",t.data,indent,false);
    rframe::json_io::encode(sstr,"mean",t.mean,indent,false);
    rframe::json_io::encode(sstr,"std_dev",t.std_dev,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string actionlib_tutorials::AveragingFeedback::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const actionlib_tutorials::AveragingFeedback & value)
{
    return s << value.toStr(false);
}
