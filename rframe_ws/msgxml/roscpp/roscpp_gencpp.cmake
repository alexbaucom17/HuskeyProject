# 
#  AUTOGENERATED FILE:   do not edit
#
#  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:07 -0500
#  From Template/Script: data_templates/IncludeTemplate.cmake
 
include_directories(BEFORE ${CMAKE_CURRENT_SOURCE_DIR})

# define lists of source files 
set(ROSCPP_GENCPP_GEN_H 
  Logger.h 
  EmptyRequest.h 
  EmptyResponse.h 
  Empty.h 
  GetLoggersRequest.h 
  GetLoggersResponse.h 
  GetLoggers.h 
  SetLoggerLevelRequest.h 
  SetLoggerLevelResponse.h 
  SetLoggerLevel.h 
  roscpp_gencpp_Library.h 
  )

set(ROSCPP_GENCPP_GEN_CPP 
  Logger.cpp
  EmptyRequest.cpp
  EmptyResponse.cpp
  Empty.cpp
  GetLoggersRequest.cpp
  GetLoggersResponse.cpp
  GetLoggers.cpp
  SetLoggerLevelRequest.cpp
  SetLoggerLevelResponse.cpp
  SetLoggerLevel.cpp
  roscpp_gencpp_BSON.cpp
  roscpp_gencpp_Boost.cpp 
  roscpp_gencpp_Library.cpp 
  )

# dependencies
set(ROSCPP_GENCPP_GEN_DEPS std_msgs_gencpp std_srvs_gencpp  )

# allow building of nml libraries to be overridden by top level cmake file
if (NOT RFRAME_NML_OVERRIDE)
  # create nml library for these data classes
  add_rcspaths()
  add_library( roscpp_gencpp_NML SHARED roscpp_gencpp_NML.cpp roscpp_gencpp_NMLSupport.cpp )
  target_link_libraries(roscpp_gencpp_NML roscpp_gencpp 
	std_msgs_gencpp_NML std_srvs_gencpp_NML  
	${RCS_LIBS} 
	common_NML 
	${RFRAME_LIBS})
  install(TARGETS roscpp_gencpp_NML DESTINATION lib)
endif()

  install(FILES roscpp_gencpp_NML.h DESTINATION gen_include/roscpp)

# allow building of ros libraries to be overridden by top level cmake file
if (NOT RFRAME_ROS_OVERRIDE)
  # rosfiles size: 10
  # create ros support library
  add_library(roscpp_gencpp_ROS SHARED roscpp_gencpp_ROS.cpp )
  target_link_libraries(roscpp_gencpp_ROS roscpp_gencpp ${RFRAME_LIBS})
  install(TARGETS roscpp_gencpp_ROS DESTINATION lib)
endif()

# install headers
install(FILES ${ROSCPP_GENCPP_GEN_H} roscpp_gencpp_ROS.h DESTINATION gen_include/roscpp)


# setup make clean files list. NOTE:  roscpp_gencpp_NMLSupport.cpp is not added on purpose!
set(ROSCPP_GENCPP_GEN 
  ${ROSCPP_GENCPP_GEN_CPP}
  ${ROSCPP_GENCPP_GEN_H}  
  roscpp_gencpp_NML.cpp
  roscpp_gencpp_NML.h 
  roscpp_gencpp_ROS.cpp
  roscpp_gencpp_ROS.h 
)

set_directory_properties( PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${ROSCPP_GENCPP_GEN}")


