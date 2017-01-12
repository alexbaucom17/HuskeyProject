// 
//  this notice is just to let you know this file was created by
//  a helper script, you may edit this file.
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:40:30 -0500
//  From Template/Script: module_templates/ModuleTemplate.cpp.rb
 
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

#include "Talker.h"
#include <common/ModuleVersion.h>
#include <std_msgs/std_msgs_gencpp_Library.h>
#include <rctamagic/rctamagic_Library.h>

using namespace std;
using namespace rframe;
using namespace rctamagic;


extern "C"
{
    /** library access method */
    MessagingClient * AllocateModule(rframe::ModuleVersion & modVersion)
    {
        modVersion.name("Talker");
        int versionMajor = VERSION_MAJOR;
        int versionMinor = VERSION_MINOR;
        int versionPatch = VERSION_PATCH;

        modVersion.major(versionMajor);
        modVersion.minor(versionMinor);
        modVersion.patch(versionPatch);

        return new Talker();
    }
}


Talker::Talker()
{
    // set module base parameters here
    loopPeriod(1.0);
    counter = 0;
}


Talker::~Talker()
{
}


int Talker::onConfigure(Configuration & config)
{
    int retval = Error::SUCCESS;

    if ((retval = MessagingClient::onConfigure(config)) == Error::SUCCESS)
    {
        if (state() == Module::UNINITIALIZED)
        {
	        // load startup only config options here
        }

		// load reloadable config options here
    }

    return retval;
}


int Talker::onInitialize()
{
    int retval = Error::SUCCESS;

    MOD_ENTER(INF);

    if ((retval = MessagingClient::onInitialize()) == Error::SUCCESS)
    {
        // register to server/publish data here
	ConnectionOptions options;
        options.server(ConnectionOptions::ME);
        MOD_DEBUG("Initiallized");
        /*if ((retval = registerWrite<std_msgs::String>(options,"/chatter")) != Error::SUCCESS)
        {
            MOD_CRIT("failed to open chatter");
        }*/
        if ((retval = registerWrite<std_msgs::Int64>(options,"/number")) != Error::SUCCESS)
        {
            MOD_CRIT("failed to open number");
        }


		//registering to read Hokuyo data
		//readoptions initialized in Talker.h
		hokReadOptions.server(ConnectionOptions::NOTME); 
		hokReadOptions.queueStyle(ConnectionOptions::LATEST); 
		if((retval = registerRead<rctamagic::HOKDATA>(hokReadOptions, rctamagic::HOKDATA_NAME)) != Error::SUCCESS) { 
		
		cout << "failed to open hokdata reader " << ERRSTR(retval) << endl; 	
		MOD_CRIT("failed to open hokdata reader"); 
 
		} else { 
			MOD_INFO("Talker registered for hokdata reading"); 
		}



    }

    MOD_EXIT(INF);

    return retval;
}


int Talker::onStart()
{
    int retval = Error::SUCCESS;

    MOD_ENTER(INF);

    // perform startup operations here, such as allocating pools

    // start threads/async processing here, stop in stop()

    // register to read/subscribe to data here

    if (retval == Error::SUCCESS)
    {
        retval = MessagingClient::onStart();
    }

    MOD_EXIT(INF);

    return retval;
}


int Talker::onStop()
{
    int retval = Error::SUCCESS;

    MOD_ENTER(INF);

    // perform module stop here

    if (retval == Error::SUCCESS)
    {
        retval = MessagingClient::onStop();
    }

    MOD_EXIT(INF);

    return retval;
}


int Talker::onShutdown()
{
    int retval = Error::SUCCESS;

    MOD_ENTER(INF);

    // perform module shutdown here


    if (retval == Error::SUCCESS)
    {
        retval = MessagingClient::onShutdown();
    }

    MOD_EXIT(INF);

    return retval;
}


int Talker::onOnce()
{
    int retval = Error::SUCCESS;

    // check to see if period elapsed
    if (periodElapsed() == true)
    {
        // perform periodic processing here
        std_msgs::Int64 msg;
        msg.data = counter++;

        MOD_INFO("Number: " << msg.data);

        write(msg);


		//Get LIDAR data
		std::shared_ptr<MessageBase> hokdataMsg; 
		int hokdata_retval = Error::SUCCESS; 

		if((hokdata_retval = read(hokReadOptions, hokdataMsg)) != Error::SUCCESS) 
		{ 
			if(hokdata_retval == Error::NO_DATA_READY) 
			{ 
				cout << "no hok data ready" << endl; 
			} 
			else 
			{ 
				cout << "failed to read hokdata buffer" << endl; 
			}
		} 
		else 
		{ 
			Message<rctamagic::HOKDATA> * hokData; 
			hokData = static_cast<Message<rctamagic::HOKDATA>*>(hokdataMsg.get()); 

			rctamagic::HOKDATA &hokdataRef = hokData->payload(); 
		}


    }

    return retval;
}
