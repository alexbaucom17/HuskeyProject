// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:48 -0500
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
#include "dynamic_reconfigure/Config.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int dynamic_reconfigure::Config::ID;
const unsigned int dynamic_reconfigure::Config::DATA_VERSION;
const std::string dynamic_reconfigure::Config::DATA_TYPE_NAME = "Config";
const std::string dynamic_reconfigure::Config::DATA_TYPE_FULL_NAME = "dynamic_reconfigure::Config";
const std::string dynamic_reconfigure::Config::VERSION_MD5 = "9dc87569df2ca4f1934dfef0d91322e4";
/* xml source for this class */
const std::string dynamic_reconfigure::Config::XML_SOURCE = "<class name=\"Config\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"958f16a05573709014982821e6822580\" rosDesc=\"BoolParameter[] bools\\nIntParameter[] ints\\nStrParameter[] strs\\nDoubleParameter[] doubles\\nGroupState[] groups\\n\\n================================================================================\\nMSG: dynamic_reconfigure/BoolParameter\\nstring name\\nbool value\\n\\n================================================================================\\nMSG: dynamic_reconfigure/IntParameter\\nstring name\\nint32 value\\n\\n================================================================================\\nMSG: dynamic_reconfigure/StrParameter\\nstring name\\nstring value\\n\\n================================================================================\\nMSG: dynamic_reconfigure/DoubleParameter\\nstring name\\nfloat64 value\\n\\n================================================================================\\nMSG: dynamic_reconfigure/GroupState\\nstring name\\nbool state\\nint32 id\\nint32 parent\\n\" comment=\"\" id=\"535859631\">\
  <field name=\"bools\" type=\"vector(BoolParameter)\" sourceType=\"BoolParameter\" comment=\"\"/>\
  <field name=\"ints\" type=\"vector(IntParameter)\" sourceType=\"IntParameter\" comment=\"\"/>\
  <field name=\"strs\" type=\"vector(StrParameter)\" sourceType=\"StrParameter\" comment=\"\"/>\
  <field name=\"doubles\" type=\"vector(DoubleParameter)\" sourceType=\"DoubleParameter\" comment=\"\"/>\
  <field name=\"groups\" type=\"vector(GroupState)\" sourceType=\"GroupState\" comment=\"\"/>\
</class>";

dynamic_reconfigure::Config::Config() : bools(), ints(), strs(), doubles(), groups()
{  
};

dynamic_reconfigure::Config::Config(const dynamic_reconfigure::Config & inobj) : bools(inobj.bools), ints(inobj.ints), strs(inobj.strs), doubles(inobj.doubles), groups(inobj.groups)
{
};

dynamic_reconfigure::Config::~Config()
{
};

dynamic_reconfigure::Config * dynamic_reconfigure::Config::New()
{ 
    return new Config();
};

bool dynamic_reconfigure::Config::dataTypeFlat() 
{   
    return false; 
};

dynamic_reconfigure::Config & dynamic_reconfigure::Config::operator=(const dynamic_reconfigure::Config & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus dynamic_reconfigure::Config is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(dynamic_reconfigure::Config));
        }
        else */ 
        {

            bools = inobj.bools;
            ints = inobj.ints;
            strs = inobj.strs;
            doubles = inobj.doubles;
            groups = inobj.groups;
        }
    }

    return *this;
}

bool dynamic_reconfigure::Config::operator==(const dynamic_reconfigure::Config & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (bools == inobj.bools)
             && (ints == inobj.ints)
             && (strs == inobj.strs)
             && (doubles == inobj.doubles)
             && (groups == inobj.groups);
    }

    return ret;
}

bool dynamic_reconfigure::Config::operator!=(const dynamic_reconfigure::Config & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool dynamic_reconfigure::Config::operator<(const dynamic_reconfigure::Config & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (bools < inobj.bools) return true;
        if (inobj.bools <  bools) return false; 
        if (ints < inobj.ints) return true;
        if (inobj.ints <  ints) return false; 
        if (strs < inobj.strs) return true;
        if (inobj.strs <  strs) return false; 
        if (doubles < inobj.doubles) return true;
        if (inobj.doubles <  doubles) return false; 
        if (groups < inobj.groups) return true;
        if (inobj.groups <  groups) return false; ;
    }

    return ret;
}

bool dynamic_reconfigure::Config::operator>(const dynamic_reconfigure::Config & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (bools > inobj.bools) return true;
        if (inobj.bools >  bools) return false; 
        if (ints > inobj.ints) return true;
        if (inobj.ints >  ints) return false; 
        if (strs > inobj.strs) return true;
        if (inobj.strs >  strs) return false; 
        if (doubles > inobj.doubles) return true;
        if (inobj.doubles >  doubles) return false; 
        if (groups > inobj.groups) return true;
        if (inobj.groups >  groups) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const dynamic_reconfigure::Config & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"bools",t.bools,indent,false);
    rframe::json_io::encode(sstr,"ints",t.ints,indent,false);
    rframe::json_io::encode(sstr,"strs",t.strs,indent,false);
    rframe::json_io::encode(sstr,"doubles",t.doubles,indent,false);
    rframe::json_io::encode(sstr,"groups",t.groups,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string dynamic_reconfigure::Config::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const dynamic_reconfigure::Config & value)
{
    return s << value.toStr(false);
}
