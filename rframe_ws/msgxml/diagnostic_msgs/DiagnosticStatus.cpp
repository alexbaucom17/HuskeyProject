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
#include "diagnostic_msgs/DiagnosticStatus.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const char diagnostic_msgs::DiagnosticStatus::OK = 0;
const char diagnostic_msgs::DiagnosticStatus::WARN = 1;
const char diagnostic_msgs::DiagnosticStatus::ERROR = 2;
const char diagnostic_msgs::DiagnosticStatus::STALE = 3;

const unsigned int diagnostic_msgs::DiagnosticStatus::ID;
const unsigned int diagnostic_msgs::DiagnosticStatus::DATA_VERSION;
const std::string diagnostic_msgs::DiagnosticStatus::DATA_TYPE_NAME = "DiagnosticStatus";
const std::string diagnostic_msgs::DiagnosticStatus::DATA_TYPE_FULL_NAME = "diagnostic_msgs::DiagnosticStatus";
const std::string diagnostic_msgs::DiagnosticStatus::VERSION_MD5 = "0ac280bfc82557e279721e20af228be0";
/* xml source for this class */
const std::string diagnostic_msgs::DiagnosticStatus::XML_SOURCE = "<class name=\"DiagnosticStatus\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"d0ce08bc6e5ba34c7754f563a9cabaf1\" rosDesc=\"# This message holds the status of an individual component of the robot.\\n# \\n\\n# Possible levels of operations\\nbyte OK=0\\nbyte WARN=1\\nbyte ERROR=2\\nbyte STALE=3\\n\\nbyte level # level of operation enumerated above \\nstring name # a description of the test/component reporting\\nstring message # a description of the status\\nstring hardware_id # a hardware unique string\\nKeyValue[] values # an array of values associated with the status\\n\\n\\n================================================================================\\nMSG: diagnostic_msgs/KeyValue\\nstring key # what to label this value when viewing\\nstring value # a value to track over time\\n\" comment=\"This message holds the status of an individual component of the robot.\" id=\"1097138108\">\
  <constant init=\"0\" name=\"OK\" type=\"char\" sourceType=\"byte\" comment=\"\"/>\
  <constant init=\"1\" name=\"WARN\" type=\"char\" sourceType=\"byte\" comment=\"\"/>\
  <constant init=\"2\" name=\"ERROR\" type=\"char\" sourceType=\"byte\" comment=\"\"/>\
  <constant init=\"3\" name=\"STALE\" type=\"char\" sourceType=\"byte\" comment=\"\"/>\
  <field name=\"level\" type=\"char\" sourceType=\"byte\" comment=\"level of operation enumerated above\"/>\
  <field name=\"name\" type=\"string\" sourceType=\"string\" comment=\"a description of the test/component reporting\"/>\
  <field name=\"message\" type=\"string\" sourceType=\"string\" comment=\"a description of the status\"/>\
  <field name=\"hardware_id\" type=\"string\" sourceType=\"string\" comment=\"a hardware unique string\"/>\
  <field name=\"values\" type=\"vector(KeyValue)\" sourceType=\"KeyValue\" comment=\"an array of values associated with the status\"/>\
</class>";

diagnostic_msgs::DiagnosticStatus::DiagnosticStatus() : level(0), name(), message(), hardware_id(), values()
{  
};

diagnostic_msgs::DiagnosticStatus::DiagnosticStatus(const diagnostic_msgs::DiagnosticStatus & inobj) : level(inobj.level), name(inobj.name), message(inobj.message), hardware_id(inobj.hardware_id), values(inobj.values)
{
};

diagnostic_msgs::DiagnosticStatus::~DiagnosticStatus()
{
};

diagnostic_msgs::DiagnosticStatus * diagnostic_msgs::DiagnosticStatus::New()
{ 
    return new DiagnosticStatus();
};

bool diagnostic_msgs::DiagnosticStatus::dataTypeFlat() 
{   
    return false; 
};

diagnostic_msgs::DiagnosticStatus & diagnostic_msgs::DiagnosticStatus::operator=(const diagnostic_msgs::DiagnosticStatus & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus diagnostic_msgs::DiagnosticStatus is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(diagnostic_msgs::DiagnosticStatus));
        }
        else */ 
        {

            level = inobj.level;
            name = inobj.name;
            message = inobj.message;
            hardware_id = inobj.hardware_id;
            values = inobj.values;
        }
    }

    return *this;
}

bool diagnostic_msgs::DiagnosticStatus::operator==(const diagnostic_msgs::DiagnosticStatus & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (level == inobj.level)
             && (name == inobj.name)
             && (message == inobj.message)
             && (hardware_id == inobj.hardware_id)
             && (values == inobj.values);
    }

    return ret;
}

bool diagnostic_msgs::DiagnosticStatus::operator!=(const diagnostic_msgs::DiagnosticStatus & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool diagnostic_msgs::DiagnosticStatus::operator<(const diagnostic_msgs::DiagnosticStatus & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (level < inobj.level) return true;
        if (inobj.level <  level) return false; 
        if (name < inobj.name) return true;
        if (inobj.name <  name) return false; 
        if (message < inobj.message) return true;
        if (inobj.message <  message) return false; 
        if (hardware_id < inobj.hardware_id) return true;
        if (inobj.hardware_id <  hardware_id) return false; 
        if (values < inobj.values) return true;
        if (inobj.values <  values) return false; ;
    }

    return ret;
}

bool diagnostic_msgs::DiagnosticStatus::operator>(const diagnostic_msgs::DiagnosticStatus & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (level > inobj.level) return true;
        if (inobj.level >  level) return false; 
        if (name > inobj.name) return true;
        if (inobj.name >  name) return false; 
        if (message > inobj.message) return true;
        if (inobj.message >  message) return false; 
        if (hardware_id > inobj.hardware_id) return true;
        if (inobj.hardware_id >  hardware_id) return false; 
        if (values > inobj.values) return true;
        if (inobj.values >  values) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const diagnostic_msgs::DiagnosticStatus & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"level",t.level,indent,false);
    rframe::json_io::encode(sstr,"name",t.name,indent,false);
    rframe::json_io::encode(sstr,"message",t.message,indent,false);
    rframe::json_io::encode(sstr,"hardware_id",t.hardware_id,indent,false);
    rframe::json_io::encode(sstr,"values",t.values,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string diagnostic_msgs::DiagnosticStatus::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const diagnostic_msgs::DiagnosticStatus & value)
{
    return s << value.toStr(false);
}

