// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:08 -0500
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
#include "std_srvs/TriggerResponse.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int std_srvs::TriggerResponse::ID;
const unsigned int std_srvs::TriggerResponse::DATA_VERSION;
const std::string std_srvs::TriggerResponse::DATA_TYPE_NAME = "TriggerResponse";
const std::string std_srvs::TriggerResponse::DATA_TYPE_FULL_NAME = "std_srvs::TriggerResponse";
const std::string std_srvs::TriggerResponse::VERSION_MD5 = "bdb998d90181ec6351ff0ab90a4830f3";
/* xml source for this class */
const std::string std_srvs::TriggerResponse::XML_SOURCE = "<class name=\"TriggerResponse\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\" id=\"1986463664\">\
  <field name=\"success\" type=\"bool\" sourceType=\"bool\" comment=\"indicate successful run of triggered service\"/>\
  <field name=\"message\" type=\"string\" sourceType=\"string\" comment=\"informational, e.g. for error messages\"/>\
</class>";

std_srvs::TriggerResponse::TriggerResponse() : success(0), message()
{  
};

std_srvs::TriggerResponse::TriggerResponse(const std_srvs::TriggerResponse & inobj) : success(inobj.success), message(inobj.message)
{
};

std_srvs::TriggerResponse::~TriggerResponse()
{
};

std_srvs::TriggerResponse * std_srvs::TriggerResponse::New()
{ 
    return new TriggerResponse();
};

bool std_srvs::TriggerResponse::dataTypeFlat() 
{  
    return rframe::CodeGenTraits<std::string>::flat();

};

std_srvs::TriggerResponse & std_srvs::TriggerResponse::operator=(const std_srvs::TriggerResponse & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus std_srvs::TriggerResponse is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(std_srvs::TriggerResponse));
        }
        else */ 
        {

            success = inobj.success;
            message = inobj.message;
        }
    }

    return *this;
}

bool std_srvs::TriggerResponse::operator==(const std_srvs::TriggerResponse & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (success == inobj.success)
             && (message == inobj.message);
    }

    return ret;
}

bool std_srvs::TriggerResponse::operator!=(const std_srvs::TriggerResponse & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool std_srvs::TriggerResponse::operator<(const std_srvs::TriggerResponse & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (success < inobj.success) return true;
        if (inobj.success <  success) return false; 
        if (message < inobj.message) return true;
        if (inobj.message <  message) return false; ;
    }

    return ret;
}

bool std_srvs::TriggerResponse::operator>(const std_srvs::TriggerResponse & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (success > inobj.success) return true;
        if (inobj.success >  success) return false; 
        if (message > inobj.message) return true;
        if (inobj.message >  message) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const std_srvs::TriggerResponse & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"success",t.success,indent,false);
    rframe::json_io::encode(sstr,"message",t.message,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string std_srvs::TriggerResponse::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const std_srvs::TriggerResponse & value)
{
    return s << value.toStr(false);
}

