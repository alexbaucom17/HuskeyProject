// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:07 -0500
//  From Template/Script: data_templates/NMLHeaderTemplate.h
 
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

#ifndef _CODEGEN_ROSGRAPH_MSGS_GENCPPNML_H_
#define _CODEGEN_ROSGRAPH_MSGS_GENCPPNML_H_

#include <messaging/nml/NMLMessageFactory.h>
//#include <DataTypeInfo.h>
#include <messaging/Message.h>

#include "rosgraph_msgs_gencpp_NMLSupport.h"

namespace rframe { class DataTypeInfo; };

#include "Clock.h"
#include "Log.h"
#include "TopicStatistics.h"

namespace rosgraph_msgs {

    /** definition of message factory for rosgraph_msgs_gencpp */
    class rosgraph_msgs_gencppNMLMessageFactory : public NMLMessageFactory
    {
    public:
        /** constructor */
        rosgraph_msgs_gencppNMLMessageFactory();
        /** destructor */
        virtual ~rosgraph_msgs_gencppNMLMessageFactory();

        /** see  rframe::MessageFactoryInterface */
        virtual void dataTypes(std::vector<DataTypeInfo> & ids);
        /** see  rframe::MessageFactoryInterface */
        virtual int dataType(NMLmsg & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int allocate(rframe::ID_TYPE id, std::shared_ptr<NMLmsg> & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int deallocateTransport(NMLmsg * msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int allocate(rframe::ID_TYPE id, std::shared_ptr<MessageBase> & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int deallocateMessage(MessageBase * msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int toTransport( MessageBase & src, NMLmsg & dst);
        /** see  rframe::MessageFactoryInterface */
        virtual int fromTransport( NMLmsg & src, MessageBase & dst);

        /** \return poitner to nml format function */
        virtual NML_FORMAT_PTR FormatPointer();
        /** run constructor for class of type id in the provided buffer */
        virtual int constructBuffer(rframe::ID_TYPE id, void * buffer);
        /** run destructor for class of type id in the buffer */
        virtual int destructBuffer(rframe::ID_TYPE id, void * buffer);
    };

    /** factory allocation function for use when not dynamically loading the factory library  */
    NMLMessageFactory * allocate_rosgraph_msgs_gencpp();

    /** NML interface for Clock 

    */
    class ClockNML : public NMLmsg
    {
    public:

        /** constructor */
        ClockNML();
        /** destructor */
        ~ClockNML();

        /** assignment operator */
        ClockNML & operator=(const ClockNML &inobj);
        /** assignment operator for base data class */
        ClockNML & operator=(const Clock &inobj);

        /** static flag, if true boost serialization should be used to serialize this message */
        static const bool useBoost = true;

        /** nml serialization access */
        void update( CMS*);

        /** message version, used to verify message versions match on read */
        unsigned int nmlVersion;
        /** timestamp of message creation */
        double nmlTimestamp;
        /** id of module which sent the message */
        rframe::ID_TYPE nmlModuleId;

        /** nml payload */
        Clock nmlPayload;

        /** set payload */
        void payload(const Clock &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<Clock> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        Clock * payload() { return & nmlPayload; };

    //     std::shared_ptr<Clock> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for Log 

    */
    class LogNML : public NMLmsg
    {
    public:

        /** constructor */
        LogNML();
        /** destructor */
        ~LogNML();

        /** assignment operator */
        LogNML & operator=(const LogNML &inobj);
        /** assignment operator for base data class */
        LogNML & operator=(const Log &inobj);

        /** static flag, if true boost serialization should be used to serialize this message */
        static const bool useBoost = true;

        /** nml serialization access */
        void update( CMS*);

        /** message version, used to verify message versions match on read */
        unsigned int nmlVersion;
        /** timestamp of message creation */
        double nmlTimestamp;
        /** id of module which sent the message */
        rframe::ID_TYPE nmlModuleId;

        /** nml payload */
        Log nmlPayload;

        /** set payload */
        void payload(const Log &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<Log> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        Log * payload() { return & nmlPayload; };

    //     std::shared_ptr<Log> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for TopicStatistics 

    */
    class TopicStatisticsNML : public NMLmsg
    {
    public:

        /** constructor */
        TopicStatisticsNML();
        /** destructor */
        ~TopicStatisticsNML();

        /** assignment operator */
        TopicStatisticsNML & operator=(const TopicStatisticsNML &inobj);
        /** assignment operator for base data class */
        TopicStatisticsNML & operator=(const TopicStatistics &inobj);

        /** static flag, if true boost serialization should be used to serialize this message */
        static const bool useBoost = true;

        /** nml serialization access */
        void update( CMS*);

        /** message version, used to verify message versions match on read */
        unsigned int nmlVersion;
        /** timestamp of message creation */
        double nmlTimestamp;
        /** id of module which sent the message */
        rframe::ID_TYPE nmlModuleId;

        /** nml payload */
        TopicStatistics nmlPayload;

        /** set payload */
        void payload(const TopicStatistics &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<TopicStatistics> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        TopicStatistics * payload() { return & nmlPayload; };

    //     std::shared_ptr<TopicStatistics> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    // predeclaration of nmlupdate functions (necessary due to namespaces )

    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, rosgraph_msgs::Clock & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, rosgraph_msgs::Log & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, rosgraph_msgs::TopicStatistics & inobj);

    /** nml format function */
    int rosgraph_msgs_gencpp_format(NMLTYPE type, void * buffer, CMS* cms);

}; // end namespace rosgraph_msgs

#endif // _ROSGRAPH_MSGS_GENCPPNML_H_
