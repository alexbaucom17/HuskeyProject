// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:03 -0500
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

#include <actionlib_msgs/GoalID.h>
#include <actionlib_msgs/GoalStatus.h>
#include <actionlib_msgs/GoalStatusArray.h>

using namespace std;

template<class Archive> void actionlib_msgs::GoalID::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("stamp",stamp);

    ar & boost::serialization::make_nvp("id",id);
}

string actionlib_msgs::GoalID::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const actionlib_msgs::GoalID & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("GoalID",robj);

    */
    string s = str.str();

    return s;
};

bool actionlib_msgs::GoalID::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    actionlib_msgs::GoalID & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("GoalID",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(actionlib_msgs::GoalID); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(actionlib_msgs::GoalID); // defined in common/SerialzationHelpers.h

template<class Archive> void actionlib_msgs::GoalStatus::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("goal_id",goal_id);

    ar & boost::serialization::make_nvp("status",status);

    ar & boost::serialization::make_nvp("text",text);
}

string actionlib_msgs::GoalStatus::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const actionlib_msgs::GoalStatus & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("GoalStatus",robj);

    */
    string s = str.str();

    return s;
};

bool actionlib_msgs::GoalStatus::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    actionlib_msgs::GoalStatus & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("GoalStatus",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(actionlib_msgs::GoalStatus); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(actionlib_msgs::GoalStatus); // defined in common/SerialzationHelpers.h

template<class Archive> void actionlib_msgs::GoalStatusArray::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("header",header);

    ar & boost::serialization::make_nvp("status_list",status_list);
}

string actionlib_msgs::GoalStatusArray::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const actionlib_msgs::GoalStatusArray & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("GoalStatusArray",robj);

    */
    string s = str.str();

    return s;
};

bool actionlib_msgs::GoalStatusArray::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    actionlib_msgs::GoalStatusArray & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("GoalStatusArray",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(actionlib_msgs::GoalStatusArray); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(actionlib_msgs::GoalStatusArray); // defined in common/SerialzationHelpers.h

