// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:52 -0500
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
#include "rosgraph_msgs/Log.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const char rosgraph_msgs::Log::DEBUG = 1;
const char rosgraph_msgs::Log::INFO = 2;
const char rosgraph_msgs::Log::WARN = 4;
const char rosgraph_msgs::Log::ERROR = 8;
const char rosgraph_msgs::Log::FATAL = 16;

const unsigned int rosgraph_msgs::Log::ID;
const unsigned int rosgraph_msgs::Log::DATA_VERSION;
const std::string rosgraph_msgs::Log::DATA_TYPE_NAME = "Log";
const std::string rosgraph_msgs::Log::DATA_TYPE_FULL_NAME = "rosgraph_msgs::Log";
const std::string rosgraph_msgs::Log::VERSION_MD5 = "98173a4713623145420ff19e80bf75f1";
/* xml source for this class */
const std::string rosgraph_msgs::Log::XML_SOURCE = "<class name=\"Log\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"acffd30cd6b6de30f120938c17c593fb\" rosDesc=\"##\\n## Severity level constants\\n##\\nbyte DEBUG=1 #debug level\\nbyte INFO=2  #general level\\nbyte WARN=4  #warning level\\nbyte ERROR=8 #error level\\nbyte FATAL=16 #fatal/critical level\\n##\\n## Fields\\n##\\nHeader header\\nbyte level\\nstring name # name of the node\\nstring msg # message \\nstring file # file the message came from\\nstring function # function the message came from\\nuint32 line # line the message came from\\nstring[] topics # topic names that the node publishes\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\" comment=\"\" id=\"571172703\">\
  <constant init=\"1\" name=\"DEBUG\" type=\"char\" sourceType=\"byte\" comment=\"debug level\"/>\
  <constant init=\"2\" name=\"INFO\" type=\"char\" sourceType=\"byte\" comment=\"general level\"/>\
  <constant init=\"4\" name=\"WARN\" type=\"char\" sourceType=\"byte\" comment=\"warning level\"/>\
  <constant init=\"8\" name=\"ERROR\" type=\"char\" sourceType=\"byte\" comment=\"error level\"/>\
  <constant init=\"16\" name=\"FATAL\" type=\"char\" sourceType=\"byte\" comment=\"fatal/critical level\"/>\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"\"/>\
  <field name=\"level\" type=\"char\" sourceType=\"byte\" comment=\"\"/>\
  <field name=\"name\" type=\"string\" sourceType=\"string\" comment=\"name of the node\"/>\
  <field name=\"msg\" type=\"string\" sourceType=\"string\" comment=\"message\"/>\
  <field name=\"file\" type=\"string\" sourceType=\"string\" comment=\"file the message came from\"/>\
  <field name=\"function\" type=\"string\" sourceType=\"string\" comment=\"function the message came from\"/>\
  <field name=\"line\" type=\"unsigned int\" sourceType=\"uint32\" comment=\"line the message came from\"/>\
  <field name=\"topics\" type=\"vector(string)\" sourceType=\"string\" comment=\"topic names that the node publishes\"/>\
</class>";

rosgraph_msgs::Log::Log() : header(), level(0), name(), msg(), file(), function(), line(0), topics()
{  
};

rosgraph_msgs::Log::Log(const rosgraph_msgs::Log & inobj) : header(inobj.header), level(inobj.level), name(inobj.name), msg(inobj.msg), file(inobj.file), function(inobj.function), line(inobj.line), topics(inobj.topics)
{
};

rosgraph_msgs::Log::~Log()
{
};

rosgraph_msgs::Log * rosgraph_msgs::Log::New()
{ 
    return new Log();
};

bool rosgraph_msgs::Log::dataTypeFlat() 
{   
    return false; 
};

rosgraph_msgs::Log & rosgraph_msgs::Log::operator=(const rosgraph_msgs::Log & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus rosgraph_msgs::Log is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(rosgraph_msgs::Log));
        }
        else */ 
        {

            header = inobj.header;
            level = inobj.level;
            name = inobj.name;
            msg = inobj.msg;
            file = inobj.file;
            function = inobj.function;
            line = inobj.line;
            topics = inobj.topics;
        }
    }

    return *this;
}

bool rosgraph_msgs::Log::operator==(const rosgraph_msgs::Log & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (header == inobj.header)
             && (level == inobj.level)
             && (name == inobj.name)
             && (msg == inobj.msg)
             && (file == inobj.file)
             && (function == inobj.function)
             && (line == inobj.line)
             && (topics == inobj.topics);
    }

    return ret;
}

bool rosgraph_msgs::Log::operator!=(const rosgraph_msgs::Log & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool rosgraph_msgs::Log::operator<(const rosgraph_msgs::Log & inobj) const
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
        if (level < inobj.level) return true;
        if (inobj.level <  level) return false; 
        if (name < inobj.name) return true;
        if (inobj.name <  name) return false; 
        if (msg < inobj.msg) return true;
        if (inobj.msg <  msg) return false; 
        if (file < inobj.file) return true;
        if (inobj.file <  file) return false; 
        if (function < inobj.function) return true;
        if (inobj.function <  function) return false; 
        if (line < inobj.line) return true;
        if (inobj.line <  line) return false; 
        if (topics < inobj.topics) return true;
        if (inobj.topics <  topics) return false; ;
    }

    return ret;
}

bool rosgraph_msgs::Log::operator>(const rosgraph_msgs::Log & inobj) const
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
        if (level > inobj.level) return true;
        if (inobj.level >  level) return false; 
        if (name > inobj.name) return true;
        if (inobj.name >  name) return false; 
        if (msg > inobj.msg) return true;
        if (inobj.msg >  msg) return false; 
        if (file > inobj.file) return true;
        if (inobj.file >  file) return false; 
        if (function > inobj.function) return true;
        if (inobj.function >  function) return false; 
        if (line > inobj.line) return true;
        if (inobj.line >  line) return false; 
        if (topics > inobj.topics) return true;
        if (inobj.topics >  topics) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const rosgraph_msgs::Log & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"header",t.header,indent,false);
    rframe::json_io::encode(sstr,"level",t.level,indent,false);
    rframe::json_io::encode(sstr,"name",t.name,indent,false);
    rframe::json_io::encode(sstr,"msg",t.msg,indent,false);
    rframe::json_io::encode(sstr,"file",t.file,indent,false);
    rframe::json_io::encode(sstr,"function",t.function,indent,false);
    rframe::json_io::encode(sstr,"line",t.line,indent,false);
    rframe::json_io::encode(sstr,"topics",t.topics,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string rosgraph_msgs::Log::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const rosgraph_msgs::Log & value)
{
    return s << value.toStr(false);
}
