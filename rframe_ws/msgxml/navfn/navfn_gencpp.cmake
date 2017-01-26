# 
#  AUTOGENERATED FILE:   do not edit
#
#  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:06 -0500
#  From Template/Script: data_templates/IncludeTemplate.cmake
 
include_directories(BEFORE ${CMAKE_CURRENT_SOURCE_DIR})

# define lists of source files 
set(NAVFN_GENCPP_GEN_H 
  MakeNavPlanRequest.h 
  MakeNavPlanResponse.h 
  MakeNavPlan.h 
  SetCostmapRequest.h 
  SetCostmapResponse.h 
  SetCostmap.h 
  navfn_gencpp_Library.h 
  )

set(NAVFN_GENCPP_GEN_CPP 
  MakeNavPlanRequest.cpp
  MakeNavPlanResponse.cpp
  MakeNavPlan.cpp
  SetCostmapRequest.cpp
  SetCostmapResponse.cpp
  SetCostmap.cpp
  navfn_gencpp_BSON.cpp
  navfn_gencpp_Boost.cpp 
  navfn_gencpp_Library.cpp 
  )

# dependencies
set(NAVFN_GENCPP_GEN_DEPS geometry_msgs_gencpp std_msgs_gencpp std_srvs_gencpp  )

# allow building of nml libraries to be overridden by top level cmake file
if (NOT RFRAME_NML_OVERRIDE)
  # create nml library for these data classes
  add_rcspaths()
  add_library( navfn_gencpp_NML SHARED navfn_gencpp_NML.cpp navfn_gencpp_NMLSupport.cpp )
  target_link_libraries(navfn_gencpp_NML navfn_gencpp 
	geometry_msgs_gencpp_NML std_msgs_gencpp_NML std_srvs_gencpp_NML  
	${RCS_LIBS} 
	common_NML 
	${RFRAME_LIBS})
  install(TARGETS navfn_gencpp_NML DESTINATION lib)
endif()

  install(FILES navfn_gencpp_NML.h DESTINATION gen_include/navfn)

# allow building of ros libraries to be overridden by top level cmake file
if (NOT RFRAME_ROS_OVERRIDE)
  # rosfiles size: 6
  # create ros support library
  add_library(navfn_gencpp_ROS SHARED navfn_gencpp_ROS.cpp )
  target_link_libraries(navfn_gencpp_ROS navfn_gencpp ${RFRAME_LIBS})
  install(TARGETS navfn_gencpp_ROS DESTINATION lib)
endif()

# install headers
install(FILES ${NAVFN_GENCPP_GEN_H} navfn_gencpp_ROS.h DESTINATION gen_include/navfn)


# setup make clean files list. NOTE:  navfn_gencpp_NMLSupport.cpp is not added on purpose!
set(NAVFN_GENCPP_GEN 
  ${NAVFN_GENCPP_GEN_CPP}
  ${NAVFN_GENCPP_GEN_H}  
  navfn_gencpp_NML.cpp
  navfn_gencpp_NML.h 
  navfn_gencpp_ROS.cpp
  navfn_gencpp_ROS.h 
)

set_directory_properties( PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${NAVFN_GENCPP_GEN}")


