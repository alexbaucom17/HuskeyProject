// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:57 -0500
//  From Template/Script: data_templates/NMLClassTemplate.cpp
 
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
// main rcslib header
#include <nml.hh>
// cms updater header
#include <cms_up.hh>
#include <cms_pup.hh>

#include <common/Error.h>
#include <common/Log.h>
#include <common/Common.h>
#include <common/DataTypeInfo.h>

#include "stereo_msgs_gencpp_NML.h"
#include "stereo_msgs_gencpp_Library.h"
#include <messaging/nml/NMLSupport.h>
#include <interfaces/MessageFactoryInterface.h>

#include <DisparityImage.h>

#include <boost/iostreams/stream_buffer.hpp>
#include <boost/iostreams/stream.hpp>

#include <boost/serialization/serialization.hpp>
#include <opensource/eos/archive/portable_iarchive.hpp>
#include <opensource/eos/archive/portable_oarchive.hpp>

using namespace std;
using namespace stereo_msgs;

rframe::NMLMessageFactory * NML_stereo_msgs_gencppfactory = NULL;

extern "C"
{
    /** library access method */
    rframe::MessageFactoryBase * AllocateMessageFactory()
    {
        NML_stereo_msgs_gencppfactory = new stereo_msgs_gencppNMLMessageFactory();
        return NML_stereo_msgs_gencppfactory;
    };
}

rframe::NMLMessageFactory * stereo_msgs::allocate_stereo_msgs_gencpp()
{
    NML_stereo_msgs_gencppfactory = new stereo_msgs_gencppNMLMessageFactory();
    return NML_stereo_msgs_gencppfactory;
};

stereo_msgs_gencppNMLMessageFactory::stereo_msgs_gencppNMLMessageFactory()
{
    name("stereo_msgs_gencpp");
    // use constructor to register data types
    stereo_msgs::registerLibrary();
}

stereo_msgs_gencppNMLMessageFactory::~stereo_msgs_gencppNMLMessageFactory()
{
}

NML_FORMAT_PTR stereo_msgs_gencppNMLMessageFactory::FormatPointer()
{
    return stereo_msgs_gencpp_format;
}

int stereo_msgs_gencppNMLMessageFactory::dataType(NMLmsg & msg)
{
    return msg.type;
}

void stereo_msgs_gencppNMLMessageFactory::dataTypes(vector<DataTypeInfo> & ids)
{
    DataTypeInfo info;

    ids.clear();

    info.id(DisparityImage::ID);
    info.name(DisparityImage::DATA_TYPE_FULL_NAME);
    info.hashKey(DisparityImage::DATA_VERSION);
    info.md5Key(DisparityImage::VERSION_MD5);
    info.xmlSource(DisparityImage::XML_SOURCE);
    info.flat(DisparityImage::dataTypeFlat());
    ids.push_back(info);

}

int stereo_msgs_gencppNMLMessageFactory::allocate(rframe::ID_TYPE id, std::shared_ptr<NMLmsg> & msg)
{
    int retval = rframe::Error::SUCCESS;
    bool found = true;

    switch (id)
    { 
        case DisparityImage::ID:
        {
            //DisparityImageNML * newmsg = new DisparityImageNML();
            // allocate new data member, with link to appropriate destroy callback
            // what bind does is create a callback into this specific instance for the deallcoateTransport
            // member.
            std::shared_ptr<NMLmsg> newmsg(new DisparityImageNML(),std::bind(&stereo_msgs_gencppNMLMessageFactory::deallocateTransport,this,std::placeholders::_1));

            if (newmsg.get() == NULL)
            {
                retval = rframe::Error::MEMORY_ALLOC;
            }
            else
            {
                msg.swap(newmsg);
                    /*                    *msg = static_cast<NMLmsg*>(newmsg);

                    if (*msg == NULL)
                    {
                        delete newmsg;
                        retval = rframe::Error::CAST;
                    }
                    */

            }
            break;
        } 
        default:
        {
            found = false;
        }
    }

    if (found == false)
    {
        retval = rframe::Error::PARAM_RANGE;
    }
    else if (msg.get() == NULL)
    {
        retval = rframe::Error::MEMORY_ALLOC;
    }
    else if (msg.get() != NULL)
    {
        retval = rframe::Error::SUCCESS;
    }

    return retval;
}

int stereo_msgs_gencppNMLMessageFactory::allocate(rframe::ID_TYPE id, std::shared_ptr<MessageBase> & msg)
{
    int retval = rframe::Error::SUCCESS;
    bool found = true;

    switch (id)
    { 
        case DisparityImage::ID:
        {
            std::shared_ptr<MessageBase> tempMsg(new Message<DisparityImage>(),std::bind(&stereo_msgs_gencppNMLMessageFactory::deallocateMessage,this,std::placeholders::_1));

            if (tempMsg.get() == NULL)
            {
                retval = rframe::Error::MEMORY_ALLOC;
            }
            else
            {
                msg.swap(tempMsg);
            }
            break;
        } 
        default:
        {
            found = false;
        }
    }

    if (found == false)
    {
        retval = rframe::Error::PARAM_RANGE;
    }
    else if (msg.get() == NULL)
    {
        retval = rframe::Error::MEMORY_ALLOC;
    }
    else if (msg.get() != NULL)
    {
        retval = rframe::Error::SUCCESS;
    }

    return retval;
}

int stereo_msgs_gencppNMLMessageFactory::deallocateMessage(MessageBase * msg)
{
    int retval = Error::SUCCESS;

    delete msg;

    return retval;
}

int stereo_msgs_gencppNMLMessageFactory::deallocateTransport(NMLmsg * msg)
{
    int retval = Error::SUCCESS;

    if (msg != NULL)
    {
        switch (msg->type)
        { 
            case DisparityImage::ID:
            {
                DisparityImageNML * tempmsg = static_cast<DisparityImageNML*>(msg);

                if (tempmsg != NULL)
                {
                    delete tempmsg;
                }
                break;
            } 
            default:
            {
                retval = Error::NOT_FOUND;
                break;
            }
        }
    }

    return retval;
}

int stereo_msgs_gencppNMLMessageFactory::toTransport(MessageBase & src, NMLmsg & dst)
{
    int retval = rframe::Error::SUCCESS;

    if ((unsigned int)dst.type != src.id())
    {
        retval = rframe::Error::PARAM;
    }
    else
    {
        switch (dst.type)
        { 
            case DisparityImage::ID:
            {
                DisparityImageNML & tempDst = static_cast<DisparityImageNML&>(dst);
                Message<DisparityImage > & tempSrc = static_cast<Message<DisparityImage>&>(src);

                if (tempSrc.version() != DisparityImage::DATA_VERSION)
                {
                    LOG_CRIT(__FUNCTION__ << " version mismatch on write of DisparityImage: " << __FILE__ << " expected: " 
                             << DisparityImage::DATA_VERSION << " got: " << tempSrc.version());
                    cout << __FUNCTION__ << " version mismatch on write of DisparityImage: " << __FILE__ << " expected: " 
                         << DisparityImage::DATA_VERSION << " got: " << tempSrc.version() << endl;
                    retval = rframe::Error::MSG_VERSION;
                }
                else
                {

                    // set version
                    tempDst.nmlVersion = tempSrc.version();
                    // set timestamp
                    tempDst.nmlTimestamp = tempSrc.timestamp();
                    // set module id
                    tempDst.nmlModuleId = tempSrc.moduleId();

                    tempDst.nmlPayload = tempSrc.payload();   
                }
                break;
            } 
            default:
            {
                retval = rframe::Error::PARAM;
                break;
            }
        }
    }

    return retval;
}

int stereo_msgs_gencppNMLMessageFactory::fromTransport(NMLmsg & src, MessageBase & dst)
{
    int retval = rframe::Error::SUCCESS;

    if ((unsigned int)src.type != dst.id())
    {
        retval = rframe::Error::PARAM;
    }
    else
    {
        switch (src.type)
        { 
            case DisparityImage::ID:
            {
                DisparityImageNML & tempSrc = static_cast<DisparityImageNML&>(src);
                Message<DisparityImage > & tempDst = static_cast<Message<DisparityImage>&>(dst);

                // check data version BEFORE tryinng to unpack
                if (DisparityImage::DATA_VERSION != tempSrc.nmlVersion)
                {
                    retval = rframe::Error::MSG_VERSION;
                    break; // skip unpacking of payload
                }

                tempDst.moduleId(tempSrc.nmlModuleId);
                tempDst.timestamp(tempSrc.nmlTimestamp);

                tempDst.payload(tempSrc.nmlPayload);
                break;
            } 
            default:
            {
                retval = rframe::Error::PARAM;
            }
        }
    }

    return retval;
}

int stereo_msgs_gencppNMLMessageFactory::constructBuffer(rframe::ID_TYPE id, void * buffer)
{
    int retval = Error::SUCCESS;

    switch (id)
    { 
        case DisparityImage::ID:
        {
            // only need to construct if data type is not flat
            if (DisparityImage::dataTypeFlat() == false)
            {
                FLOG_DEBUG3("constructing DisparityImage at %p\n",buffer);
                DisparityImageNML * p = static_cast<DisparityImageNML*>(buffer);
                // construct the type at pointer p
                new (p) DisparityImageNML();
            }
            else
            {
                FLOG_DEBUG3("skipping constructing DisparityImage at %p,, is flat\n",buffer);
            }
            break;
        } 
        default:
        {
            retval = Error::NOT_FOUND;
        }
    }

    return retval;
}

int stereo_msgs_gencppNMLMessageFactory::destructBuffer(rframe::ID_TYPE id, void * buffer)
{
    int retval = Error::SUCCESS;

    if (buffer == nullptr) return retval;

    switch (id)
    { 
        case DisparityImage::ID:
        {
            // only need to destruct if data type is not flat
            if (DisparityImage::dataTypeFlat() == false)
            {
                FLOG_DEBUG3("destructing DisparityImage at %p\n",buffer);
                DisparityImageNML * p = static_cast<DisparityImageNML*>(buffer);
                p->~DisparityImageNML();
            }
            else
            {
                FLOG_DEBUG3("skipping destruction DisparityImage at %p, is flat\n",buffer);
            }
            break;
        } 
        default:
        {
            retval = Error::NOT_FOUND;
        }
    }

    return retval;
}

void stereo_msgs::nmlupdate(CMS * cms, DisparityImage & inobj)
{
    if (cms != NULL)
    {
        //        rframe::Log::instance()->logFormatted(DEFAULT_LOG_MODULE_ID,DBG,"nmlupdate DisparityImage, old style, cms mode is %d, neutral is %d",cms->mode,cms->neutral_encoding_method);

        nmlupdate(cms,inobj.header);
        nmlupdate(cms,inobj.image);
        cms->update(inobj.f);
        cms->update(inobj.T);
        nmlupdate(cms,inobj.valid_window);
        cms->update(inobj.min_disparity);
        cms->update(inobj.max_disparity);
        cms->update(inobj.delta_d);

    }  
 }

DisparityImageNML::DisparityImageNML() : NMLmsg((NMLTYPE)DisparityImage::ID,sizeof(DisparityImageNML)), nmlVersion(DisparityImage::DATA_VERSION), nmlTimestamp(rframe::timestamp()), nmlModuleId(0), nmlPayload(/*new DisparityImage()*/)
{
};

DisparityImageNML::~DisparityImageNML()
{
};

DisparityImageNML & DisparityImageNML::operator=(const DisparityImageNML & inobj)
{
    if (this != &inobj)
    {
        type = inobj.type;
        size = inobj.size;
        nmlPayload = inobj.nmlPayload;

        nmlVersion = inobj.nmlVersion;
        nmlTimestamp = inobj.nmlTimestamp;
        nmlModuleId = inobj.nmlModuleId;

    }

    return *this;
}

DisparityImageNML & DisparityImageNML::operator=(const DisparityImage & inobj)
{
    if (&nmlPayload != &inobj)
    {
        nmlPayload = inobj;

        type = (NMLTYPE)(inobj.ID);
        size = sizeof(DisparityImage);

        nmlVersion = inobj.DATA_VERSION;
        // nmlTimestamp & module id  set in constructor

    }

    return *this;
}

void DisparityImageNML::update(CMS * cms)
{
#if 1  
    cms->update(nmlVersion);
    cms->update(nmlTimestamp);
    cms->update(nmlModuleId);
    nmlupdate(cms,static_cast<DisparityImage&>(nmlPayload));
#else   // use of boost serialization is deprecated

      cout << "ERROR ERROR ERRROR: DisparityImageNML Using deprecated boost serialization within nml update!" << endl;

#if 0
      left in in case we go back to a shared_ptr<T> for nml payload, need to allocate here if necessary.
      // check to make sure we have a place for the data
      if (nmlPayload.get() == NULL)
      {
          std::shared_ptr<DisparityImage> temp(new DisparityImage());
          nmlPayload.swap(temp);
      }
#endif

      //    rframe::Log::instance()->logFormatted(DEFAULT_LOG_MODULE_ID,DBG,"ERROR: stereo_msgs_gencpp: nml::update called for message %d, which should use boost serialization",(int)type);

    NMLUpdaterHelper updater(cms);

    int count = 0;
    // on encode this next line reserves space, on decode it extracts the data size
    updater.storeDataStart();
    cms->update(count);
    char * buf = updater.encodedData();
    unsigned int len = updater.spaceLeft();

    if (cms->mode == CMS_ENCODE)
    {

        boost::iostreams::basic_array_sink<char> helperSink(buf,len);
        boost::iostreams::stream<boost::iostreams::basic_array_sink<char> > source(helperSink);

        // boost serialize
        {
            //boost::archive::binary_oarchive oa(source,boost::archive::no_header);
            eos::portable_oarchive oa(source); // portable archives require header, but its only a byte.
            oa << nmlVersion << nmlTimestamp << nmlModuleId << nmlPayload;
        }

        int wroteSize = boost::iostreams::seek(source,0,std::ios_base::cur);

        updater.updateEncoded(wroteSize);

        updater.storeCount(wroteSize);
    }
    else
    {
        boost::iostreams::basic_array_source<char> device(buf,len);
        boost::iostreams::stream<boost::iostreams::basic_array_source<char> > source(device);

        // boost serialize
        {
            //boost::archive::binary_iarchive ia(source,boost::archive::no_header);
            eos::portable_iarchive ia(source);
            ia >> nmlVersion;

            if (DisparityImage::DATA_VERSION != nmlVersion)
            {
                LOG_CRIT(__FUNCTION__ << "ERROR: DisparityImage Message version mismatch, expected " << DisparityImage::DATA_VERSION << " but got " << nmlVersion << " stopping read, buffer state is not guaranted!");
                cout << __FUNCTION__ << "ERROR: DisparityImage Message version mismatch, expected " << DisparityImage::DATA_VERSION << " but got " << nmlVersion << " stopping read, buffer state is not guaranteed!" << endl;

            }
            else
            {
                ia >> nmlTimestamp >> nmlModuleId >> nmlPayload;
            }
        }    

    }

#endif
}

int stereo_msgs::stereo_msgs_gencpp_format(NMLTYPE type, void * buffer, CMS* cms)
{
    int retval = 1;
    int retval2 = rframe::Error::SUCCESS;

          //printf("stereo_msgs_gencpp_format: buffer parameters: type: %d, %p, encode: %d\n",(int)type, buffer,cms->mode);

    switch (type)
    { 
        case 0:
        {
            // do nothing, 0 is passed in on buffer creation
            break;
        }
        case DisparityImage::ID:
        {
            int oldPointerCheckDisabled = cms->pointer_check_disabled;
            cms->pointer_check_disabled = 1;

            //  cout << "message is for DisparityImage, id " << DisparityImage::ID << endl;

            if (cms->mode == CMS_DECODE)
            {

                retval2 = NML_stereo_msgs_gencppfactory->constructBuffer(type,buffer);
                if (retval2 != rframe::Error::SUCCESS)
                {
                    rframe::Log::instance()->logFormatted(DEFAULT_LOG_MODULE_ID,CRIT,"stereo_msgs_gencpp_format: failed construction: id: %d, error: %d",(int)type,retval2);
                }
            }
            else
            {

            }

            ((DisparityImageNML*)buffer)->update(cms);

            cms->pointer_check_disabled = oldPointerCheckDisabled;

            break;
        }                   
        default:
        {

            retval = 0;
            break;
        }
    }

          //   printf("format done\n");
    return retval;
}
