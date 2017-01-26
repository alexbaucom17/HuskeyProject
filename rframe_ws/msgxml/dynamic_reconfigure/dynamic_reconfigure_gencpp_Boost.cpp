// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:04 -0500
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

#include <dynamic_reconfigure/BoolParameter.h>
#include <dynamic_reconfigure/Config.h>
#include <dynamic_reconfigure/ConfigDescription.h>
#include <dynamic_reconfigure/DoubleParameter.h>
#include <dynamic_reconfigure/Group.h>
#include <dynamic_reconfigure/GroupState.h>
#include <dynamic_reconfigure/IntParameter.h>
#include <dynamic_reconfigure/ParamDescription.h>
#include <dynamic_reconfigure/SensorLevels.h>
#include <dynamic_reconfigure/StrParameter.h>
#include <dynamic_reconfigure/ReconfigureRequest.h>
#include <dynamic_reconfigure/ReconfigureResponse.h>
#include <dynamic_reconfigure/Reconfigure.h>

using namespace std;

template<class Archive> void dynamic_reconfigure::BoolParameter::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("name",name);

    ar & boost::serialization::make_nvp("value",value);
}

string dynamic_reconfigure::BoolParameter::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const dynamic_reconfigure::BoolParameter & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("BoolParameter",robj);

    */
    string s = str.str();

    return s;
};

bool dynamic_reconfigure::BoolParameter::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    dynamic_reconfigure::BoolParameter & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("BoolParameter",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(dynamic_reconfigure::BoolParameter); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(dynamic_reconfigure::BoolParameter); // defined in common/SerialzationHelpers.h

template<class Archive> void dynamic_reconfigure::Config::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("bools",bools);

    ar & boost::serialization::make_nvp("ints",ints);

    ar & boost::serialization::make_nvp("strs",strs);

    ar & boost::serialization::make_nvp("doubles",doubles);

    ar & boost::serialization::make_nvp("groups",groups);
}

string dynamic_reconfigure::Config::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const dynamic_reconfigure::Config & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("Config",robj);

    */
    string s = str.str();

    return s;
};

bool dynamic_reconfigure::Config::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    dynamic_reconfigure::Config & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("Config",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(dynamic_reconfigure::Config); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(dynamic_reconfigure::Config); // defined in common/SerialzationHelpers.h

template<class Archive> void dynamic_reconfigure::ConfigDescription::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("groups",groups);

    ar & boost::serialization::make_nvp("max",max);

    ar & boost::serialization::make_nvp("min",min);

    ar & boost::serialization::make_nvp("dflt",dflt);
}

string dynamic_reconfigure::ConfigDescription::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const dynamic_reconfigure::ConfigDescription & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("ConfigDescription",robj);

    */
    string s = str.str();

    return s;
};

bool dynamic_reconfigure::ConfigDescription::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    dynamic_reconfigure::ConfigDescription & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("ConfigDescription",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(dynamic_reconfigure::ConfigDescription); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(dynamic_reconfigure::ConfigDescription); // defined in common/SerialzationHelpers.h

template<class Archive> void dynamic_reconfigure::DoubleParameter::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("name",name);

    ar & boost::serialization::make_nvp("value",value);
}

string dynamic_reconfigure::DoubleParameter::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const dynamic_reconfigure::DoubleParameter & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("DoubleParameter",robj);

    */
    string s = str.str();

    return s;
};

bool dynamic_reconfigure::DoubleParameter::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    dynamic_reconfigure::DoubleParameter & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("DoubleParameter",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(dynamic_reconfigure::DoubleParameter); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(dynamic_reconfigure::DoubleParameter); // defined in common/SerialzationHelpers.h

template<class Archive> void dynamic_reconfigure::Group::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("name",name);

    ar & boost::serialization::make_nvp("type",type);

    ar & boost::serialization::make_nvp("parameters",parameters);

    ar & boost::serialization::make_nvp("parent",parent);

    ar & boost::serialization::make_nvp("id",id);
}

string dynamic_reconfigure::Group::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const dynamic_reconfigure::Group & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("Group",robj);

    */
    string s = str.str();

    return s;
};

bool dynamic_reconfigure::Group::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    dynamic_reconfigure::Group & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("Group",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(dynamic_reconfigure::Group); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(dynamic_reconfigure::Group); // defined in common/SerialzationHelpers.h

template<class Archive> void dynamic_reconfigure::GroupState::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("name",name);

    ar & boost::serialization::make_nvp("state",state);

    ar & boost::serialization::make_nvp("id",id);

    ar & boost::serialization::make_nvp("parent",parent);
}

string dynamic_reconfigure::GroupState::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const dynamic_reconfigure::GroupState & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("GroupState",robj);

    */
    string s = str.str();

    return s;
};

bool dynamic_reconfigure::GroupState::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    dynamic_reconfigure::GroupState & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("GroupState",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(dynamic_reconfigure::GroupState); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(dynamic_reconfigure::GroupState); // defined in common/SerialzationHelpers.h

template<class Archive> void dynamic_reconfigure::IntParameter::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("name",name);

    ar & boost::serialization::make_nvp("value",value);
}

string dynamic_reconfigure::IntParameter::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const dynamic_reconfigure::IntParameter & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("IntParameter",robj);

    */
    string s = str.str();

    return s;
};

bool dynamic_reconfigure::IntParameter::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    dynamic_reconfigure::IntParameter & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("IntParameter",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(dynamic_reconfigure::IntParameter); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(dynamic_reconfigure::IntParameter); // defined in common/SerialzationHelpers.h

template<class Archive> void dynamic_reconfigure::ParamDescription::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("name",name);

    ar & boost::serialization::make_nvp("type",type);

    ar & boost::serialization::make_nvp("level",level);

    ar & boost::serialization::make_nvp("description",description);

    ar & boost::serialization::make_nvp("edit_method",edit_method);
}

string dynamic_reconfigure::ParamDescription::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const dynamic_reconfigure::ParamDescription & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("ParamDescription",robj);

    */
    string s = str.str();

    return s;
};

bool dynamic_reconfigure::ParamDescription::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    dynamic_reconfigure::ParamDescription & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("ParamDescription",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(dynamic_reconfigure::ParamDescription); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(dynamic_reconfigure::ParamDescription); // defined in common/SerialzationHelpers.h

template<class Archive> void dynamic_reconfigure::SensorLevels::serialize(Archive &ar, const unsigned int fileVersion)
{   

}

string dynamic_reconfigure::SensorLevels::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const dynamic_reconfigure::SensorLevels & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("SensorLevels",robj);

    */
    string s = str.str();

    return s;
};

bool dynamic_reconfigure::SensorLevels::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    dynamic_reconfigure::SensorLevels & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("SensorLevels",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(dynamic_reconfigure::SensorLevels); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(dynamic_reconfigure::SensorLevels); // defined in common/SerialzationHelpers.h

template<class Archive> void dynamic_reconfigure::StrParameter::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("name",name);

    ar & boost::serialization::make_nvp("value",value);
}

string dynamic_reconfigure::StrParameter::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const dynamic_reconfigure::StrParameter & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("StrParameter",robj);

    */
    string s = str.str();

    return s;
};

bool dynamic_reconfigure::StrParameter::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    dynamic_reconfigure::StrParameter & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("StrParameter",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(dynamic_reconfigure::StrParameter); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(dynamic_reconfigure::StrParameter); // defined in common/SerialzationHelpers.h

template<class Archive> void dynamic_reconfigure::ReconfigureRequest::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("config",config);
}

string dynamic_reconfigure::ReconfigureRequest::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const dynamic_reconfigure::ReconfigureRequest & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("ReconfigureRequest",robj);

    */
    string s = str.str();

    return s;
};

bool dynamic_reconfigure::ReconfigureRequest::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    dynamic_reconfigure::ReconfigureRequest & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("ReconfigureRequest",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(dynamic_reconfigure::ReconfigureRequest); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(dynamic_reconfigure::ReconfigureRequest); // defined in common/SerialzationHelpers.h

template<class Archive> void dynamic_reconfigure::ReconfigureResponse::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("config",config);
}

string dynamic_reconfigure::ReconfigureResponse::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const dynamic_reconfigure::ReconfigureResponse & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("ReconfigureResponse",robj);

    */
    string s = str.str();

    return s;
};

bool dynamic_reconfigure::ReconfigureResponse::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    dynamic_reconfigure::ReconfigureResponse & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("ReconfigureResponse",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(dynamic_reconfigure::ReconfigureResponse); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(dynamic_reconfigure::ReconfigureResponse); // defined in common/SerialzationHelpers.h

template<class Archive> void dynamic_reconfigure::Reconfigure::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("request",request);

    ar & boost::serialization::make_nvp("response",response);
}

string dynamic_reconfigure::Reconfigure::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const dynamic_reconfigure::Reconfigure & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("Reconfigure",robj);

    */
    string s = str.str();

    return s;
};

bool dynamic_reconfigure::Reconfigure::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    dynamic_reconfigure::Reconfigure & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("Reconfigure",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(dynamic_reconfigure::Reconfigure); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(dynamic_reconfigure::Reconfigure); // defined in common/SerialzationHelpers.h

