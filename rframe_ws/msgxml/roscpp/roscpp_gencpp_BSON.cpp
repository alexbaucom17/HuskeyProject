// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:52 -0500
//  From Template/Script: data_templates/BSONSerializationTemplate.cpp
 
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

#include <common/BsonIo.h>
#include <common/Time.h>
#include <common/Log.h>

#include <roscpp/Logger.h>
#include <roscpp/EmptyRequest.h>
#include <roscpp/EmptyResponse.h>
#include <roscpp/Empty.h>
#include <roscpp/GetLoggersRequest.h>
#include <roscpp/GetLoggersResponse.h>
#include <roscpp/GetLoggers.h>
#include <roscpp/SetLoggerLevelRequest.h>
#include <roscpp/SetLoggerLevelResponse.h>
#include <roscpp/SetLoggerLevel.h>

using namespace std;

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const roscpp::Logger & inobj, const char * name)
{
    int retval = Error::SUCCESS;

    BsonObj child;
    BsonObj * doc = &b;
    if (name != nullptr)
    {
        bson_append_document_begin(b,name,strlen(name),child);
        doc = &child;
    }

    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.name,"name");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.level,"level");

    if (name != nullptr)
    {
        bson_append_document_end(b,child);
    }

    return retval;
}

template <> int rframe::bson_io::decode(roscpp::Logger & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of Logger, lookup fields: " << lookupFields << endl;

    if (lookupFields == false)
    {
        rframe::bson_io::BsonIterator * tempIt, child;
        tempIt = &it;

        if (name != nullptr)
        {
            if (bson_iter_next(it) == false) return Error::PARAM;
            if (bson_iter_recurse(it,child) == false) return Error::IO;
            tempIt = &child;
        }

        // decode of member name
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member name" << endl;
            retval = rframe::bson_io::decode(t.name,*tempIt,"name",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member level
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member level" << endl;
            retval = rframe::bson_io::decode(t.level,*tempIt,"level",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

    } // end lookup fields
    else
    {
        rframe::bson_io::BsonIterator it2, storedIter;
        storedIter = it;

        // decode of member name
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member name" << endl;
            it2 = it["name"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.name,it2,"name",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member level
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member level" << endl;
            it2 = it["level"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.level,it2,"level",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        if ((retval == rframe::Error::SUCCESS) && (it.iter().off < storedIter.iter().off)) it = storedIter;
    }

    return retval;
}

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const roscpp::EmptyRequest & inobj, const char * name)
{
    int retval = Error::SUCCESS;

    if (name != nullptr)
    {
        BsonObj child;
        bson_append_document_begin(b,name,strlen(name),child);
        bson_append_document_end(b,child);
    }

    return retval;
}

template <> int rframe::bson_io::decode(roscpp::EmptyRequest & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of EmptyRequest, lookup fields: " << lookupFields << endl;

    return retval;
}

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const roscpp::EmptyResponse & inobj, const char * name)
{
    int retval = Error::SUCCESS;

    if (name != nullptr)
    {
        BsonObj child;
        bson_append_document_begin(b,name,strlen(name),child);
        bson_append_document_end(b,child);
    }

    return retval;
}

template <> int rframe::bson_io::decode(roscpp::EmptyResponse & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of EmptyResponse, lookup fields: " << lookupFields << endl;

    return retval;
}

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const roscpp::Empty & inobj, const char * name)
{
    int retval = Error::SUCCESS;

    BsonObj child;
    BsonObj * doc = &b;
    if (name != nullptr)
    {
        bson_append_document_begin(b,name,strlen(name),child);
        doc = &child;
    }

    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.request,"request");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.response,"response");

    if (name != nullptr)
    {
        bson_append_document_end(b,child);
    }

    return retval;
}

template <> int rframe::bson_io::decode(roscpp::Empty & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of Empty, lookup fields: " << lookupFields << endl;

    if (lookupFields == false)
    {
        rframe::bson_io::BsonIterator * tempIt, child;
        tempIt = &it;

        if (name != nullptr)
        {
            if (bson_iter_next(it) == false) return Error::PARAM;
            if (bson_iter_recurse(it,child) == false) return Error::IO;
            tempIt = &child;
        }

        // decode of member request
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member request" << endl;
            retval = rframe::bson_io::decode(t.request,*tempIt,"request",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member response
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member response" << endl;
            retval = rframe::bson_io::decode(t.response,*tempIt,"response",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

    } // end lookup fields
    else
    {
        rframe::bson_io::BsonIterator it2, storedIter;
        storedIter = it;

        // decode of member request
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member request" << endl;
            it2 = it["request"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.request,it2,"request",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member response
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member response" << endl;
            it2 = it["response"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.response,it2,"response",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        if ((retval == rframe::Error::SUCCESS) && (it.iter().off < storedIter.iter().off)) it = storedIter;
    }

    return retval;
}

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const roscpp::GetLoggersRequest & inobj, const char * name)
{
    int retval = Error::SUCCESS;

    if (name != nullptr)
    {
        BsonObj child;
        bson_append_document_begin(b,name,strlen(name),child);
        bson_append_document_end(b,child);
    }

    return retval;
}

template <> int rframe::bson_io::decode(roscpp::GetLoggersRequest & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of GetLoggersRequest, lookup fields: " << lookupFields << endl;

    return retval;
}

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const roscpp::GetLoggersResponse & inobj, const char * name)
{
    int retval = Error::SUCCESS;

    BsonObj child;
    BsonObj * doc = &b;
    if (name != nullptr)
    {
        bson_append_document_begin(b,name,strlen(name),child);
        doc = &child;
    }

    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.loggers,"loggers");

    if (name != nullptr)
    {
        bson_append_document_end(b,child);
    }

    return retval;
}

template <> int rframe::bson_io::decode(roscpp::GetLoggersResponse & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of GetLoggersResponse, lookup fields: " << lookupFields << endl;

    if (lookupFields == false)
    {
        rframe::bson_io::BsonIterator * tempIt, child;
        tempIt = &it;

        if (name != nullptr)
        {
            if (bson_iter_next(it) == false) return Error::PARAM;
            if (bson_iter_recurse(it,child) == false) return Error::IO;
            tempIt = &child;
        }

        // decode of member loggers
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member loggers" << endl;
            retval = rframe::bson_io::decode(t.loggers,*tempIt,"loggers",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

    } // end lookup fields
    else
    {
        rframe::bson_io::BsonIterator it2, storedIter;
        storedIter = it;

        // decode of member loggers
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member loggers" << endl;
            it2 = it["loggers"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.loggers,it2,"loggers",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        if ((retval == rframe::Error::SUCCESS) && (it.iter().off < storedIter.iter().off)) it = storedIter;
    }

    return retval;
}

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const roscpp::GetLoggers & inobj, const char * name)
{
    int retval = Error::SUCCESS;

    BsonObj child;
    BsonObj * doc = &b;
    if (name != nullptr)
    {
        bson_append_document_begin(b,name,strlen(name),child);
        doc = &child;
    }

    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.request,"request");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.response,"response");

    if (name != nullptr)
    {
        bson_append_document_end(b,child);
    }

    return retval;
}

template <> int rframe::bson_io::decode(roscpp::GetLoggers & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of GetLoggers, lookup fields: " << lookupFields << endl;

    if (lookupFields == false)
    {
        rframe::bson_io::BsonIterator * tempIt, child;
        tempIt = &it;

        if (name != nullptr)
        {
            if (bson_iter_next(it) == false) return Error::PARAM;
            if (bson_iter_recurse(it,child) == false) return Error::IO;
            tempIt = &child;
        }

        // decode of member request
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member request" << endl;
            retval = rframe::bson_io::decode(t.request,*tempIt,"request",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member response
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member response" << endl;
            retval = rframe::bson_io::decode(t.response,*tempIt,"response",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

    } // end lookup fields
    else
    {
        rframe::bson_io::BsonIterator it2, storedIter;
        storedIter = it;

        // decode of member request
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member request" << endl;
            it2 = it["request"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.request,it2,"request",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member response
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member response" << endl;
            it2 = it["response"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.response,it2,"response",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        if ((retval == rframe::Error::SUCCESS) && (it.iter().off < storedIter.iter().off)) it = storedIter;
    }

    return retval;
}

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const roscpp::SetLoggerLevelRequest & inobj, const char * name)
{
    int retval = Error::SUCCESS;

    BsonObj child;
    BsonObj * doc = &b;
    if (name != nullptr)
    {
        bson_append_document_begin(b,name,strlen(name),child);
        doc = &child;
    }

    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.logger,"logger");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.level,"level");

    if (name != nullptr)
    {
        bson_append_document_end(b,child);
    }

    return retval;
}

template <> int rframe::bson_io::decode(roscpp::SetLoggerLevelRequest & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of SetLoggerLevelRequest, lookup fields: " << lookupFields << endl;

    if (lookupFields == false)
    {
        rframe::bson_io::BsonIterator * tempIt, child;
        tempIt = &it;

        if (name != nullptr)
        {
            if (bson_iter_next(it) == false) return Error::PARAM;
            if (bson_iter_recurse(it,child) == false) return Error::IO;
            tempIt = &child;
        }

        // decode of member logger
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member logger" << endl;
            retval = rframe::bson_io::decode(t.logger,*tempIt,"logger",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member level
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member level" << endl;
            retval = rframe::bson_io::decode(t.level,*tempIt,"level",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

    } // end lookup fields
    else
    {
        rframe::bson_io::BsonIterator it2, storedIter;
        storedIter = it;

        // decode of member logger
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member logger" << endl;
            it2 = it["logger"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.logger,it2,"logger",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member level
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member level" << endl;
            it2 = it["level"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.level,it2,"level",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        if ((retval == rframe::Error::SUCCESS) && (it.iter().off < storedIter.iter().off)) it = storedIter;
    }

    return retval;
}

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const roscpp::SetLoggerLevelResponse & inobj, const char * name)
{
    int retval = Error::SUCCESS;

    if (name != nullptr)
    {
        BsonObj child;
        bson_append_document_begin(b,name,strlen(name),child);
        bson_append_document_end(b,child);
    }

    return retval;
}

template <> int rframe::bson_io::decode(roscpp::SetLoggerLevelResponse & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of SetLoggerLevelResponse, lookup fields: " << lookupFields << endl;

    return retval;
}

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const roscpp::SetLoggerLevel & inobj, const char * name)
{
    int retval = Error::SUCCESS;

    BsonObj child;
    BsonObj * doc = &b;
    if (name != nullptr)
    {
        bson_append_document_begin(b,name,strlen(name),child);
        doc = &child;
    }

    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.request,"request");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.response,"response");

    if (name != nullptr)
    {
        bson_append_document_end(b,child);
    }

    return retval;
}

template <> int rframe::bson_io::decode(roscpp::SetLoggerLevel & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of SetLoggerLevel, lookup fields: " << lookupFields << endl;

    if (lookupFields == false)
    {
        rframe::bson_io::BsonIterator * tempIt, child;
        tempIt = &it;

        if (name != nullptr)
        {
            if (bson_iter_next(it) == false) return Error::PARAM;
            if (bson_iter_recurse(it,child) == false) return Error::IO;
            tempIt = &child;
        }

        // decode of member request
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member request" << endl;
            retval = rframe::bson_io::decode(t.request,*tempIt,"request",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member response
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member response" << endl;
            retval = rframe::bson_io::decode(t.response,*tempIt,"response",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

    } // end lookup fields
    else
    {
        rframe::bson_io::BsonIterator it2, storedIter;
        storedIter = it;

        // decode of member request
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member request" << endl;
            it2 = it["request"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.request,it2,"request",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member response
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member response" << endl;
            it2 = it["response"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.response,it2,"response",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        if ((retval == rframe::Error::SUCCESS) && (it.iter().off < storedIter.iter().off)) it = storedIter;
    }

    return retval;
}
