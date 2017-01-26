// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:09 -0500
//  From Template/Script: data_templates/DataClassSerializationTemplate.cpp
 
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

#include <stdio.h>

// override the itemName template function used within serialization

#include <common/Log.h>
#include <common/BsonIo.h>
#include <common/SerializationCppHelpers.h>
#include <common/SerializationHelpers.h>

#include <visualization_msgs/ImageMarker.h>
#include <visualization_msgs/InteractiveMarker.h>
#include <visualization_msgs/InteractiveMarkerControl.h>
#include <visualization_msgs/InteractiveMarkerFeedback.h>
#include <visualization_msgs/InteractiveMarkerInit.h>
#include <visualization_msgs/InteractiveMarkerPose.h>
#include <visualization_msgs/InteractiveMarkerUpdate.h>
#include <visualization_msgs/Marker.h>
#include <visualization_msgs/MarkerArray.h>
#include <visualization_msgs/MenuEntry.h>

using namespace std;

template<class Archive> void visualization_msgs::ImageMarker::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("header",header);

    ar & boost::serialization::make_nvp("ns",ns);

    ar & boost::serialization::make_nvp("id",id);

    ar & boost::serialization::make_nvp("type",type);

    ar & boost::serialization::make_nvp("action",action);

    ar & boost::serialization::make_nvp("position",position);

    ar & boost::serialization::make_nvp("scale",scale);

    ar & boost::serialization::make_nvp("outline_color",outline_color);

    ar & boost::serialization::make_nvp("filled",filled);

    ar & boost::serialization::make_nvp("fill_color",fill_color);

    ar & boost::serialization::make_nvp("lifetime",lifetime);

    ar & boost::serialization::make_nvp("points",points);

    ar & boost::serialization::make_nvp("outline_colors",outline_colors);
}

string visualization_msgs::ImageMarker::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const visualization_msgs::ImageMarker & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("ImageMarker",robj);

    */
    string s = str.str();

    return s;
};

bool visualization_msgs::ImageMarker::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    visualization_msgs::ImageMarker & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("ImageMarker",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(visualization_msgs::ImageMarker); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(visualization_msgs::ImageMarker); // defined in common/SerialzationHelpers.h

template<class Archive> void visualization_msgs::InteractiveMarker::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("header",header);

    ar & boost::serialization::make_nvp("pose",pose);

    ar & boost::serialization::make_nvp("name",name);

    ar & boost::serialization::make_nvp("description",description);

    ar & boost::serialization::make_nvp("scale",scale);

    ar & boost::serialization::make_nvp("menu_entries",menu_entries);

    ar & boost::serialization::make_nvp("controls",controls);
}

string visualization_msgs::InteractiveMarker::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const visualization_msgs::InteractiveMarker & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("InteractiveMarker",robj);

    */
    string s = str.str();

    return s;
};

bool visualization_msgs::InteractiveMarker::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    visualization_msgs::InteractiveMarker & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("InteractiveMarker",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(visualization_msgs::InteractiveMarker); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(visualization_msgs::InteractiveMarker); // defined in common/SerialzationHelpers.h

template<class Archive> void visualization_msgs::InteractiveMarkerControl::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("name",name);

    ar & boost::serialization::make_nvp("orientation",orientation);

    ar & boost::serialization::make_nvp("orientation_mode",orientation_mode);

    ar & boost::serialization::make_nvp("interaction_mode",interaction_mode);

    ar & boost::serialization::make_nvp("always_visible",always_visible);

    ar & boost::serialization::make_nvp("markers",markers);

    ar & boost::serialization::make_nvp("independent_marker_orientation",independent_marker_orientation);

    ar & boost::serialization::make_nvp("description",description);
}

string visualization_msgs::InteractiveMarkerControl::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const visualization_msgs::InteractiveMarkerControl & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("InteractiveMarkerControl",robj);

    */
    string s = str.str();

    return s;
};

bool visualization_msgs::InteractiveMarkerControl::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    visualization_msgs::InteractiveMarkerControl & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("InteractiveMarkerControl",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(visualization_msgs::InteractiveMarkerControl); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(visualization_msgs::InteractiveMarkerControl); // defined in common/SerialzationHelpers.h

template<class Archive> void visualization_msgs::InteractiveMarkerFeedback::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("header",header);

    ar & boost::serialization::make_nvp("client_id",client_id);

    ar & boost::serialization::make_nvp("marker_name",marker_name);

    ar & boost::serialization::make_nvp("control_name",control_name);

    ar & boost::serialization::make_nvp("event_type",event_type);

    ar & boost::serialization::make_nvp("pose",pose);

    ar & boost::serialization::make_nvp("menu_entry_id",menu_entry_id);

    ar & boost::serialization::make_nvp("mouse_point",mouse_point);

    ar & boost::serialization::make_nvp("mouse_point_valid",mouse_point_valid);
}

string visualization_msgs::InteractiveMarkerFeedback::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const visualization_msgs::InteractiveMarkerFeedback & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("InteractiveMarkerFeedback",robj);

    */
    string s = str.str();

    return s;
};

bool visualization_msgs::InteractiveMarkerFeedback::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    visualization_msgs::InteractiveMarkerFeedback & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("InteractiveMarkerFeedback",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(visualization_msgs::InteractiveMarkerFeedback); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(visualization_msgs::InteractiveMarkerFeedback); // defined in common/SerialzationHelpers.h

template<class Archive> void visualization_msgs::InteractiveMarkerInit::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("server_id",server_id);

    ar & boost::serialization::make_nvp("seq_num",seq_num);

    ar & boost::serialization::make_nvp("markers",markers);
}

string visualization_msgs::InteractiveMarkerInit::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const visualization_msgs::InteractiveMarkerInit & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("InteractiveMarkerInit",robj);

    */
    string s = str.str();

    return s;
};

bool visualization_msgs::InteractiveMarkerInit::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    visualization_msgs::InteractiveMarkerInit & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("InteractiveMarkerInit",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(visualization_msgs::InteractiveMarkerInit); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(visualization_msgs::InteractiveMarkerInit); // defined in common/SerialzationHelpers.h

template<class Archive> void visualization_msgs::InteractiveMarkerPose::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("header",header);

    ar & boost::serialization::make_nvp("pose",pose);

    ar & boost::serialization::make_nvp("name",name);
}

string visualization_msgs::InteractiveMarkerPose::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const visualization_msgs::InteractiveMarkerPose & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("InteractiveMarkerPose",robj);

    */
    string s = str.str();

    return s;
};

bool visualization_msgs::InteractiveMarkerPose::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    visualization_msgs::InteractiveMarkerPose & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("InteractiveMarkerPose",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(visualization_msgs::InteractiveMarkerPose); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(visualization_msgs::InteractiveMarkerPose); // defined in common/SerialzationHelpers.h

template<class Archive> void visualization_msgs::InteractiveMarkerUpdate::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("server_id",server_id);

    ar & boost::serialization::make_nvp("seq_num",seq_num);

    ar & boost::serialization::make_nvp("type",type);

    ar & boost::serialization::make_nvp("markers",markers);

    ar & boost::serialization::make_nvp("poses",poses);

    ar & boost::serialization::make_nvp("erases",erases);
}

string visualization_msgs::InteractiveMarkerUpdate::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const visualization_msgs::InteractiveMarkerUpdate & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("InteractiveMarkerUpdate",robj);

    */
    string s = str.str();

    return s;
};

bool visualization_msgs::InteractiveMarkerUpdate::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    visualization_msgs::InteractiveMarkerUpdate & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("InteractiveMarkerUpdate",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(visualization_msgs::InteractiveMarkerUpdate); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(visualization_msgs::InteractiveMarkerUpdate); // defined in common/SerialzationHelpers.h

template<class Archive> void visualization_msgs::Marker::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("header",header);

    ar & boost::serialization::make_nvp("ns",ns);

    ar & boost::serialization::make_nvp("id",id);

    ar & boost::serialization::make_nvp("type",type);

    ar & boost::serialization::make_nvp("action",action);

    ar & boost::serialization::make_nvp("pose",pose);

    ar & boost::serialization::make_nvp("scale",scale);

    ar & boost::serialization::make_nvp("color",color);

    ar & boost::serialization::make_nvp("lifetime",lifetime);

    ar & boost::serialization::make_nvp("frame_locked",frame_locked);

    ar & boost::serialization::make_nvp("points",points);

    ar & boost::serialization::make_nvp("colors",colors);

    ar & boost::serialization::make_nvp("text",text);

    ar & boost::serialization::make_nvp("mesh_resource",mesh_resource);

    ar & boost::serialization::make_nvp("mesh_use_embedded_materials",mesh_use_embedded_materials);
}

string visualization_msgs::Marker::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const visualization_msgs::Marker & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("Marker",robj);

    */
    string s = str.str();

    return s;
};

bool visualization_msgs::Marker::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    visualization_msgs::Marker & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("Marker",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(visualization_msgs::Marker); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(visualization_msgs::Marker); // defined in common/SerialzationHelpers.h

template<class Archive> void visualization_msgs::MarkerArray::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("markers",markers);
}

string visualization_msgs::MarkerArray::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const visualization_msgs::MarkerArray & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("MarkerArray",robj);

    */
    string s = str.str();

    return s;
};

bool visualization_msgs::MarkerArray::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    visualization_msgs::MarkerArray & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("MarkerArray",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(visualization_msgs::MarkerArray); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(visualization_msgs::MarkerArray); // defined in common/SerialzationHelpers.h

template<class Archive> void visualization_msgs::MenuEntry::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("id",id);

    ar & boost::serialization::make_nvp("parent_id",parent_id);

    ar & boost::serialization::make_nvp("title",title);

    ar & boost::serialization::make_nvp("command",command);

    ar & boost::serialization::make_nvp("command_type",command_type);
}

string visualization_msgs::MenuEntry::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const visualization_msgs::MenuEntry & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("MenuEntry",robj);

    */
    string s = str.str();

    return s;
};

bool visualization_msgs::MenuEntry::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    visualization_msgs::MenuEntry & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("MenuEntry",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(visualization_msgs::MenuEntry); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(visualization_msgs::MenuEntry); // defined in common/SerialzationHelpers.h

