// 
//  this notice is just to let you know this file was created by
//  a helper script, you may edit this file.
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:40:35 -0500
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

#include "Listener.h"
#include <common/ModuleVersion.h>

using namespace std;
using namespace rframe;

#define WHEEL_WIDTH 0.555 //meters


extern "C"
{
    /** library access method */
    MessagingClient * AllocateModule(rframe::ModuleVersion & modVersion)
    {
        modVersion.name("Listener");
        int versionMajor = VERSION_MAJOR;
        int versionMinor = VERSION_MINOR;
        int versionPatch = VERSION_PATCH;

        modVersion.major(versionMajor);
        modVersion.minor(versionMinor);
        modVersion.patch(versionPatch);

        return new Listener();
    }
}


Listener::Listener()
{
    // set module base parameters here
    loopPeriod(1.0);
}


Listener::~Listener()
{
}


int Listener::onConfigure(Configuration & config)
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


int Listener::onInitialize()
{
    int retval = Error::SUCCESS;

    MOD_ENTER(INF);

    if ((retval = MessagingClient::onInitialize()) == Error::SUCCESS)
    {
        // register to server/publish data here
    }

    MOD_EXIT(INF);

    return retval;
}


int Listener::onStart()
{
    int retval = Error::SUCCESS;

    MOD_ENTER(INF);

    // perform startup operations here, such as allocating pools

    // start threads/async processing here, stop in stop()

    // register to read/subscribe to data here

    /*ConnectionOptions options;
    options.server(ConnectionOptions::ME);

    // register a callback to receive the data
    // note that this callback style also includes the message envelope for the data
    retval = registerRead<std_msgs::String,true>(options,"/chatter",
               [this](const MessageBase & base, const std::shared_ptr<std_msgs::String const> & msg)
    {
        MOD_INFO("I heard: [" << msg->data << "] from: " << base.commSrc());
    }   
    );*/

	//register to read navdata
	rframe::ConnectionOptions cmdvelReadOptions;
	cmdvelReadOptions.server(ConnectionOptions::ME); 
    if((retval = registerRead<>(cmdvelReadOptions, "/cmd_vel", &Listener::cmdvelCallback,this)) != Error::SUCCESS) 
	{ 
		cout << "failed to open cmdvel read callback " << ERRSTR(retval) << endl; 
		MOD_CRIT("failed to open cmdvel read callback"); 
	}
	else
	{ 
		MOD_INFO("Listener registered for cmdvel reading"); 
	}


    if (retval == Error::SUCCESS)
    {
        retval = MessagingClient::onStart();
    }

    MOD_EXIT(INF);

    return retval;
}


int Listener::onStop()
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


int Listener::onShutdown()
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


int Listener::onOnce()
{
    int retval = Error::SUCCESS;

    // check to see if period elapsed
    if (periodElapsed() == true)
    {
        // perform periodic processing here
        MOD_INFO("Listener exists");
    }

    return retval;
}


void Listener::cmdvelCallback(const std::shared_ptr<geometry_msgs::Twist const> & msg)
{
	//grab desired velocity info
	cmd_vel = *msg;
	MOD_INFO("cmd_vel recieved");
	vx = cmd_vel.linear.x;
	va = cmd_vel.angular.z;

	//figure out how fast our wheels need to go
	vr = vx + va*WHEEL_WIDTH/2;
	vl = vx - va*WHEEL_WIDTH/2;

	//We need to figure out what units the input to the motor command are. 
	//Do we need to give rad/s? Or some sort of other power units?
	//Are the motors speed controlled (I would assume so) or do we need a simple PID controller in here

	//Possibly do more calculations here

	//Send motor commands

}