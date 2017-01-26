// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2017-01-26 12:56:52 -0500
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

#include <frontier_exploration/ExploreTaskAction.h>
#include <frontier_exploration/ExploreTaskActionFeedback.h>
#include <frontier_exploration/ExploreTaskActionGoal.h>
#include <frontier_exploration/ExploreTaskActionResult.h>
#include <frontier_exploration/ExploreTaskFeedback.h>
#include <frontier_exploration/ExploreTaskGoal.h>
#include <frontier_exploration/ExploreTaskResult.h>
#include <frontier_exploration/Frontier.h>
#include <frontier_exploration/GetNextFrontierRequest.h>
#include <frontier_exploration/GetNextFrontierResponse.h>
#include <frontier_exploration/GetNextFrontier.h>
#include <frontier_exploration/UpdateBoundaryPolygonRequest.h>
#include <frontier_exploration/UpdateBoundaryPolygonResponse.h>
#include <frontier_exploration/UpdateBoundaryPolygon.h>

using namespace std;

template<class Archive> void frontier_exploration::ExploreTaskAction::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("action_goal",action_goal);

    ar & boost::serialization::make_nvp("action_result",action_result);

    ar & boost::serialization::make_nvp("action_feedback",action_feedback);
}

string frontier_exploration::ExploreTaskAction::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const frontier_exploration::ExploreTaskAction & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("ExploreTaskAction",robj);

    */
    string s = str.str();

    return s;
};

bool frontier_exploration::ExploreTaskAction::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    frontier_exploration::ExploreTaskAction & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("ExploreTaskAction",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(frontier_exploration::ExploreTaskAction); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(frontier_exploration::ExploreTaskAction); // defined in common/SerialzationHelpers.h

template<class Archive> void frontier_exploration::ExploreTaskActionFeedback::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("header",header);

    ar & boost::serialization::make_nvp("status",status);

    ar & boost::serialization::make_nvp("feedback",feedback);
}

string frontier_exploration::ExploreTaskActionFeedback::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const frontier_exploration::ExploreTaskActionFeedback & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("ExploreTaskActionFeedback",robj);

    */
    string s = str.str();

    return s;
};

bool frontier_exploration::ExploreTaskActionFeedback::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    frontier_exploration::ExploreTaskActionFeedback & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("ExploreTaskActionFeedback",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(frontier_exploration::ExploreTaskActionFeedback); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(frontier_exploration::ExploreTaskActionFeedback); // defined in common/SerialzationHelpers.h

template<class Archive> void frontier_exploration::ExploreTaskActionGoal::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("header",header);

    ar & boost::serialization::make_nvp("goal_id",goal_id);

    ar & boost::serialization::make_nvp("goal",goal);
}

string frontier_exploration::ExploreTaskActionGoal::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const frontier_exploration::ExploreTaskActionGoal & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("ExploreTaskActionGoal",robj);

    */
    string s = str.str();

    return s;
};

bool frontier_exploration::ExploreTaskActionGoal::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    frontier_exploration::ExploreTaskActionGoal & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("ExploreTaskActionGoal",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(frontier_exploration::ExploreTaskActionGoal); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(frontier_exploration::ExploreTaskActionGoal); // defined in common/SerialzationHelpers.h

template<class Archive> void frontier_exploration::ExploreTaskActionResult::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("header",header);

    ar & boost::serialization::make_nvp("status",status);

    ar & boost::serialization::make_nvp("result",result);
}

string frontier_exploration::ExploreTaskActionResult::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const frontier_exploration::ExploreTaskActionResult & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("ExploreTaskActionResult",robj);

    */
    string s = str.str();

    return s;
};

bool frontier_exploration::ExploreTaskActionResult::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    frontier_exploration::ExploreTaskActionResult & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("ExploreTaskActionResult",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(frontier_exploration::ExploreTaskActionResult); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(frontier_exploration::ExploreTaskActionResult); // defined in common/SerialzationHelpers.h

template<class Archive> void frontier_exploration::ExploreTaskFeedback::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("next_frontier",next_frontier);

    ar & boost::serialization::make_nvp("base_position",base_position);
}

string frontier_exploration::ExploreTaskFeedback::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const frontier_exploration::ExploreTaskFeedback & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("ExploreTaskFeedback",robj);

    */
    string s = str.str();

    return s;
};

bool frontier_exploration::ExploreTaskFeedback::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    frontier_exploration::ExploreTaskFeedback & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("ExploreTaskFeedback",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(frontier_exploration::ExploreTaskFeedback); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(frontier_exploration::ExploreTaskFeedback); // defined in common/SerialzationHelpers.h

template<class Archive> void frontier_exploration::ExploreTaskGoal::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("explore_boundary",explore_boundary);

    ar & boost::serialization::make_nvp("explore_center",explore_center);
}

string frontier_exploration::ExploreTaskGoal::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const frontier_exploration::ExploreTaskGoal & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("ExploreTaskGoal",robj);

    */
    string s = str.str();

    return s;
};

bool frontier_exploration::ExploreTaskGoal::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    frontier_exploration::ExploreTaskGoal & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("ExploreTaskGoal",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(frontier_exploration::ExploreTaskGoal); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(frontier_exploration::ExploreTaskGoal); // defined in common/SerialzationHelpers.h

template<class Archive> void frontier_exploration::ExploreTaskResult::serialize(Archive &ar, const unsigned int fileVersion)
{   

}

string frontier_exploration::ExploreTaskResult::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const frontier_exploration::ExploreTaskResult & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("ExploreTaskResult",robj);

    */
    string s = str.str();

    return s;
};

bool frontier_exploration::ExploreTaskResult::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    frontier_exploration::ExploreTaskResult & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("ExploreTaskResult",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(frontier_exploration::ExploreTaskResult); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(frontier_exploration::ExploreTaskResult); // defined in common/SerialzationHelpers.h

template<class Archive> void frontier_exploration::Frontier::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("size",size);

    ar & boost::serialization::make_nvp("min_distance",min_distance);

    ar & boost::serialization::make_nvp("initial",initial);

    ar & boost::serialization::make_nvp("centroid",centroid);

    ar & boost::serialization::make_nvp("middle",middle);
}

string frontier_exploration::Frontier::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const frontier_exploration::Frontier & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("Frontier",robj);

    */
    string s = str.str();

    return s;
};

bool frontier_exploration::Frontier::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    frontier_exploration::Frontier & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("Frontier",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(frontier_exploration::Frontier); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(frontier_exploration::Frontier); // defined in common/SerialzationHelpers.h

template<class Archive> void frontier_exploration::GetNextFrontierRequest::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("start_pose",start_pose);
}

string frontier_exploration::GetNextFrontierRequest::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const frontier_exploration::GetNextFrontierRequest & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("GetNextFrontierRequest",robj);

    */
    string s = str.str();

    return s;
};

bool frontier_exploration::GetNextFrontierRequest::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    frontier_exploration::GetNextFrontierRequest & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("GetNextFrontierRequest",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(frontier_exploration::GetNextFrontierRequest); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(frontier_exploration::GetNextFrontierRequest); // defined in common/SerialzationHelpers.h

template<class Archive> void frontier_exploration::GetNextFrontierResponse::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("next_frontier",next_frontier);
}

string frontier_exploration::GetNextFrontierResponse::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const frontier_exploration::GetNextFrontierResponse & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("GetNextFrontierResponse",robj);

    */
    string s = str.str();

    return s;
};

bool frontier_exploration::GetNextFrontierResponse::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    frontier_exploration::GetNextFrontierResponse & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("GetNextFrontierResponse",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(frontier_exploration::GetNextFrontierResponse); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(frontier_exploration::GetNextFrontierResponse); // defined in common/SerialzationHelpers.h

template<class Archive> void frontier_exploration::GetNextFrontier::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("request",request);

    ar & boost::serialization::make_nvp("response",response);
}

string frontier_exploration::GetNextFrontier::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const frontier_exploration::GetNextFrontier & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("GetNextFrontier",robj);

    */
    string s = str.str();

    return s;
};

bool frontier_exploration::GetNextFrontier::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    frontier_exploration::GetNextFrontier & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("GetNextFrontier",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(frontier_exploration::GetNextFrontier); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(frontier_exploration::GetNextFrontier); // defined in common/SerialzationHelpers.h

template<class Archive> void frontier_exploration::UpdateBoundaryPolygonRequest::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("explore_boundary",explore_boundary);
}

string frontier_exploration::UpdateBoundaryPolygonRequest::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const frontier_exploration::UpdateBoundaryPolygonRequest & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("UpdateBoundaryPolygonRequest",robj);

    */
    string s = str.str();

    return s;
};

bool frontier_exploration::UpdateBoundaryPolygonRequest::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    frontier_exploration::UpdateBoundaryPolygonRequest & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("UpdateBoundaryPolygonRequest",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(frontier_exploration::UpdateBoundaryPolygonRequest); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(frontier_exploration::UpdateBoundaryPolygonRequest); // defined in common/SerialzationHelpers.h

template<class Archive> void frontier_exploration::UpdateBoundaryPolygonResponse::serialize(Archive &ar, const unsigned int fileVersion)
{   

}

string frontier_exploration::UpdateBoundaryPolygonResponse::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const frontier_exploration::UpdateBoundaryPolygonResponse & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("UpdateBoundaryPolygonResponse",robj);

    */
    string s = str.str();

    return s;
};

bool frontier_exploration::UpdateBoundaryPolygonResponse::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    frontier_exploration::UpdateBoundaryPolygonResponse & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("UpdateBoundaryPolygonResponse",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(frontier_exploration::UpdateBoundaryPolygonResponse); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(frontier_exploration::UpdateBoundaryPolygonResponse); // defined in common/SerialzationHelpers.h

template<class Archive> void frontier_exploration::UpdateBoundaryPolygon::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("request",request);

    ar & boost::serialization::make_nvp("response",response);
}

string frontier_exploration::UpdateBoundaryPolygon::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const frontier_exploration::UpdateBoundaryPolygon & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("UpdateBoundaryPolygon",robj);

    */
    string s = str.str();

    return s;
};

bool frontier_exploration::UpdateBoundaryPolygon::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    frontier_exploration::UpdateBoundaryPolygon & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("UpdateBoundaryPolygon",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(frontier_exploration::UpdateBoundaryPolygon); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(frontier_exploration::UpdateBoundaryPolygon); // defined in common/SerialzationHelpers.h

