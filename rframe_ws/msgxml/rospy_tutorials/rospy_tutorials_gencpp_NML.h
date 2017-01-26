// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:53 -0500
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

#ifndef _CODEGEN_ROSPY_TUTORIALS_GENCPPNML_H_
#define _CODEGEN_ROSPY_TUTORIALS_GENCPPNML_H_

#include <messaging/nml/NMLMessageFactory.h>
//#include <DataTypeInfo.h>
#include <messaging/Message.h>

#include "rospy_tutorials_gencpp_NMLSupport.h"

namespace rframe { class DataTypeInfo; };

#include "Floats.h"
#include "HeaderString.h"
#include "AddTwoIntsRequest.h"
#include "AddTwoIntsResponse.h"
#include "AddTwoInts.h"
#include "BadTwoIntsRequest.h"
#include "BadTwoIntsResponse.h"
#include "BadTwoInts.h"

namespace rospy_tutorials {

    /** definition of message factory for rospy_tutorials_gencpp */
    class rospy_tutorials_gencppNMLMessageFactory : public NMLMessageFactory
    {
    public:
        /** constructor */
        rospy_tutorials_gencppNMLMessageFactory();
        /** destructor */
        virtual ~rospy_tutorials_gencppNMLMessageFactory();

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
    NMLMessageFactory * allocate_rospy_tutorials_gencpp();

    /** NML interface for Floats 

    */
    class FloatsNML : public NMLmsg
    {
    public:

        /** constructor */
        FloatsNML();
        /** destructor */
        ~FloatsNML();

        /** assignment operator */
        FloatsNML & operator=(const FloatsNML &inobj);
        /** assignment operator for base data class */
        FloatsNML & operator=(const Floats &inobj);

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
        Floats nmlPayload;

        /** set payload */
        void payload(const Floats &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<Floats> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        Floats * payload() { return & nmlPayload; };

    //     std::shared_ptr<Floats> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for HeaderString 

    */
    class HeaderStringNML : public NMLmsg
    {
    public:

        /** constructor */
        HeaderStringNML();
        /** destructor */
        ~HeaderStringNML();

        /** assignment operator */
        HeaderStringNML & operator=(const HeaderStringNML &inobj);
        /** assignment operator for base data class */
        HeaderStringNML & operator=(const HeaderString &inobj);

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
        HeaderString nmlPayload;

        /** set payload */
        void payload(const HeaderString &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<HeaderString> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        HeaderString * payload() { return & nmlPayload; };

    //     std::shared_ptr<HeaderString> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for AddTwoIntsRequest 

    */
    class AddTwoIntsRequestNML : public NMLmsg
    {
    public:

        /** constructor */
        AddTwoIntsRequestNML();
        /** destructor */
        ~AddTwoIntsRequestNML();

        /** assignment operator */
        AddTwoIntsRequestNML & operator=(const AddTwoIntsRequestNML &inobj);
        /** assignment operator for base data class */
        AddTwoIntsRequestNML & operator=(const AddTwoIntsRequest &inobj);

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
        AddTwoIntsRequest nmlPayload;

        /** set payload */
        void payload(const AddTwoIntsRequest &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<AddTwoIntsRequest> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        AddTwoIntsRequest * payload() { return & nmlPayload; };

    //     std::shared_ptr<AddTwoIntsRequest> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for AddTwoIntsResponse 

    */
    class AddTwoIntsResponseNML : public NMLmsg
    {
    public:

        /** constructor */
        AddTwoIntsResponseNML();
        /** destructor */
        ~AddTwoIntsResponseNML();

        /** assignment operator */
        AddTwoIntsResponseNML & operator=(const AddTwoIntsResponseNML &inobj);
        /** assignment operator for base data class */
        AddTwoIntsResponseNML & operator=(const AddTwoIntsResponse &inobj);

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
        AddTwoIntsResponse nmlPayload;

        /** set payload */
        void payload(const AddTwoIntsResponse &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<AddTwoIntsResponse> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        AddTwoIntsResponse * payload() { return & nmlPayload; };

    //     std::shared_ptr<AddTwoIntsResponse> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for AddTwoInts 

    */
    class AddTwoIntsNML : public NMLmsg
    {
    public:

        /** constructor */
        AddTwoIntsNML();
        /** destructor */
        ~AddTwoIntsNML();

        /** assignment operator */
        AddTwoIntsNML & operator=(const AddTwoIntsNML &inobj);
        /** assignment operator for base data class */
        AddTwoIntsNML & operator=(const AddTwoInts &inobj);

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
        AddTwoInts nmlPayload;

        /** set payload */
        void payload(const AddTwoInts &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<AddTwoInts> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        AddTwoInts * payload() { return & nmlPayload; };

    //     std::shared_ptr<AddTwoInts> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for BadTwoIntsRequest 

    */
    class BadTwoIntsRequestNML : public NMLmsg
    {
    public:

        /** constructor */
        BadTwoIntsRequestNML();
        /** destructor */
        ~BadTwoIntsRequestNML();

        /** assignment operator */
        BadTwoIntsRequestNML & operator=(const BadTwoIntsRequestNML &inobj);
        /** assignment operator for base data class */
        BadTwoIntsRequestNML & operator=(const BadTwoIntsRequest &inobj);

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
        BadTwoIntsRequest nmlPayload;

        /** set payload */
        void payload(const BadTwoIntsRequest &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<BadTwoIntsRequest> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        BadTwoIntsRequest * payload() { return & nmlPayload; };

    //     std::shared_ptr<BadTwoIntsRequest> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for BadTwoIntsResponse 

    */
    class BadTwoIntsResponseNML : public NMLmsg
    {
    public:

        /** constructor */
        BadTwoIntsResponseNML();
        /** destructor */
        ~BadTwoIntsResponseNML();

        /** assignment operator */
        BadTwoIntsResponseNML & operator=(const BadTwoIntsResponseNML &inobj);
        /** assignment operator for base data class */
        BadTwoIntsResponseNML & operator=(const BadTwoIntsResponse &inobj);

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
        BadTwoIntsResponse nmlPayload;

        /** set payload */
        void payload(const BadTwoIntsResponse &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<BadTwoIntsResponse> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        BadTwoIntsResponse * payload() { return & nmlPayload; };

    //     std::shared_ptr<BadTwoIntsResponse> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for BadTwoInts 

    */
    class BadTwoIntsNML : public NMLmsg
    {
    public:

        /** constructor */
        BadTwoIntsNML();
        /** destructor */
        ~BadTwoIntsNML();

        /** assignment operator */
        BadTwoIntsNML & operator=(const BadTwoIntsNML &inobj);
        /** assignment operator for base data class */
        BadTwoIntsNML & operator=(const BadTwoInts &inobj);

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
        BadTwoInts nmlPayload;

        /** set payload */
        void payload(const BadTwoInts &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<BadTwoInts> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        BadTwoInts * payload() { return & nmlPayload; };

    //     std::shared_ptr<BadTwoInts> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    // predeclaration of nmlupdate functions (necessary due to namespaces )

    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, rospy_tutorials::Floats & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, rospy_tutorials::HeaderString & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, rospy_tutorials::AddTwoIntsRequest & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, rospy_tutorials::AddTwoIntsResponse & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, rospy_tutorials::AddTwoInts & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, rospy_tutorials::BadTwoIntsRequest & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, rospy_tutorials::BadTwoIntsResponse & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, rospy_tutorials::BadTwoInts & inobj);

    /** nml format function */
    int rospy_tutorials_gencpp_format(NMLTYPE type, void * buffer, CMS* cms);

}; // end namespace rospy_tutorials

#endif // _ROSPY_TUTORIALS_GENCPPNML_H_