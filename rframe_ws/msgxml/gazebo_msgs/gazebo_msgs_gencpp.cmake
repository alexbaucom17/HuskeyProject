# 
#  AUTOGENERATED FILE:   do not edit
#
#  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:05 -0500
#  From Template/Script: data_templates/IncludeTemplate.cmake
 
include_directories(BEFORE ${CMAKE_CURRENT_SOURCE_DIR})

# define lists of source files 
set(GAZEBO_MSGS_GENCPP_GEN_H 
  ContactState.h 
  ContactsState.h 
  LinkState.h 
  LinkStates.h 
  ModelState.h 
  ModelStates.h 
  ODEJointProperties.h 
  ODEPhysics.h 
  WorldState.h 
  ApplyBodyWrenchRequest.h 
  ApplyBodyWrenchResponse.h 
  ApplyBodyWrench.h 
  ApplyJointEffortRequest.h 
  ApplyJointEffortResponse.h 
  ApplyJointEffort.h 
  BodyRequestRequest.h 
  BodyRequestResponse.h 
  BodyRequest.h 
  DeleteModelRequest.h 
  DeleteModelResponse.h 
  DeleteModel.h 
  GetJointPropertiesRequest.h 
  GetJointPropertiesResponse.h 
  GetJointProperties.h 
  GetLinkPropertiesRequest.h 
  GetLinkPropertiesResponse.h 
  GetLinkProperties.h 
  GetLinkStateRequest.h 
  GetLinkStateResponse.h 
  GetLinkState.h 
  GetModelPropertiesRequest.h 
  GetModelPropertiesResponse.h 
  GetModelProperties.h 
  GetModelStateRequest.h 
  GetModelStateResponse.h 
  GetModelState.h 
  GetPhysicsPropertiesRequest.h 
  GetPhysicsPropertiesResponse.h 
  GetPhysicsProperties.h 
  GetWorldPropertiesRequest.h 
  GetWorldPropertiesResponse.h 
  GetWorldProperties.h 
  JointRequestRequest.h 
  JointRequestResponse.h 
  JointRequest.h 
  SetJointPropertiesRequest.h 
  SetJointPropertiesResponse.h 
  SetJointProperties.h 
  SetJointTrajectoryRequest.h 
  SetJointTrajectoryResponse.h 
  SetJointTrajectory.h 
  SetLinkPropertiesRequest.h 
  SetLinkPropertiesResponse.h 
  SetLinkProperties.h 
  SetLinkStateRequest.h 
  SetLinkStateResponse.h 
  SetLinkState.h 
  SetModelConfigurationRequest.h 
  SetModelConfigurationResponse.h 
  SetModelConfiguration.h 
  SetModelStateRequest.h 
  SetModelStateResponse.h 
  SetModelState.h 
  SetPhysicsPropertiesRequest.h 
  SetPhysicsPropertiesResponse.h 
  SetPhysicsProperties.h 
  SpawnModelRequest.h 
  SpawnModelResponse.h 
  SpawnModel.h 
  gazebo_msgs_gencpp_Library.h 
  )

set(GAZEBO_MSGS_GENCPP_GEN_CPP 
  ContactState.cpp
  ContactsState.cpp
  LinkState.cpp
  LinkStates.cpp
  ModelState.cpp
  ModelStates.cpp
  ODEJointProperties.cpp
  ODEPhysics.cpp
  WorldState.cpp
  ApplyBodyWrenchRequest.cpp
  ApplyBodyWrenchResponse.cpp
  ApplyBodyWrench.cpp
  ApplyJointEffortRequest.cpp
  ApplyJointEffortResponse.cpp
  ApplyJointEffort.cpp
  BodyRequestRequest.cpp
  BodyRequestResponse.cpp
  BodyRequest.cpp
  DeleteModelRequest.cpp
  DeleteModelResponse.cpp
  DeleteModel.cpp
  GetJointPropertiesRequest.cpp
  GetJointPropertiesResponse.cpp
  GetJointProperties.cpp
  GetLinkPropertiesRequest.cpp
  GetLinkPropertiesResponse.cpp
  GetLinkProperties.cpp
  GetLinkStateRequest.cpp
  GetLinkStateResponse.cpp
  GetLinkState.cpp
  GetModelPropertiesRequest.cpp
  GetModelPropertiesResponse.cpp
  GetModelProperties.cpp
  GetModelStateRequest.cpp
  GetModelStateResponse.cpp
  GetModelState.cpp
  GetPhysicsPropertiesRequest.cpp
  GetPhysicsPropertiesResponse.cpp
  GetPhysicsProperties.cpp
  GetWorldPropertiesRequest.cpp
  GetWorldPropertiesResponse.cpp
  GetWorldProperties.cpp
  JointRequestRequest.cpp
  JointRequestResponse.cpp
  JointRequest.cpp
  SetJointPropertiesRequest.cpp
  SetJointPropertiesResponse.cpp
  SetJointProperties.cpp
  SetJointTrajectoryRequest.cpp
  SetJointTrajectoryResponse.cpp
  SetJointTrajectory.cpp
  SetLinkPropertiesRequest.cpp
  SetLinkPropertiesResponse.cpp
  SetLinkProperties.cpp
  SetLinkStateRequest.cpp
  SetLinkStateResponse.cpp
  SetLinkState.cpp
  SetModelConfigurationRequest.cpp
  SetModelConfigurationResponse.cpp
  SetModelConfiguration.cpp
  SetModelStateRequest.cpp
  SetModelStateResponse.cpp
  SetModelState.cpp
  SetPhysicsPropertiesRequest.cpp
  SetPhysicsPropertiesResponse.cpp
  SetPhysicsProperties.cpp
  SpawnModelRequest.cpp
  SpawnModelResponse.cpp
  SpawnModel.cpp
  gazebo_msgs_gencpp_BSON.cpp
  gazebo_msgs_gencpp_Boost.cpp 
  gazebo_msgs_gencpp_Library.cpp 
  )

# dependencies
set(GAZEBO_MSGS_GENCPP_GEN_DEPS geometry_msgs_gencpp std_msgs_gencpp std_srvs_gencpp trajectory_msgs_gencpp  )

# allow building of nml libraries to be overridden by top level cmake file
if (NOT RFRAME_NML_OVERRIDE)
  # create nml library for these data classes
  add_rcspaths()
  add_library( gazebo_msgs_gencpp_NML SHARED gazebo_msgs_gencpp_NML.cpp gazebo_msgs_gencpp_NMLSupport.cpp )
  target_link_libraries(gazebo_msgs_gencpp_NML gazebo_msgs_gencpp 
	geometry_msgs_gencpp_NML std_msgs_gencpp_NML std_srvs_gencpp_NML trajectory_msgs_gencpp_NML  
	${RCS_LIBS} 
	common_NML 
	${RFRAME_LIBS})
  install(TARGETS gazebo_msgs_gencpp_NML DESTINATION lib)
endif()

  install(FILES gazebo_msgs_gencpp_NML.h DESTINATION gen_include/gazebo_msgs)

# allow building of ros libraries to be overridden by top level cmake file
if (NOT RFRAME_ROS_OVERRIDE)
  # rosfiles size: 69
  # create ros support library
  add_library(gazebo_msgs_gencpp_ROS SHARED gazebo_msgs_gencpp_ROS.cpp )
  target_link_libraries(gazebo_msgs_gencpp_ROS gazebo_msgs_gencpp ${RFRAME_LIBS})
  install(TARGETS gazebo_msgs_gencpp_ROS DESTINATION lib)
endif()

# install headers
install(FILES ${GAZEBO_MSGS_GENCPP_GEN_H} gazebo_msgs_gencpp_ROS.h DESTINATION gen_include/gazebo_msgs)


# setup make clean files list. NOTE:  gazebo_msgs_gencpp_NMLSupport.cpp is not added on purpose!
set(GAZEBO_MSGS_GENCPP_GEN 
  ${GAZEBO_MSGS_GENCPP_GEN_CPP}
  ${GAZEBO_MSGS_GENCPP_GEN_H}  
  gazebo_msgs_gencpp_NML.cpp
  gazebo_msgs_gencpp_NML.h 
  gazebo_msgs_gencpp_ROS.cpp
  gazebo_msgs_gencpp_ROS.h 
)

set_directory_properties( PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${GAZEBO_MSGS_GENCPP_GEN}")


