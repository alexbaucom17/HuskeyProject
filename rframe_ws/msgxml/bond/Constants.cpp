// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:03 -0500
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
#include "bond/Constants.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const float bond::Constants::DEAD_PUBLISH_PERIOD = 0.05;
const float bond::Constants::DEFAULT_CONNECT_TIMEOUT = 10.0;
const float bond::Constants::DEFAULT_HEARTBEAT_TIMEOUT = 4.0;
const float bond::Constants::DEFAULT_DISCONNECT_TIMEOUT = 2.0;
const float bond::Constants::DEFAULT_HEARTBEAT_PERIOD = 1.0;
const std::string bond::Constants::DISABLE_HEARTBEAT_TIMEOUT_PARAM = "/bond_disable_heartbeat_timeout";

const unsigned int bond::Constants::ID;
const unsigned int bond::Constants::DATA_VERSION;
const std::string bond::Constants::DATA_TYPE_NAME = "Constants";
const std::string bond::Constants::DATA_TYPE_FULL_NAME = "bond::Constants";
const std::string bond::Constants::VERSION_MD5 = "6f06db9d3ea7e87c2317cdb3220d98fc";
/* xml source for this class */
const std::string bond::Constants::XML_SOURCE = "<class name=\"Constants\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"6fc594dc1d7bd7919077042712f8c8b0\" rosDesc=\"float32 DEAD_PUBLISH_PERIOD = 0.05\\nfloat32 DEFAULT_CONNECT_TIMEOUT = 10.0\\nfloat32 DEFAULT_HEARTBEAT_TIMEOUT = 4.0\\nfloat32 DEFAULT_DISCONNECT_TIMEOUT = 2.0\\nfloat32 DEFAULT_HEARTBEAT_PERIOD = 1.0\\n\\n\" comment=\"\" id=\"202404712\">\
  <constant init=\"0.05\" name=\"DEAD_PUBLISH_PERIOD\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <constant init=\"10.0\" name=\"DEFAULT_CONNECT_TIMEOUT\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <constant init=\"4.0\" name=\"DEFAULT_HEARTBEAT_TIMEOUT\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <constant init=\"2.0\" name=\"DEFAULT_DISCONNECT_TIMEOUT\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <constant init=\"1.0\" name=\"DEFAULT_HEARTBEAT_PERIOD\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <constant init=\"/bond_disable_heartbeat_timeout\" name=\"DISABLE_HEARTBEAT_TIMEOUT_PARAM\" type=\"string\" sourceType=\"string\" comment=\"\"/>\
</class>";

bond::Constants::Constants() 
{  
};

bond::Constants::Constants(const bond::Constants & inobj) 
{
};

bond::Constants::~Constants()
{
};

bond::Constants * bond::Constants::New()
{ 
    return new Constants();
};

bool bond::Constants::dataTypeFlat() 
{  
    return true;
};

bond::Constants & bond::Constants::operator=(const bond::Constants & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus bond::Constants is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(bond::Constants));
        }
        else */ 
        {

        }
    }

    return *this;
}

bool bond::Constants::operator==(const bond::Constants & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
    }

    return ret;
}

bool bond::Constants::operator!=(const bond::Constants & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool bond::Constants::operator<(const bond::Constants & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm
        ;
    }

    return ret;
}

bool bond::Constants::operator>(const bond::Constants & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm
        ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const bond::Constants & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string bond::Constants::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const bond::Constants & value)
{
    return s << value.toStr(false);
}

