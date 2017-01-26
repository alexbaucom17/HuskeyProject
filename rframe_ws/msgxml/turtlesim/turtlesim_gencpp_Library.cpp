// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:09 -0500
//  From Template/Script: data_templates/DataLibraryTemplate.cpp
 
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

#include "turtlesim_gencpp_Library.h"
#include <common/Log.h>
#include <common/TypeRegistry.h>
#include <messaging/Message.h>

#include <turtlesim/Color.h>
#include <turtlesim/Pose.h>
#include <turtlesim/KillRequest.h>
#include <turtlesim/KillResponse.h>
#include <turtlesim/Kill.h>
#include <turtlesim/SetPenRequest.h>
#include <turtlesim/SetPenResponse.h>
#include <turtlesim/SetPen.h>
#include <turtlesim/SpawnRequest.h>
#include <turtlesim/SpawnResponse.h>
#include <turtlesim/Spawn.h>
#include <turtlesim/TeleportAbsoluteRequest.h>
#include <turtlesim/TeleportAbsoluteResponse.h>
#include <turtlesim/TeleportAbsolute.h>
#include <turtlesim/TeleportRelativeRequest.h>
#include <turtlesim/TeleportRelativeResponse.h>
#include <turtlesim/TeleportRelative.h>

extern "C"
{
    /** library access method */
    int rframeRegisterDataLibrary()
    {
        return turtlesim::registerLibrary();
    };
}

namespace turtlesim
{

    static void deallocateMessage(MessageBase * msg)
    {
        delete msg;
    }

    static int allocateMessage(rframe::ID_TYPE id, std::shared_ptr<MessageBase> & msg)
    {
        int retval = rframe::Error::SUCCESS;
        bool found = true;
        switch (id)
        { 
            case Color::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<Color>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case Pose::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<Pose>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case KillRequest::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<KillRequest>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case KillResponse::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<KillResponse>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case Kill::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<Kill>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case SetPenRequest::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<SetPenRequest>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case SetPenResponse::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<SetPenResponse>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case SetPen::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<SetPen>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case SpawnRequest::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<SpawnRequest>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case SpawnResponse::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<SpawnResponse>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case Spawn::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<Spawn>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case TeleportAbsoluteRequest::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<TeleportAbsoluteRequest>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case TeleportAbsoluteResponse::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<TeleportAbsoluteResponse>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case TeleportAbsolute::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<TeleportAbsolute>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case TeleportRelativeRequest::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<TeleportRelativeRequest>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case TeleportRelativeResponse::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<TeleportRelativeResponse>(),std::bind(deallocateMessage,std::placeholders::_1));
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
            case TeleportRelative::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<TeleportRelative>(),std::bind(deallocateMessage,std::placeholders::_1));
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

    /** registry this data set with the system */
    //int register_turtlesim_gencpp()
    int registerLibrary()
    {
        int retval = rframe::Error::SUCCESS;
        static bool registered = false;
        rframe::TypeRegistry & reg = rframe::TypeRegistry::instance();

        LOG_INFO("registering data for library: turtlesim_gencpp");

        if (registered == false)
        {
            registered = true;

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::Color::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtlesim::Color>(
                    // boost::lambda::new_ptr<turtlesim::Color>(),
                    [](){ return new turtlesim::Color(); },
                                std::bind(allocateMessage,turtlesim::Color::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: Color");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::Color::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtlesim::Color::DATA_TYPE_NAME,turtlesim::Color::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: Color");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::Pose::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtlesim::Pose>(
                    // boost::lambda::new_ptr<turtlesim::Pose>(),
                    [](){ return new turtlesim::Pose(); },
                                std::bind(allocateMessage,turtlesim::Pose::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: Pose");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::Pose::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtlesim::Pose::DATA_TYPE_NAME,turtlesim::Pose::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: Pose");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::KillRequest::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtlesim::KillRequest>(
                    // boost::lambda::new_ptr<turtlesim::KillRequest>(),
                    [](){ return new turtlesim::KillRequest(); },
                                std::bind(allocateMessage,turtlesim::KillRequest::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: KillRequest");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::KillRequest::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtlesim::KillRequest::DATA_TYPE_NAME,turtlesim::KillRequest::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: KillRequest");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::KillResponse::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtlesim::KillResponse>(
                    // boost::lambda::new_ptr<turtlesim::KillResponse>(),
                    [](){ return new turtlesim::KillResponse(); },
                                std::bind(allocateMessage,turtlesim::KillResponse::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: KillResponse");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::KillResponse::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtlesim::KillResponse::DATA_TYPE_NAME,turtlesim::KillResponse::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: KillResponse");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::Kill::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtlesim::Kill>(
                    // boost::lambda::new_ptr<turtlesim::Kill>(),
                    [](){ return new turtlesim::Kill(); },
                                std::bind(allocateMessage,turtlesim::Kill::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: Kill");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::Kill::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtlesim::Kill::DATA_TYPE_NAME,turtlesim::Kill::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: Kill");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::SetPenRequest::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtlesim::SetPenRequest>(
                    // boost::lambda::new_ptr<turtlesim::SetPenRequest>(),
                    [](){ return new turtlesim::SetPenRequest(); },
                                std::bind(allocateMessage,turtlesim::SetPenRequest::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: SetPenRequest");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::SetPenRequest::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtlesim::SetPenRequest::DATA_TYPE_NAME,turtlesim::SetPenRequest::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: SetPenRequest");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::SetPenResponse::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtlesim::SetPenResponse>(
                    // boost::lambda::new_ptr<turtlesim::SetPenResponse>(),
                    [](){ return new turtlesim::SetPenResponse(); },
                                std::bind(allocateMessage,turtlesim::SetPenResponse::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: SetPenResponse");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::SetPenResponse::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtlesim::SetPenResponse::DATA_TYPE_NAME,turtlesim::SetPenResponse::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: SetPenResponse");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::SetPen::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtlesim::SetPen>(
                    // boost::lambda::new_ptr<turtlesim::SetPen>(),
                    [](){ return new turtlesim::SetPen(); },
                                std::bind(allocateMessage,turtlesim::SetPen::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: SetPen");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::SetPen::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtlesim::SetPen::DATA_TYPE_NAME,turtlesim::SetPen::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: SetPen");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::SpawnRequest::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtlesim::SpawnRequest>(
                    // boost::lambda::new_ptr<turtlesim::SpawnRequest>(),
                    [](){ return new turtlesim::SpawnRequest(); },
                                std::bind(allocateMessage,turtlesim::SpawnRequest::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: SpawnRequest");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::SpawnRequest::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtlesim::SpawnRequest::DATA_TYPE_NAME,turtlesim::SpawnRequest::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: SpawnRequest");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::SpawnResponse::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtlesim::SpawnResponse>(
                    // boost::lambda::new_ptr<turtlesim::SpawnResponse>(),
                    [](){ return new turtlesim::SpawnResponse(); },
                                std::bind(allocateMessage,turtlesim::SpawnResponse::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: SpawnResponse");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::SpawnResponse::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtlesim::SpawnResponse::DATA_TYPE_NAME,turtlesim::SpawnResponse::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: SpawnResponse");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::Spawn::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtlesim::Spawn>(
                    // boost::lambda::new_ptr<turtlesim::Spawn>(),
                    [](){ return new turtlesim::Spawn(); },
                                std::bind(allocateMessage,turtlesim::Spawn::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: Spawn");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::Spawn::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtlesim::Spawn::DATA_TYPE_NAME,turtlesim::Spawn::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: Spawn");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::TeleportAbsoluteRequest::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtlesim::TeleportAbsoluteRequest>(
                    // boost::lambda::new_ptr<turtlesim::TeleportAbsoluteRequest>(),
                    [](){ return new turtlesim::TeleportAbsoluteRequest(); },
                                std::bind(allocateMessage,turtlesim::TeleportAbsoluteRequest::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: TeleportAbsoluteRequest");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::TeleportAbsoluteRequest::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtlesim::TeleportAbsoluteRequest::DATA_TYPE_NAME,turtlesim::TeleportAbsoluteRequest::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: TeleportAbsoluteRequest");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::TeleportAbsoluteResponse::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtlesim::TeleportAbsoluteResponse>(
                    // boost::lambda::new_ptr<turtlesim::TeleportAbsoluteResponse>(),
                    [](){ return new turtlesim::TeleportAbsoluteResponse(); },
                                std::bind(allocateMessage,turtlesim::TeleportAbsoluteResponse::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: TeleportAbsoluteResponse");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::TeleportAbsoluteResponse::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtlesim::TeleportAbsoluteResponse::DATA_TYPE_NAME,turtlesim::TeleportAbsoluteResponse::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: TeleportAbsoluteResponse");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::TeleportAbsolute::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtlesim::TeleportAbsolute>(
                    // boost::lambda::new_ptr<turtlesim::TeleportAbsolute>(),
                    [](){ return new turtlesim::TeleportAbsolute(); },
                                std::bind(allocateMessage,turtlesim::TeleportAbsolute::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: TeleportAbsolute");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::TeleportAbsolute::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtlesim::TeleportAbsolute::DATA_TYPE_NAME,turtlesim::TeleportAbsolute::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: TeleportAbsolute");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::TeleportRelativeRequest::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtlesim::TeleportRelativeRequest>(
                    // boost::lambda::new_ptr<turtlesim::TeleportRelativeRequest>(),
                    [](){ return new turtlesim::TeleportRelativeRequest(); },
                                std::bind(allocateMessage,turtlesim::TeleportRelativeRequest::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: TeleportRelativeRequest");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::TeleportRelativeRequest::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtlesim::TeleportRelativeRequest::DATA_TYPE_NAME,turtlesim::TeleportRelativeRequest::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: TeleportRelativeRequest");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::TeleportRelativeResponse::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtlesim::TeleportRelativeResponse>(
                    // boost::lambda::new_ptr<turtlesim::TeleportRelativeResponse>(),
                    [](){ return new turtlesim::TeleportRelativeResponse(); },
                                std::bind(allocateMessage,turtlesim::TeleportRelativeResponse::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: TeleportRelativeResponse");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::TeleportRelativeResponse::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtlesim::TeleportRelativeResponse::DATA_TYPE_NAME,turtlesim::TeleportRelativeResponse::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: TeleportRelativeResponse");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::TeleportRelative::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<turtlesim::TeleportRelative>(
                    // boost::lambda::new_ptr<turtlesim::TeleportRelative>(),
                    [](){ return new turtlesim::TeleportRelative(); },
                                std::bind(allocateMessage,turtlesim::TeleportRelative::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: TeleportRelative");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = turtlesim::TeleportRelative::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(turtlesim::TeleportRelative::DATA_TYPE_NAME,turtlesim::TeleportRelative::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: TeleportRelative");
            }

        }

        return retval;
    };

    std::string xmlSource()
    {
        return "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\
<!--\
 \
  AUTOGENERATED FILE:   do not edit\
\
  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:01 -0500\
  From Template/Script: rosToXML.rb\
 \
\
-->\
<classes library_name=\"turtlesim_gencpp\" namespace=\"turtlesim\">\
\
<class name=\"Color\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"353891e354491c51aabe32df673fb446\" rosDesc=\"uint8 r\\nuint8 g\\nuint8 b\\n\" comment=\"\">\
  <field name=\"r\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
  <field name=\"g\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
  <field name=\"b\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
</class>\
\
<class name=\"Pose\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"863b248d5016ca62ea2e895ae5265cf9\" rosDesc=\"float32 x\\nfloat32 y\\nfloat32 theta\\n\\nfloat32 linear_velocity\\n\" comment=\"\">\
  <field name=\"x\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <field name=\"y\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <field name=\"theta\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <field name=\"linear_velocity\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <field name=\"angular_velocity\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
</class>\
\
<class name=\"KillRequest\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
  <field name=\"name\" type=\"string\" sourceType=\"string\" comment=\"no comment provided\"/>\
</class>\
\
<class name=\"KillResponse\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
</class>\
\
<class name=\"Kill\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
  <definition name=\"Request\" type=\"KillRequest\"/>\
  <definition name=\"Response\" type=\"KillResponse\"/>\
  <field name=\"request\" type=\"Request\" comment=\"request data type\"/>\
  <field name=\"response\" type=\"Response\" comment=\"response data type\"/>\
</class>\
\
<class name=\"SetPenRequest\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
  <field name=\"r\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
  <field name=\"g\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
  <field name=\"b\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
  <field name=\"width\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
  <field name=\"off\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"no comment provided\"/>\
</class>\
\
<class name=\"SetPenResponse\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
</class>\
\
<class name=\"SetPen\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
  <definition name=\"Request\" type=\"SetPenRequest\"/>\
  <definition name=\"Response\" type=\"SetPenResponse\"/>\
  <field name=\"request\" type=\"Request\" comment=\"request data type\"/>\
  <field name=\"response\" type=\"Response\" comment=\"response data type\"/>\
</class>\
\
<class name=\"SpawnRequest\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
  <field name=\"x\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <field name=\"y\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <field name=\"theta\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <field name=\"name\" type=\"string\" sourceType=\"string\" comment=\"no comment provided\"/>\
</class>\
\
<class name=\"SpawnResponse\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
  <field name=\"name\" type=\"string\" sourceType=\"string\" comment=\"\"/>\
</class>\
\
<class name=\"Spawn\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
  <definition name=\"Request\" type=\"SpawnRequest\"/>\
  <definition name=\"Response\" type=\"SpawnResponse\"/>\
  <field name=\"request\" type=\"Request\" comment=\"request data type\"/>\
  <field name=\"response\" type=\"Response\" comment=\"response data type\"/>\
</class>\
\
<class name=\"TeleportAbsoluteRequest\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
  <field name=\"x\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <field name=\"y\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <field name=\"theta\" type=\"float\" sourceType=\"float32\" comment=\"no comment provided\"/>\
</class>\
\
<class name=\"TeleportAbsoluteResponse\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
</class>\
\
<class name=\"TeleportAbsolute\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
  <definition name=\"Request\" type=\"TeleportAbsoluteRequest\"/>\
  <definition name=\"Response\" type=\"TeleportAbsoluteResponse\"/>\
  <field name=\"request\" type=\"Request\" comment=\"request data type\"/>\
  <field name=\"response\" type=\"Response\" comment=\"response data type\"/>\
</class>\
\
<class name=\"TeleportRelativeRequest\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
  <field name=\"linear\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <field name=\"angular\" type=\"float\" sourceType=\"float32\" comment=\"no comment provided\"/>\
</class>\
\
<class name=\"TeleportRelativeResponse\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
</class>\
\
<class name=\"TeleportRelative\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\">\
  <definition name=\"Request\" type=\"TeleportRelativeRequest\"/>\
  <definition name=\"Response\" type=\"TeleportRelativeResponse\"/>\
  <field name=\"request\" type=\"Request\" comment=\"request data type\"/>\
  <field name=\"response\" type=\"Response\" comment=\"response data type\"/>\
</class>\
\
<dependency name=\"std_msgs_gencpp\"/>\
<dependency name=\"std_srvs_gencpp\"/>\
\
</classes>\
";
    }

}; // end namespace turtlesim

