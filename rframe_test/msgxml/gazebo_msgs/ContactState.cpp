// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2016-11-23 17:33:56 -0500
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
#include "gazebo_msgs/ContactState.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int gazebo_msgs::ContactState::ID;
const unsigned int gazebo_msgs::ContactState::DATA_VERSION;
const std::string gazebo_msgs::ContactState::DATA_TYPE_NAME = "ContactState";
const std::string gazebo_msgs::ContactState::DATA_TYPE_FULL_NAME = "gazebo_msgs::ContactState";
const std::string gazebo_msgs::ContactState::VERSION_MD5 = "e6448d383e4a796fce7245eee9a8ff65";
/* xml source for this class */
const std::string gazebo_msgs::ContactState::XML_SOURCE = "<class name=\"ContactState\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"48c0ffb054b8c444f870cecea1ee50d9\" rosDesc=\"string info                                   # text info on this contact\\nstring collision1_name                        # name of contact collision1\\nstring collision2_name                        # name of contact collision2\\ngeometry_msgs/Wrench[] wrenches               # list of forces/torques\\ngeometry_msgs/Wrench total_wrench             # sum of forces/torques in every DOF\\ngeometry_msgs/Vector3[] contact_positions     # list of contact position\\ngeometry_msgs/Vector3[] contact_normals       # list of contact normals\\nfloat64[] depths                              # list of penetration depths\\n\\n================================================================================\\nMSG: geometry_msgs/Wrench\\n# This represents force in free space, separated into\\n# its linear and angular parts.\\nVector3  force\\nVector3  torque\\n\\n================================================================================\\nMSG: geometry_msgs/Vector3\\n# This represents a vector in free space. \\n# It is only meant to represent a direction. Therefore, it does not\\n# make sense to apply a translation to it (e.g., when applying a \\n# generic rigid transformation to a Vector3, tf2 will only apply the\\n# rotation). If you want your data to be translatable too, use the\\n# geometry_msgs/Point message instead.\\n\\nfloat64 x\\nfloat64 y\\n\" comment=\"\" id=\"1781288113\">\
  <field name=\"info\" type=\"string\" sourceType=\"string\" comment=\"text info on this contact\"/>\
  <field name=\"collision1_name\" type=\"string\" sourceType=\"string\" comment=\"name of contact collision1\"/>\
  <field name=\"collision2_name\" type=\"string\" sourceType=\"string\" comment=\"name of contact collision2\"/>\
  <field name=\"wrenches\" type=\"vector(geometry_msgs::Wrench)\" sourceType=\"geometry_msgs::Wrench\" comment=\"list of forces/torques\"/>\
  <field name=\"total_wrench\" type=\"geometry_msgs::Wrench\" sourceType=\"geometry_msgs::Wrench\" comment=\"sum of forces/torques in every DOF\"/>\
  <field name=\"contact_positions\" type=\"vector(geometry_msgs::Vector3)\" sourceType=\"geometry_msgs::Vector3\" comment=\"list of contact position\"/>\
  <field name=\"contact_normals\" type=\"vector(geometry_msgs::Vector3)\" sourceType=\"geometry_msgs::Vector3\" comment=\"list of contact normals\"/>\
  <field name=\"depths\" type=\"vector(double)\" sourceType=\"float64\" comment=\"list of penetration depths\"/>\
</class>";

gazebo_msgs::ContactState::ContactState() : info(), collision1_name(), collision2_name(), wrenches(), total_wrench(), contact_positions(), contact_normals(), depths()
{  
};

gazebo_msgs::ContactState::ContactState(const gazebo_msgs::ContactState & inobj) : info(inobj.info), collision1_name(inobj.collision1_name), collision2_name(inobj.collision2_name), wrenches(inobj.wrenches), total_wrench(inobj.total_wrench), contact_positions(inobj.contact_positions), contact_normals(inobj.contact_normals), depths(inobj.depths)
{
};

gazebo_msgs::ContactState::~ContactState()
{
};

gazebo_msgs::ContactState * gazebo_msgs::ContactState::New()
{ 
    return new ContactState();
};

bool gazebo_msgs::ContactState::dataTypeFlat() 
{   
    return false; 
};

gazebo_msgs::ContactState & gazebo_msgs::ContactState::operator=(const gazebo_msgs::ContactState & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus gazebo_msgs::ContactState is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(gazebo_msgs::ContactState));
        }
        else */ 
        {

            info = inobj.info;
            collision1_name = inobj.collision1_name;
            collision2_name = inobj.collision2_name;
            wrenches = inobj.wrenches;
            total_wrench = inobj.total_wrench;
            contact_positions = inobj.contact_positions;
            contact_normals = inobj.contact_normals;
            depths = inobj.depths;
        }
    }

    return *this;
}

bool gazebo_msgs::ContactState::operator==(const gazebo_msgs::ContactState & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (info == inobj.info)
             && (collision1_name == inobj.collision1_name)
             && (collision2_name == inobj.collision2_name)
             && (wrenches == inobj.wrenches)
             && (total_wrench == inobj.total_wrench)
             && (contact_positions == inobj.contact_positions)
             && (contact_normals == inobj.contact_normals)
             && (depths == inobj.depths);
    }

    return ret;
}

bool gazebo_msgs::ContactState::operator!=(const gazebo_msgs::ContactState & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool gazebo_msgs::ContactState::operator<(const gazebo_msgs::ContactState & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (info < inobj.info) return true;
        if (inobj.info <  info) return false; 
        if (collision1_name < inobj.collision1_name) return true;
        if (inobj.collision1_name <  collision1_name) return false; 
        if (collision2_name < inobj.collision2_name) return true;
        if (inobj.collision2_name <  collision2_name) return false; 
        if (wrenches < inobj.wrenches) return true;
        if (inobj.wrenches <  wrenches) return false; 
        if (total_wrench < inobj.total_wrench) return true;
        if (inobj.total_wrench <  total_wrench) return false; 
        if (contact_positions < inobj.contact_positions) return true;
        if (inobj.contact_positions <  contact_positions) return false; 
        if (contact_normals < inobj.contact_normals) return true;
        if (inobj.contact_normals <  contact_normals) return false; 
        if (depths < inobj.depths) return true;
        if (inobj.depths <  depths) return false; ;
    }

    return ret;
}

bool gazebo_msgs::ContactState::operator>(const gazebo_msgs::ContactState & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (info > inobj.info) return true;
        if (inobj.info >  info) return false; 
        if (collision1_name > inobj.collision1_name) return true;
        if (inobj.collision1_name >  collision1_name) return false; 
        if (collision2_name > inobj.collision2_name) return true;
        if (inobj.collision2_name >  collision2_name) return false; 
        if (wrenches > inobj.wrenches) return true;
        if (inobj.wrenches >  wrenches) return false; 
        if (total_wrench > inobj.total_wrench) return true;
        if (inobj.total_wrench >  total_wrench) return false; 
        if (contact_positions > inobj.contact_positions) return true;
        if (inobj.contact_positions >  contact_positions) return false; 
        if (contact_normals > inobj.contact_normals) return true;
        if (inobj.contact_normals >  contact_normals) return false; 
        if (depths > inobj.depths) return true;
        if (inobj.depths >  depths) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const gazebo_msgs::ContactState & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"info",t.info,indent,false);
    rframe::json_io::encode(sstr,"collision1_name",t.collision1_name,indent,false);
    rframe::json_io::encode(sstr,"collision2_name",t.collision2_name,indent,false);
    rframe::json_io::encode(sstr,"wrenches",t.wrenches,indent,false);
    rframe::json_io::encode(sstr,"total_wrench",t.total_wrench,indent,false);
    rframe::json_io::encode(sstr,"contact_positions",t.contact_positions,indent,false);
    rframe::json_io::encode(sstr,"contact_normals",t.contact_normals,indent,false);
    rframe::json_io::encode(sstr,"depths",t.depths,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string gazebo_msgs::ContactState::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const gazebo_msgs::ContactState & value)
{
    return s << value.toStr(false);
}
