// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:55 -0500
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

#ifndef _CODEGEN_SHAPE_MSGS_GENCPPNML_H_
#define _CODEGEN_SHAPE_MSGS_GENCPPNML_H_

#include <messaging/nml/NMLMessageFactory.h>
//#include <DataTypeInfo.h>
#include <messaging/Message.h>

#include "shape_msgs_gencpp_NMLSupport.h"

namespace rframe { class DataTypeInfo; };

#include "Mesh.h"
#include "MeshTriangle.h"
#include "Plane.h"
#include "SolidPrimitive.h"

namespace shape_msgs {

    /** definition of message factory for shape_msgs_gencpp */
    class shape_msgs_gencppNMLMessageFactory : public NMLMessageFactory
    {
    public:
        /** constructor */
        shape_msgs_gencppNMLMessageFactory();
        /** destructor */
        virtual ~shape_msgs_gencppNMLMessageFactory();

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
    NMLMessageFactory * allocate_shape_msgs_gencpp();

    /** NML interface for Mesh 

    */
    class MeshNML : public NMLmsg
    {
    public:

        /** constructor */
        MeshNML();
        /** destructor */
        ~MeshNML();

        /** assignment operator */
        MeshNML & operator=(const MeshNML &inobj);
        /** assignment operator for base data class */
        MeshNML & operator=(const Mesh &inobj);

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
        Mesh nmlPayload;

        /** set payload */
        void payload(const Mesh &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<Mesh> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        Mesh * payload() { return & nmlPayload; };

    //     std::shared_ptr<Mesh> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for MeshTriangle 

    */
    class MeshTriangleNML : public NMLmsg
    {
    public:

        /** constructor */
        MeshTriangleNML();
        /** destructor */
        ~MeshTriangleNML();

        /** assignment operator */
        MeshTriangleNML & operator=(const MeshTriangleNML &inobj);
        /** assignment operator for base data class */
        MeshTriangleNML & operator=(const MeshTriangle &inobj);

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
        MeshTriangle nmlPayload;

        /** set payload */
        void payload(const MeshTriangle &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<MeshTriangle> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        MeshTriangle * payload() { return & nmlPayload; };

    //     std::shared_ptr<MeshTriangle> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for Plane 

    */
    class PlaneNML : public NMLmsg
    {
    public:

        /** constructor */
        PlaneNML();
        /** destructor */
        ~PlaneNML();

        /** assignment operator */
        PlaneNML & operator=(const PlaneNML &inobj);
        /** assignment operator for base data class */
        PlaneNML & operator=(const Plane &inobj);

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
        Plane nmlPayload;

        /** set payload */
        void payload(const Plane &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<Plane> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        Plane * payload() { return & nmlPayload; };

    //     std::shared_ptr<Plane> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for SolidPrimitive 

    */
    class SolidPrimitiveNML : public NMLmsg
    {
    public:

        /** constructor */
        SolidPrimitiveNML();
        /** destructor */
        ~SolidPrimitiveNML();

        /** assignment operator */
        SolidPrimitiveNML & operator=(const SolidPrimitiveNML &inobj);
        /** assignment operator for base data class */
        SolidPrimitiveNML & operator=(const SolidPrimitive &inobj);

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
        SolidPrimitive nmlPayload;

        /** set payload */
        void payload(const SolidPrimitive &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<SolidPrimitive> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        SolidPrimitive * payload() { return & nmlPayload; };

    //     std::shared_ptr<SolidPrimitive> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    // predeclaration of nmlupdate functions (necessary due to namespaces )

    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, shape_msgs::Mesh & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, shape_msgs::MeshTriangle & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, shape_msgs::Plane & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, shape_msgs::SolidPrimitive & inobj);

    /** nml format function */
    int shape_msgs_gencpp_format(NMLTYPE type, void * buffer, CMS* cms);

}; // end namespace shape_msgs

#endif // _SHAPE_MSGS_GENCPPNML_H_