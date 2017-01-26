// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2017-01-26 12:56:54 -0500
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

#include <navfn/MakeNavPlanRequest.h>
#include <navfn/MakeNavPlanResponse.h>
#include <navfn/MakeNavPlan.h>
#include <navfn/SetCostmapRequest.h>
#include <navfn/SetCostmapResponse.h>
#include <navfn/SetCostmap.h>

using namespace std;

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const navfn::MakeNavPlanRequest & inobj, const char * name)
{
    int retval = Error::SUCCESS;

    BsonObj child;
    BsonObj * doc = &b;
    if (name != nullptr)
    {
        bson_append_document_begin(b,name,strlen(name),child);
        doc = &child;
    }

    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.start,"start");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.goal,"goal");

    if (name != nullptr)
    {
        bson_append_document_end(b,child);
    }

    return retval;
}

template <> int rframe::bson_io::decode(navfn::MakeNavPlanRequest & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of MakeNavPlanRequest, lookup fields: " << lookupFields << endl;

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

        // decode of member start
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member start" << endl;
            retval = rframe::bson_io::decode(t.start,*tempIt,"start",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member goal
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member goal" << endl;
            retval = rframe::bson_io::decode(t.goal,*tempIt,"goal",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

    } // end lookup fields
    else
    {
        rframe::bson_io::BsonIterator it2, storedIter;
        storedIter = it;

        // decode of member start
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member start" << endl;
            it2 = it["start"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.start,it2,"start",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member goal
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member goal" << endl;
            it2 = it["goal"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.goal,it2,"goal",lookupFields);
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

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const navfn::MakeNavPlanResponse & inobj, const char * name)
{
    int retval = Error::SUCCESS;

    BsonObj child;
    BsonObj * doc = &b;
    if (name != nullptr)
    {
        bson_append_document_begin(b,name,strlen(name),child);
        doc = &child;
    }

    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.plan_found,"plan_found");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.error_message,"error_message");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.path,"path");

    if (name != nullptr)
    {
        bson_append_document_end(b,child);
    }

    return retval;
}

template <> int rframe::bson_io::decode(navfn::MakeNavPlanResponse & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of MakeNavPlanResponse, lookup fields: " << lookupFields << endl;

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

        // decode of member plan_found
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member plan_found" << endl;
            retval = rframe::bson_io::decode(t.plan_found,*tempIt,"plan_found",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member error_message
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member error_message" << endl;
            retval = rframe::bson_io::decode(t.error_message,*tempIt,"error_message",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member path
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member path" << endl;
            retval = rframe::bson_io::decode(t.path,*tempIt,"path",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

    } // end lookup fields
    else
    {
        rframe::bson_io::BsonIterator it2, storedIter;
        storedIter = it;

        // decode of member plan_found
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member plan_found" << endl;
            it2 = it["plan_found"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.plan_found,it2,"plan_found",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member error_message
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member error_message" << endl;
            it2 = it["error_message"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.error_message,it2,"error_message",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member path
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member path" << endl;
            it2 = it["path"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.path,it2,"path",lookupFields);
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

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const navfn::MakeNavPlan & inobj, const char * name)
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

template <> int rframe::bson_io::decode(navfn::MakeNavPlan & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of MakeNavPlan, lookup fields: " << lookupFields << endl;

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

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const navfn::SetCostmapRequest & inobj, const char * name)
{
    int retval = Error::SUCCESS;

    BsonObj child;
    BsonObj * doc = &b;
    if (name != nullptr)
    {
        bson_append_document_begin(b,name,strlen(name),child);
        doc = &child;
    }

    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.costs,"costs");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.height,"height");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.width,"width");

    if (name != nullptr)
    {
        bson_append_document_end(b,child);
    }

    return retval;
}

template <> int rframe::bson_io::decode(navfn::SetCostmapRequest & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of SetCostmapRequest, lookup fields: " << lookupFields << endl;

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

        // decode of member costs
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member costs" << endl;
            retval = rframe::bson_io::decode(t.costs,*tempIt,"costs",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member height
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member height" << endl;
            retval = rframe::bson_io::decode(t.height,*tempIt,"height",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member width
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member width" << endl;
            retval = rframe::bson_io::decode(t.width,*tempIt,"width",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

    } // end lookup fields
    else
    {
        rframe::bson_io::BsonIterator it2, storedIter;
        storedIter = it;

        // decode of member costs
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member costs" << endl;
            it2 = it["costs"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.costs,it2,"costs",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member height
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member height" << endl;
            it2 = it["height"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.height,it2,"height",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member width
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member width" << endl;
            it2 = it["width"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.width,it2,"width",lookupFields);
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

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const navfn::SetCostmapResponse & inobj, const char * name)
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

template <> int rframe::bson_io::decode(navfn::SetCostmapResponse & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of SetCostmapResponse, lookup fields: " << lookupFields << endl;

    return retval;
}

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const navfn::SetCostmap & inobj, const char * name)
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

template <> int rframe::bson_io::decode(navfn::SetCostmap & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of SetCostmap, lookup fields: " << lookupFields << endl;

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

