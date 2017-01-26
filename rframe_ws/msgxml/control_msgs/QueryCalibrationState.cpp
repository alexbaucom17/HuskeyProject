// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:04 -0500
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
#include "control_msgs/QueryCalibrationState.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int control_msgs::QueryCalibrationState::ID;
const unsigned int control_msgs::QueryCalibrationState::DATA_VERSION;
const std::string control_msgs::QueryCalibrationState::DATA_TYPE_NAME = "QueryCalibrationState";
const std::string control_msgs::QueryCalibrationState::DATA_TYPE_FULL_NAME = "control_msgs::QueryCalibrationState";
const std::string control_msgs::QueryCalibrationState::VERSION_MD5 = "c416e7c100e45ff43ae3f7e6c9683016";
/* xml source for this class */
const std::string control_msgs::QueryCalibrationState::XML_SOURCE = "<class name=\"QueryCalibrationState\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\" id=\"1246705470\">\
  <definition name=\"Request\" type=\"QueryCalibrationStateRequest\"/>\
  <definition name=\"Response\" type=\"QueryCalibrationStateResponse\"/>\
  <field name=\"request\" type=\"Request\" comment=\"request data type\"/>\
  <field name=\"response\" type=\"Response\" comment=\"response data type\"/>\
</class>";

control_msgs::QueryCalibrationState::QueryCalibrationState() : request(), response()
{  
};

control_msgs::QueryCalibrationState::QueryCalibrationState(const control_msgs::QueryCalibrationState & inobj) : request(inobj.request), response(inobj.response)
{
};

control_msgs::QueryCalibrationState::~QueryCalibrationState()
{
};

control_msgs::QueryCalibrationState * control_msgs::QueryCalibrationState::New()
{ 
    return new QueryCalibrationState();
};

bool control_msgs::QueryCalibrationState::dataTypeFlat() 
{  
    return QueryCalibrationStateRequest::dataTypeFlat() && QueryCalibrationStateResponse::dataTypeFlat();

};

control_msgs::QueryCalibrationState & control_msgs::QueryCalibrationState::operator=(const control_msgs::QueryCalibrationState & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus control_msgs::QueryCalibrationState is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(control_msgs::QueryCalibrationState));
        }
        else */ 
        {

            request = inobj.request;
            response = inobj.response;
        }
    }

    return *this;
}

bool control_msgs::QueryCalibrationState::operator==(const control_msgs::QueryCalibrationState & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (request == inobj.request)
             && (response == inobj.response);
    }

    return ret;
}

bool control_msgs::QueryCalibrationState::operator!=(const control_msgs::QueryCalibrationState & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool control_msgs::QueryCalibrationState::operator<(const control_msgs::QueryCalibrationState & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (request < inobj.request) return true;
        if (inobj.request <  request) return false; 
        if (response < inobj.response) return true;
        if (inobj.response <  response) return false; ;
    }

    return ret;
}

bool control_msgs::QueryCalibrationState::operator>(const control_msgs::QueryCalibrationState & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (request > inobj.request) return true;
        if (inobj.request >  request) return false; 
        if (response > inobj.response) return true;
        if (inobj.response >  response) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const control_msgs::QueryCalibrationState & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"request",t.request,indent,false);
    rframe::json_io::encode(sstr,"response",t.response,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string control_msgs::QueryCalibrationState::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const control_msgs::QueryCalibrationState & value)
{
    return s << value.toStr(false);
}

