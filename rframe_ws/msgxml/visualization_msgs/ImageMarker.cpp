// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:09 -0500
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
#include "visualization_msgs/ImageMarker.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned char visualization_msgs::ImageMarker::CIRCLE = 0;
const unsigned char visualization_msgs::ImageMarker::LINE_STRIP = 1;
const unsigned char visualization_msgs::ImageMarker::LINE_LIST = 2;
const unsigned char visualization_msgs::ImageMarker::POLYGON = 3;
const unsigned char visualization_msgs::ImageMarker::POINTS = 4;
const unsigned char visualization_msgs::ImageMarker::ADD = 0;
const unsigned char visualization_msgs::ImageMarker::REMOVE = 1;

const unsigned int visualization_msgs::ImageMarker::ID;
const unsigned int visualization_msgs::ImageMarker::DATA_VERSION;
const std::string visualization_msgs::ImageMarker::DATA_TYPE_NAME = "ImageMarker";
const std::string visualization_msgs::ImageMarker::DATA_TYPE_FULL_NAME = "visualization_msgs::ImageMarker";
const std::string visualization_msgs::ImageMarker::VERSION_MD5 = "a9a0cb0f28025de6702a18a3ee9ead8e";
/* xml source for this class */
const std::string visualization_msgs::ImageMarker::XML_SOURCE = "<class name=\"ImageMarker\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"1de93c67ec8858b831025a08fbf1b35c\" rosDesc=\"uint8 CIRCLE=0\\nuint8 LINE_STRIP=1\\nuint8 LINE_LIST=2\\nuint8 POLYGON=3\\nuint8 POINTS=4\\n\\nuint8 ADD=0\\nuint8 REMOVE=1\\n\\nHeader header\\nstring ns  # namespace, used with id to form a unique id\\nint32 id           # unique id within the namespace\\nint32 type         # CIRCLE/LINE_STRIP/etc.\\nint32 action       # ADD/REMOVE\\ngeometry_msgs/Point position # 2D, in pixel-coords\\nfloat32 scale   # the diameter for a circle, etc.\\nstd_msgs/ColorRGBA outline_color\\nuint8 filled  # whether to fill in the shape with color\\nstd_msgs/ColorRGBA fill_color # color [0.0-1.0]\\nduration lifetime       # How long the object should last before being automatically deleted.  0 means forever\\n\\n\\ngeometry_msgs/Point[] points # used for LINE_STRIP/LINE_LIST/POINTS/etc., 2D in pixel coords\\nstd_msgs/ColorRGBA[] outline_colors # a color for each line, point, etc.\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: geometry_msgs/Point\\n# This contains the position of a point in free space\\nfloat64 x\\nfloat64 y\\nfloat64 z\\n\\n================================================================================\\nMSG: std_msgs/ColorRGBA\\nfloat32 r\\nfloat32 g\\nfloat32 b\\nfloat32 a\\n\" comment=\"\" id=\"2125420979\">\
  <constant init=\"0\" name=\"CIRCLE\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
  <constant init=\"1\" name=\"LINE_STRIP\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
  <constant init=\"2\" name=\"LINE_LIST\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
  <constant init=\"3\" name=\"POLYGON\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
  <constant init=\"4\" name=\"POINTS\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
  <constant init=\"0\" name=\"ADD\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
  <constant init=\"1\" name=\"REMOVE\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"\"/>\
  <field name=\"ns\" type=\"string\" sourceType=\"string\" comment=\"namespace, used with id to form a unique id\"/>\
  <field name=\"id\" type=\"int\" sourceType=\"int32\" comment=\"unique id within the namespace\"/>\
  <field name=\"type\" type=\"int\" sourceType=\"int32\" comment=\"CIRCLE/LINE_STRIP/etc.\"/>\
  <field name=\"action\" type=\"int\" sourceType=\"int32\" comment=\"ADD/REMOVE\"/>\
  <field name=\"position\" type=\"geometry_msgs::Point\" sourceType=\"geometry_msgs::Point\" comment=\"2D, in pixel-coords\"/>\
  <field name=\"scale\" type=\"float\" sourceType=\"float32\" comment=\"the diameter for a circle, etc.\"/>\
  <field name=\"outline_color\" type=\"std_msgs::ColorRGBA\" sourceType=\"std_msgs::ColorRGBA\" comment=\"\"/>\
  <field name=\"filled\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"whether to fill in the shape with color\"/>\
  <field name=\"fill_color\" type=\"std_msgs::ColorRGBA\" sourceType=\"std_msgs::ColorRGBA\" comment=\"color [0.0-1.0]\"/>\
  <field name=\"lifetime\" type=\"std_msgs::RosDuration\" sourceType=\"duration\" comment=\"How long the object should last before being automatically deleted.  0 means forever\"/>\
  <field name=\"points\" type=\"vector(geometry_msgs::Point)\" sourceType=\"geometry_msgs::Point\" comment=\"used for LINE_STRIP/LINE_LIST/POINTS/etc., 2D in pixel coords\"/>\
  <field name=\"outline_colors\" type=\"vector(std_msgs::ColorRGBA)\" sourceType=\"std_msgs::ColorRGBA\" comment=\"a color for each line, point, etc.\"/>\
</class>";

visualization_msgs::ImageMarker::ImageMarker() : header(), ns(), id(0), type(0), action(0), position(), scale(0), outline_color(), filled(0), fill_color(), lifetime(), points(), outline_colors()
{  
};

visualization_msgs::ImageMarker::ImageMarker(const visualization_msgs::ImageMarker & inobj) : header(inobj.header), ns(inobj.ns), id(inobj.id), type(inobj.type), action(inobj.action), position(inobj.position), scale(inobj.scale), outline_color(inobj.outline_color), filled(inobj.filled), fill_color(inobj.fill_color), lifetime(inobj.lifetime), points(inobj.points), outline_colors(inobj.outline_colors)
{
};

visualization_msgs::ImageMarker::~ImageMarker()
{
};

visualization_msgs::ImageMarker * visualization_msgs::ImageMarker::New()
{ 
    return new ImageMarker();
};

bool visualization_msgs::ImageMarker::dataTypeFlat() 
{   
    return false; 
};

visualization_msgs::ImageMarker & visualization_msgs::ImageMarker::operator=(const visualization_msgs::ImageMarker & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus visualization_msgs::ImageMarker is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(visualization_msgs::ImageMarker));
        }
        else */ 
        {

            header = inobj.header;
            ns = inobj.ns;
            id = inobj.id;
            type = inobj.type;
            action = inobj.action;
            position = inobj.position;
            scale = inobj.scale;
            outline_color = inobj.outline_color;
            filled = inobj.filled;
            fill_color = inobj.fill_color;
            lifetime = inobj.lifetime;
            points = inobj.points;
            outline_colors = inobj.outline_colors;
        }
    }

    return *this;
}

bool visualization_msgs::ImageMarker::operator==(const visualization_msgs::ImageMarker & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (header == inobj.header)
             && (ns == inobj.ns)
             && (id == inobj.id)
             && (type == inobj.type)
             && (action == inobj.action)
             && (position == inobj.position)
             && (scale == inobj.scale)
             && (outline_color == inobj.outline_color)
             && (filled == inobj.filled)
             && (fill_color == inobj.fill_color)
             && (lifetime == inobj.lifetime)
             && (points == inobj.points)
             && (outline_colors == inobj.outline_colors);
    }

    return ret;
}

bool visualization_msgs::ImageMarker::operator!=(const visualization_msgs::ImageMarker & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool visualization_msgs::ImageMarker::operator<(const visualization_msgs::ImageMarker & inobj) const
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
        if (ns < inobj.ns) return true;
        if (inobj.ns <  ns) return false; 
        if (id < inobj.id) return true;
        if (inobj.id <  id) return false; 
        if (type < inobj.type) return true;
        if (inobj.type <  type) return false; 
        if (action < inobj.action) return true;
        if (inobj.action <  action) return false; 
        if (position < inobj.position) return true;
        if (inobj.position <  position) return false; 
        if (scale < inobj.scale) return true;
        if (inobj.scale <  scale) return false; 
        if (outline_color < inobj.outline_color) return true;
        if (inobj.outline_color <  outline_color) return false; 
        if (filled < inobj.filled) return true;
        if (inobj.filled <  filled) return false; 
        if (fill_color < inobj.fill_color) return true;
        if (inobj.fill_color <  fill_color) return false; 
        if (lifetime < inobj.lifetime) return true;
        if (inobj.lifetime <  lifetime) return false; 
        if (points < inobj.points) return true;
        if (inobj.points <  points) return false; 
        if (outline_colors < inobj.outline_colors) return true;
        if (inobj.outline_colors <  outline_colors) return false; ;
    }

    return ret;
}

bool visualization_msgs::ImageMarker::operator>(const visualization_msgs::ImageMarker & inobj) const
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
        if (ns > inobj.ns) return true;
        if (inobj.ns >  ns) return false; 
        if (id > inobj.id) return true;
        if (inobj.id >  id) return false; 
        if (type > inobj.type) return true;
        if (inobj.type >  type) return false; 
        if (action > inobj.action) return true;
        if (inobj.action >  action) return false; 
        if (position > inobj.position) return true;
        if (inobj.position >  position) return false; 
        if (scale > inobj.scale) return true;
        if (inobj.scale >  scale) return false; 
        if (outline_color > inobj.outline_color) return true;
        if (inobj.outline_color >  outline_color) return false; 
        if (filled > inobj.filled) return true;
        if (inobj.filled >  filled) return false; 
        if (fill_color > inobj.fill_color) return true;
        if (inobj.fill_color >  fill_color) return false; 
        if (lifetime > inobj.lifetime) return true;
        if (inobj.lifetime >  lifetime) return false; 
        if (points > inobj.points) return true;
        if (inobj.points >  points) return false; 
        if (outline_colors > inobj.outline_colors) return true;
        if (inobj.outline_colors >  outline_colors) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const visualization_msgs::ImageMarker & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"header",t.header,indent,false);
    rframe::json_io::encode(sstr,"ns",t.ns,indent,false);
    rframe::json_io::encode(sstr,"id",t.id,indent,false);
    rframe::json_io::encode(sstr,"type",t.type,indent,false);
    rframe::json_io::encode(sstr,"action",t.action,indent,false);
    rframe::json_io::encode(sstr,"position",t.position,indent,false);
    rframe::json_io::encode(sstr,"scale",t.scale,indent,false);
    rframe::json_io::encode(sstr,"outline_color",t.outline_color,indent,false);
    rframe::json_io::encode(sstr,"filled",t.filled,indent,false);
    rframe::json_io::encode(sstr,"fill_color",t.fill_color,indent,false);
    rframe::json_io::encode(sstr,"lifetime",t.lifetime,indent,false);
    rframe::json_io::encode(sstr,"points",t.points,indent,false);
    rframe::json_io::encode(sstr,"outline_colors",t.outline_colors,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string visualization_msgs::ImageMarker::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const visualization_msgs::ImageMarker & value)
{
    return s << value.toStr(false);
}

