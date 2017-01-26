// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2016-11-23 17:33:55 -0500
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
#include "audio_common_msgs/AudioData.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int audio_common_msgs::AudioData::ID;
const unsigned int audio_common_msgs::AudioData::DATA_VERSION;
const std::string audio_common_msgs::AudioData::DATA_TYPE_NAME = "AudioData";
const std::string audio_common_msgs::AudioData::DATA_TYPE_FULL_NAME = "audio_common_msgs::AudioData";
const std::string audio_common_msgs::AudioData::VERSION_MD5 = "5862d29a4fd7ea797141cf60d2c8489c";
/* xml source for this class */
const std::string audio_common_msgs::AudioData::XML_SOURCE = "<class name=\"AudioData\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"f43a8e1b362b75baa741461b46adc7e0\" rosDesc=\"uint8[] data\\n\" comment=\"\" id=\"831366185\">\
  <field name=\"data\" type=\"vector(unsigned char)\" sourceType=\"uint8\" comment=\"\"/>\
</class>";

audio_common_msgs::AudioData::AudioData() : data()
{  
};

audio_common_msgs::AudioData::AudioData(const audio_common_msgs::AudioData & inobj) : data(inobj.data)
{
};

audio_common_msgs::AudioData::~AudioData()
{
};

audio_common_msgs::AudioData * audio_common_msgs::AudioData::New()
{ 
    return new AudioData();
};

bool audio_common_msgs::AudioData::dataTypeFlat() 
{   
    return false; 
};

audio_common_msgs::AudioData & audio_common_msgs::AudioData::operator=(const audio_common_msgs::AudioData & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus audio_common_msgs::AudioData is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(audio_common_msgs::AudioData));
        }
        else */ 
        {

            data = inobj.data;
        }
    }

    return *this;
}

bool audio_common_msgs::AudioData::operator==(const audio_common_msgs::AudioData & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (data == inobj.data);
    }

    return ret;
}

bool audio_common_msgs::AudioData::operator!=(const audio_common_msgs::AudioData & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool audio_common_msgs::AudioData::operator<(const audio_common_msgs::AudioData & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (data < inobj.data) return true;
        if (inobj.data <  data) return false; ;
    }

    return ret;
}

bool audio_common_msgs::AudioData::operator>(const audio_common_msgs::AudioData & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (data > inobj.data) return true;
        if (inobj.data >  data) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const audio_common_msgs::AudioData & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"data",t.data,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string audio_common_msgs::AudioData::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const audio_common_msgs::AudioData & value)
{
    return s << value.toStr(false);
}
