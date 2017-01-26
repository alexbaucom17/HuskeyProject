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
#include "sensor_msgs/Temperature.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int sensor_msgs::Temperature::ID;
const unsigned int sensor_msgs::Temperature::DATA_VERSION;
const std::string sensor_msgs::Temperature::DATA_TYPE_NAME = "Temperature";
const std::string sensor_msgs::Temperature::DATA_TYPE_FULL_NAME = "sensor_msgs::Temperature";
const std::string sensor_msgs::Temperature::VERSION_MD5 = "f8353038967b0d9ba6e5d63e00d0dcc6";
/* xml source for this class */
const std::string sensor_msgs::Temperature::XML_SOURCE = "<class name=\"Temperature\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"ff71b307acdbe7c871a5a6d7ed359100\" rosDesc=\"# Single temperature reading.\\n\\n Header header           # timestamp is the time the temperature was measured\\n                         # frame_id is the location of the temperature reading\\n\\n float64 temperature     # Measurement of the Temperature in Degrees Celsius\\n\\n float64 variance        # 0 is interpreted as variance unknown\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\" comment=\"Single temperature reading.\" id=\"237354235\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"timestamp is the time the temperature was measured  frame_id is the location of the temperature reading\"/>\
  <field name=\"temperature\" type=\"double\" sourceType=\"float64\" comment=\"Measurement of the Temperature in Degrees Celsius\"/>\
  <field name=\"variance\" type=\"double\" sourceType=\"float64\" comment=\"0 is interpreted as variance unknown\"/>\
</class>";

sensor_msgs::Temperature::Temperature() : header(), temperature(0), variance(0)
{  
};

sensor_msgs::Temperature::Temperature(const sensor_msgs::Temperature & inobj) : header(inobj.header), temperature(inobj.temperature), variance(inobj.variance)
{
};

sensor_msgs::Temperature::~Temperature()
{
};

sensor_msgs::Temperature * sensor_msgs::Temperature::New()
{ 
    return new Temperature();
};

bool sensor_msgs::Temperature::dataTypeFlat() 
{  
    return std_msgs::Header::dataTypeFlat();

};

sensor_msgs::Temperature & sensor_msgs::Temperature::operator=(const sensor_msgs::Temperature & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus sensor_msgs::Temperature is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(sensor_msgs::Temperature));
        }
        else */ 
        {

            header = inobj.header;
            temperature = inobj.temperature;
            variance = inobj.variance;
        }
    }

    return *this;
}

bool sensor_msgs::Temperature::operator==(const sensor_msgs::Temperature & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (header == inobj.header)
             && (temperature == inobj.temperature)
             && (variance == inobj.variance);
    }

    return ret;
}

bool sensor_msgs::Temperature::operator!=(const sensor_msgs::Temperature & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool sensor_msgs::Temperature::operator<(const sensor_msgs::Temperature & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (header < inobj.header) return true;
        if (inobj.header <  header) return false; 
        if (temperature < inobj.temperature) return true;
        if (inobj.temperature <  temperature) return false; 
        if (variance < inobj.variance) return true;
        if (inobj.variance <  variance) return false; ;
    }

    return ret;
}

bool sensor_msgs::Temperature::operator>(const sensor_msgs::Temperature & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (header > inobj.header) return true;
        if (inobj.header >  header) return false; 
        if (temperature > inobj.temperature) return true;
        if (inobj.temperature >  temperature) return false; 
        if (variance > inobj.variance) return true;
        if (inobj.variance >  variance) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const sensor_msgs::Temperature & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"header",t.header,indent,false);
    rframe::json_io::encode(sstr,"temperature",t.temperature,indent,false);
    rframe::json_io::encode(sstr,"variance",t.variance,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string sensor_msgs::Temperature::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const sensor_msgs::Temperature & value)
{
    return s << value.toStr(false);
}

