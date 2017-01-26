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
#include "driver_base/ConfigValue.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int driver_base::ConfigValue::ID;
const unsigned int driver_base::ConfigValue::DATA_VERSION;
const std::string driver_base::ConfigValue::DATA_TYPE_NAME = "ConfigValue";
const std::string driver_base::ConfigValue::DATA_TYPE_FULL_NAME = "driver_base::ConfigValue";
const std::string driver_base::ConfigValue::VERSION_MD5 = "10941451067ceba3919bd7d02e76f8f0";
/* xml source for this class */
const std::string driver_base::ConfigValue::XML_SOURCE = "<class name=\"ConfigValue\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"d8512f27253c0f65f928a67c329cd658\" rosDesc=\"string name\\nfloat64 value\\n\" comment=\"\" id=\"1748765325\">\
  <field name=\"name\" type=\"string\" sourceType=\"string\" comment=\"\"/>\
  <field name=\"value\" type=\"double\" sourceType=\"float64\" comment=\"\"/>\
</class>";

driver_base::ConfigValue::ConfigValue() : name(), value(0)
{  
};

driver_base::ConfigValue::ConfigValue(const driver_base::ConfigValue & inobj) : name(inobj.name), value(inobj.value)
{
};

driver_base::ConfigValue::~ConfigValue()
{
};

driver_base::ConfigValue * driver_base::ConfigValue::New()
{ 
    return new ConfigValue();
};

bool driver_base::ConfigValue::dataTypeFlat() 
{  
    return rframe::CodeGenTraits<std::string>::flat();

};

driver_base::ConfigValue & driver_base::ConfigValue::operator=(const driver_base::ConfigValue & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus driver_base::ConfigValue is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(driver_base::ConfigValue));
        }
        else */ 
        {

            name = inobj.name;
            value = inobj.value;
        }
    }

    return *this;
}

bool driver_base::ConfigValue::operator==(const driver_base::ConfigValue & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (name == inobj.name)
             && (value == inobj.value);
    }

    return ret;
}

bool driver_base::ConfigValue::operator!=(const driver_base::ConfigValue & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool driver_base::ConfigValue::operator<(const driver_base::ConfigValue & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (name < inobj.name) return true;
        if (inobj.name <  name) return false; 
        if (value < inobj.value) return true;
        if (inobj.value <  value) return false; ;
    }

    return ret;
}

bool driver_base::ConfigValue::operator>(const driver_base::ConfigValue & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (name > inobj.name) return true;
        if (inobj.name >  name) return false; 
        if (value > inobj.value) return true;
        if (inobj.value >  value) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const driver_base::ConfigValue & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"name",t.name,indent,false);
    rframe::json_io::encode(sstr,"value",t.value,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string driver_base::ConfigValue::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const driver_base::ConfigValue & value)
{
    return s << value.toStr(false);
}

