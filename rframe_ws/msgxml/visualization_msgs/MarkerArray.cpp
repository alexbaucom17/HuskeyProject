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
#include "visualization_msgs/MarkerArray.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int visualization_msgs::MarkerArray::ID;
const unsigned int visualization_msgs::MarkerArray::DATA_VERSION;
const std::string visualization_msgs::MarkerArray::DATA_TYPE_NAME = "MarkerArray";
const std::string visualization_msgs::MarkerArray::DATA_TYPE_FULL_NAME = "visualization_msgs::MarkerArray";
const std::string visualization_msgs::MarkerArray::VERSION_MD5 = "a61d1c951f4cf03ecb3eaad55d380ce0";
/* xml source for this class */
const std::string visualization_msgs::MarkerArray::XML_SOURCE = "<class name=\"MarkerArray\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"d155b9ce5188fbaf89745847fd5882d7\" rosDesc=\"Marker[] markers\\n\\n================================================================================\\nMSG: visualization_msgs/Marker\\n# See http://www.ros.org/wiki/rviz/DisplayTypes/Marker and http://www.ros.org/wiki/rviz/Tutorials/Markers%3A%20Basic%20Shapes for more information on using this message with rviz\\n\\nuint8 ARROW=0\\nuint8 CUBE=1\\nuint8 SPHERE=2\\nuint8 CYLINDER=3\\nuint8 LINE_STRIP=4\\nuint8 LINE_LIST=5\\nuint8 CUBE_LIST=6\\nuint8 SPHERE_LIST=7\\nuint8 POINTS=8\\nuint8 TEXT_VIEW_FACING=9\\nuint8 MESH_RESOURCE=10\\nuint8 TRIANGLE_LIST=11\\n\\nuint8 ADD=0\\nuint8 MODIFY=0\\nuint8 DELETE=2\\nuint8 DELETEALL=3\\n\\nHeader header                        # header for time/frame information\\nstring ns                            # Namespace to place this object in... used in conjunction with id to create a unique name for the object\\nint32 id                            # object ID useful in conjunction with the namespace for manipulating and deleting the object later\\nint32 type                          # Type of object\\nint32 action                         # 0 add/modify an object, 1 (deprecated), 2 deletes an object, 3 deletes all objects\\ngeometry_msgs/Pose pose                 # Pose of the object\\ngeometry_msgs/Vector3 scale             # Scale of the object 1,1,1 means default (usually 1 meter square)\\nstd_msgs/ColorRGBA color             # Color [0.0-1.0]\\nduration lifetime                    # How long the object should last before being automatically deleted.  0 means forever\\nbool frame_locked                    # If this marker should be frame-locked, i.e. retransformed into its frame every timestep\\n\\n#Only used if the type specified has some use for them (eg. POINTS, LINE_STRIP, ...)\\ngeometry_msgs/Point[] points\\n#Only used if the type specified has some use for them (eg. POINTS, LINE_STRIP, ...)\\n#number of colors must either be 0 or equal to the number of points\\n#NOTE: alpha is not yet used\\nstd_msgs/ColorRGBA[] colors\\n\\n# NOTE: only used for text markers\\nstring text\\n\\n# NOTE: only used for MESH_RESOURCE markers\\nstring mesh_resource\\nbool mesh_use_embedded_materials\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: geometry_msgs/Pose\\n# A representation of pose in free space, composed of postion and orientation. \\nPoint position\\nQuaternion orientation\\n\\n================================================================================\\nMSG: geometry_msgs/Point\\n# This contains the position of a point in free space\\nfloat64 x\\nfloat64 y\\nfloat64 z\\n\\n================================================================================\\nMSG: geometry_msgs/Quaternion\\n# This represents an orientation in free space in quaternion form.\\n\\nfloat64 x\\nfloat64 y\\nfloat64 z\\nfloat64 w\\n\\n================================================================================\\nMSG: geometry_msgs/Vector3\\n# This represents a vector in free space. \\n# It is only meant to represent a direction. Therefore, it does not\\n# make sense to apply a translation to it (e.g., when applying a \\n# generic rigid transformation to a Vector3, tf2 will only apply the\\n# rotation). If you want your data to be translatable too, use the\\n# geometry_msgs/Point message instead.\\n\\nfloat64 x\\nfloat64 y\\nfloat64 z\\n================================================================================\\nMSG: std_msgs/ColorRGBA\\nfloat32 r\\nfloat32 g\\nfloat32 b\\nfloat32 a\\n\" comment=\"\" id=\"2125420987\">\
  <field name=\"markers\" type=\"vector(Marker)\" sourceType=\"Marker\" comment=\"\"/>\
</class>";

visualization_msgs::MarkerArray::MarkerArray() : markers()
{  
};

visualization_msgs::MarkerArray::MarkerArray(const visualization_msgs::MarkerArray & inobj) : markers(inobj.markers)
{
};

visualization_msgs::MarkerArray::~MarkerArray()
{
};

visualization_msgs::MarkerArray * visualization_msgs::MarkerArray::New()
{ 
    return new MarkerArray();
};

bool visualization_msgs::MarkerArray::dataTypeFlat() 
{   
    return false; 
};

visualization_msgs::MarkerArray & visualization_msgs::MarkerArray::operator=(const visualization_msgs::MarkerArray & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus visualization_msgs::MarkerArray is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(visualization_msgs::MarkerArray));
        }
        else */ 
        {

            markers = inobj.markers;
        }
    }

    return *this;
}

bool visualization_msgs::MarkerArray::operator==(const visualization_msgs::MarkerArray & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (markers == inobj.markers);
    }

    return ret;
}

bool visualization_msgs::MarkerArray::operator!=(const visualization_msgs::MarkerArray & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool visualization_msgs::MarkerArray::operator<(const visualization_msgs::MarkerArray & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (markers < inobj.markers) return true;
        if (inobj.markers <  markers) return false; ;
    }

    return ret;
}

bool visualization_msgs::MarkerArray::operator>(const visualization_msgs::MarkerArray & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (markers > inobj.markers) return true;
        if (inobj.markers >  markers) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const visualization_msgs::MarkerArray & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"markers",t.markers,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string visualization_msgs::MarkerArray::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const visualization_msgs::MarkerArray & value)
{
    return s << value.toStr(false);
}

