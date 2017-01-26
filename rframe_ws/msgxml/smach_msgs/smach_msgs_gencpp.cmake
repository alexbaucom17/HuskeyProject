# 
#  AUTOGENERATED FILE:   do not edit
#
#  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:07 -0500
#  From Template/Script: data_templates/IncludeTemplate.cmake
 
include_directories(BEFORE ${CMAKE_CURRENT_SOURCE_DIR})

# define lists of source files 
set(SMACH_MSGS_GENCPP_GEN_H 
  SmachContainerInitialStatusCmd.h 
  SmachContainerStatus.h 
  SmachContainerStructure.h 
  smach_msgs_gencpp_Library.h 
  )

set(SMACH_MSGS_GENCPP_GEN_CPP 
  SmachContainerInitialStatusCmd.cpp
  SmachContainerStatus.cpp
  SmachContainerStructure.cpp
  smach_msgs_gencpp_BSON.cpp
  smach_msgs_gencpp_Boost.cpp 
  smach_msgs_gencpp_Library.cpp 
  )

# dependencies
set(SMACH_MSGS_GENCPP_GEN_DEPS std_msgs_gencpp std_srvs_gencpp  )

# allow building of nml libraries to be overridden by top level cmake file
if (NOT RFRAME_NML_OVERRIDE)
  # create nml library for these data classes
  add_rcspaths()
  add_library( smach_msgs_gencpp_NML SHARED smach_msgs_gencpp_NML.cpp smach_msgs_gencpp_NMLSupport.cpp )
  target_link_libraries(smach_msgs_gencpp_NML smach_msgs_gencpp 
	std_msgs_gencpp_NML std_srvs_gencpp_NML  
	${RCS_LIBS} 
	common_NML 
	${RFRAME_LIBS})
  install(TARGETS smach_msgs_gencpp_NML DESTINATION lib)
endif()

  install(FILES smach_msgs_gencpp_NML.h DESTINATION gen_include/smach_msgs)

# allow building of ros libraries to be overridden by top level cmake file
if (NOT RFRAME_ROS_OVERRIDE)
  # rosfiles size: 3
  # create ros support library
  add_library(smach_msgs_gencpp_ROS SHARED smach_msgs_gencpp_ROS.cpp )
  target_link_libraries(smach_msgs_gencpp_ROS smach_msgs_gencpp ${RFRAME_LIBS})
  install(TARGETS smach_msgs_gencpp_ROS DESTINATION lib)
endif()

# install headers
install(FILES ${SMACH_MSGS_GENCPP_GEN_H} smach_msgs_gencpp_ROS.h DESTINATION gen_include/smach_msgs)


# setup make clean files list. NOTE:  smach_msgs_gencpp_NMLSupport.cpp is not added on purpose!
set(SMACH_MSGS_GENCPP_GEN 
  ${SMACH_MSGS_GENCPP_GEN_CPP}
  ${SMACH_MSGS_GENCPP_GEN_H}  
  smach_msgs_gencpp_NML.cpp
  smach_msgs_gencpp_NML.h 
  smach_msgs_gencpp_ROS.cpp
  smach_msgs_gencpp_ROS.h 
)

set_directory_properties( PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${SMACH_MSGS_GENCPP_GEN}")


