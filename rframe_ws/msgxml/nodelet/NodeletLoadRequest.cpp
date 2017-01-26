// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:51 -0500
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
#include "nodelet/NodeletLoadRequest.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int nodelet::NodeletLoadRequest::ID;
const unsigned int nodelet::NodeletLoadRequest::DATA_VERSION;
const std::string nodelet::NodeletLoadRequest::DATA_TYPE_NAME = "NodeletLoadRequest";
const std::string nodelet::NodeletLoadRequest::DATA_TYPE_FULL_NAME = "nodelet::NodeletLoadRequest";
const std::string nodelet::NodeletLoadRequest::VERSION_MD5 = "11c70aab3d87c2c707e8a7865ae492d5";
/* xml source for this class */
const std::string nodelet::NodeletLoadRequest::XML_SOURCE = "<class name=\"NodeletLoadRequest\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\" id=\"1210331548\">\
  <field name=\"name\" type=\"string\" sourceType=\"string\" comment=\"\"/>\
  <field name=\"type\" type=\"string\" sourceType=\"string\" comment=\"\"/>\
  <field name=\"remap_source_args\" type=\"vector(string)\" sourceType=\"string\" comment=\"\"/>\
  <field name=\"remap_target_args\" type=\"vector(string)\" sourceType=\"string\" comment=\"\"/>\
  <field name=\"my_argv\" type=\"vector(string)\" sourceType=\"string\" comment=\"\"/>\
  <field name=\"bond_id\" type=\"string\" sourceType=\"string\" comment=\"no comment provided\"/>\
</class>";

nodelet::NodeletLoadRequest::NodeletLoadRequest() : name(), type(), remap_source_args(), remap_target_args(), my_argv(), bond_id()
{  
};

nodelet::NodeletLoadRequest::NodeletLoadRequest(const nodelet::NodeletLoadRequest & inobj) : name(inobj.name), type(inobj.type), remap_source_args(inobj.remap_source_args), remap_target_args(inobj.remap_target_args), my_argv(inobj.my_argv), bond_id(inobj.bond_id)
{
};

nodelet::NodeletLoadRequest::~NodeletLoadRequest()
{
};

nodelet::NodeletLoadRequest * nodelet::NodeletLoadRequest::New()
{ 
    return new NodeletLoadRequest();
};

bool nodelet::NodeletLoadRequest::dataTypeFlat() 
{   
    return false; 
};

nodelet::NodeletLoadRequest & nodelet::NodeletLoadRequest::operator=(const nodelet::NodeletLoadRequest & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus nodelet::NodeletLoadRequest is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(nodelet::NodeletLoadRequest));
        }
        else */ 
        {

            name = inobj.name;
            type = inobj.type;
            remap_source_args = inobj.remap_source_args;
            remap_target_args = inobj.remap_target_args;
            my_argv = inobj.my_argv;
            bond_id = inobj.bond_id;
        }
    }

    return *this;
}

bool nodelet::NodeletLoadRequest::operator==(const nodelet::NodeletLoadRequest & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (name == inobj.name)
             && (type == inobj.type)
             && (remap_source_args == inobj.remap_source_args)
             && (remap_target_args == inobj.remap_target_args)
             && (my_argv == inobj.my_argv)
             && (bond_id == inobj.bond_id);
    }

    return ret;
}

bool nodelet::NodeletLoadRequest::operator!=(const nodelet::NodeletLoadRequest & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool nodelet::NodeletLoadRequest::operator<(const nodelet::NodeletLoadRequest & inobj) const
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
        if (type < inobj.type) return true;
        if (inobj.type <  type) return false; 
        if (remap_source_args < inobj.remap_source_args) return true;
        if (inobj.remap_source_args <  remap_source_args) return false; 
        if (remap_target_args < inobj.remap_target_args) return true;
        if (inobj.remap_target_args <  remap_target_args) return false; 
        if (my_argv < inobj.my_argv) return true;
        if (inobj.my_argv <  my_argv) return false; 
        if (bond_id < inobj.bond_id) return true;
        if (inobj.bond_id <  bond_id) return false; ;
    }

    return ret;
}

bool nodelet::NodeletLoadRequest::operator>(const nodelet::NodeletLoadRequest & inobj) const
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
        if (type > inobj.type) return true;
        if (inobj.type >  type) return false; 
        if (remap_source_args > inobj.remap_source_args) return true;
        if (inobj.remap_source_args >  remap_source_args) return false; 
        if (remap_target_args > inobj.remap_target_args) return true;
        if (inobj.remap_target_args >  remap_target_args) return false; 
        if (my_argv > inobj.my_argv) return true;
        if (inobj.my_argv >  my_argv) return false; 
        if (bond_id > inobj.bond_id) return true;
        if (inobj.bond_id >  bond_id) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const nodelet::NodeletLoadRequest & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"name",t.name,indent,false);
    rframe::json_io::encode(sstr,"type",t.type,indent,false);
    rframe::json_io::encode(sstr,"remap_source_args",t.remap_source_args,indent,false);
    rframe::json_io::encode(sstr,"remap_target_args",t.remap_target_args,indent,false);
    rframe::json_io::encode(sstr,"my_argv",t.my_argv,indent,false);
    rframe::json_io::encode(sstr,"bond_id",t.bond_id,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string nodelet::NodeletLoadRequest::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const nodelet::NodeletLoadRequest & value)
{
    return s << value.toStr(false);
}
