// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:52 -0500
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

#include <roscpp_tutorials/TwoIntsRequest.h>
#include <roscpp_tutorials/TwoIntsResponse.h>
#include <roscpp_tutorials/TwoInts.h>

using namespace std;

template<class Archive> void roscpp_tutorials::TwoIntsRequest::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("a",a);

    ar & boost::serialization::make_nvp("b",b);
}

string roscpp_tutorials::TwoIntsRequest::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const roscpp_tutorials::TwoIntsRequest & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("TwoIntsRequest",robj);

    */
    string s = str.str();

    return s;
};

bool roscpp_tutorials::TwoIntsRequest::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    roscpp_tutorials::TwoIntsRequest & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("TwoIntsRequest",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(roscpp_tutorials::TwoIntsRequest); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(roscpp_tutorials::TwoIntsRequest); // defined in common/SerialzationHelpers.h

template<class Archive> void roscpp_tutorials::TwoIntsResponse::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("sum",sum);
}

string roscpp_tutorials::TwoIntsResponse::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const roscpp_tutorials::TwoIntsResponse & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("TwoIntsResponse",robj);

    */
    string s = str.str();

    return s;
};

bool roscpp_tutorials::TwoIntsResponse::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    roscpp_tutorials::TwoIntsResponse & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("TwoIntsResponse",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(roscpp_tutorials::TwoIntsResponse); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(roscpp_tutorials::TwoIntsResponse); // defined in common/SerialzationHelpers.h

template<class Archive> void roscpp_tutorials::TwoInts::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("request",request);

    ar & boost::serialization::make_nvp("response",response);
}

string roscpp_tutorials::TwoInts::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const roscpp_tutorials::TwoInts & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("TwoInts",robj);

    */
    string s = str.str();

    return s;
};

bool roscpp_tutorials::TwoInts::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    roscpp_tutorials::TwoInts & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("TwoInts",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(roscpp_tutorials::TwoInts); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(roscpp_tutorials::TwoInts); // defined in common/SerialzationHelpers.h
