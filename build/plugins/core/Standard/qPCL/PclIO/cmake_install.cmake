# Install script for directory: D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/plugins/core/Standard/qPCL/PclIO

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/ccViewer")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/CloudCompare/plugins" TYPE SHARED_LIBRARY FILES "D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qPCL/PclIO/Release/QPCL_IO_PLUGIN.dll")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/CloudCompare_withDebInfo/plugins" TYPE SHARED_LIBRARY FILES "D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qPCL/PclIO/RelWithDebInfo/QPCL_IO_PLUGIN.dll")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/CloudCompare_debug/plugins" TYPE SHARED_LIBRARY FILES "D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qPCL/PclIO/Debug/QPCL_IO_PLUGINd.dll")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer/plugins" TYPE SHARED_LIBRARY FILES "D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qPCL/PclIO/Release/QPCL_IO_PLUGIN.dll")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_withDebInfo/plugins" TYPE SHARED_LIBRARY FILES "D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qPCL/PclIO/RelWithDebInfo/QPCL_IO_PLUGIN.dll")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug/plugins" TYPE SHARED_LIBRARY FILES "D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qPCL/PclIO/Debug/QPCL_IO_PLUGINd.dll")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer" TYPE FILE FILES
      "D:/PCL 1.8.1/bin/pcl_common_release.dll"
      "D:/PCL 1.8.1/bin/pcl_features_release.dll"
      "D:/PCL 1.8.1/bin/pcl_filters_release.dll"
      "D:/PCL 1.8.1/bin/pcl_io_ply_release.dll"
      "D:/PCL 1.8.1/bin/pcl_io_release.dll"
      "D:/PCL 1.8.1/bin/pcl_kdtree_release.dll"
      "D:/PCL 1.8.1/bin/pcl_keypoints_release.dll"
      "D:/PCL 1.8.1/bin/pcl_ml_release.dll"
      "D:/PCL 1.8.1/bin/pcl_octree_release.dll"
      "D:/PCL 1.8.1/bin/pcl_outofcore_release.dll"
      "D:/PCL 1.8.1/bin/pcl_people_release.dll"
      "D:/PCL 1.8.1/bin/pcl_recognition_release.dll"
      "D:/PCL 1.8.1/bin/pcl_registration_release.dll"
      "D:/PCL 1.8.1/bin/pcl_sample_consensus_release.dll"
      "D:/PCL 1.8.1/bin/pcl_search_release.dll"
      "D:/PCL 1.8.1/bin/pcl_segmentation_release.dll"
      "D:/PCL 1.8.1/bin/pcl_stereo_release.dll"
      "D:/PCL 1.8.1/bin/pcl_surface_release.dll"
      "D:/PCL 1.8.1/bin/pcl_tracking_release.dll"
      "D:/PCL 1.8.1/bin/pcl_visualization_release.dll"
      )
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_withDebInfo" TYPE FILE FILES
      "D:/PCL 1.8.1/bin/pcl_common_release.dll"
      "D:/PCL 1.8.1/bin/pcl_features_release.dll"
      "D:/PCL 1.8.1/bin/pcl_filters_release.dll"
      "D:/PCL 1.8.1/bin/pcl_io_ply_release.dll"
      "D:/PCL 1.8.1/bin/pcl_io_release.dll"
      "D:/PCL 1.8.1/bin/pcl_kdtree_release.dll"
      "D:/PCL 1.8.1/bin/pcl_keypoints_release.dll"
      "D:/PCL 1.8.1/bin/pcl_ml_release.dll"
      "D:/PCL 1.8.1/bin/pcl_octree_release.dll"
      "D:/PCL 1.8.1/bin/pcl_outofcore_release.dll"
      "D:/PCL 1.8.1/bin/pcl_people_release.dll"
      "D:/PCL 1.8.1/bin/pcl_recognition_release.dll"
      "D:/PCL 1.8.1/bin/pcl_registration_release.dll"
      "D:/PCL 1.8.1/bin/pcl_sample_consensus_release.dll"
      "D:/PCL 1.8.1/bin/pcl_search_release.dll"
      "D:/PCL 1.8.1/bin/pcl_segmentation_release.dll"
      "D:/PCL 1.8.1/bin/pcl_stereo_release.dll"
      "D:/PCL 1.8.1/bin/pcl_surface_release.dll"
      "D:/PCL 1.8.1/bin/pcl_tracking_release.dll"
      "D:/PCL 1.8.1/bin/pcl_visualization_release.dll"
      )
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES
      "D:/PCL 1.8.1/bin/pcl_common_release.dll"
      "D:/PCL 1.8.1/bin/pcl_features_release.dll"
      "D:/PCL 1.8.1/bin/pcl_filters_release.dll"
      "D:/PCL 1.8.1/bin/pcl_io_ply_release.dll"
      "D:/PCL 1.8.1/bin/pcl_io_release.dll"
      "D:/PCL 1.8.1/bin/pcl_kdtree_release.dll"
      "D:/PCL 1.8.1/bin/pcl_keypoints_release.dll"
      "D:/PCL 1.8.1/bin/pcl_ml_release.dll"
      "D:/PCL 1.8.1/bin/pcl_octree_release.dll"
      "D:/PCL 1.8.1/bin/pcl_outofcore_release.dll"
      "D:/PCL 1.8.1/bin/pcl_people_release.dll"
      "D:/PCL 1.8.1/bin/pcl_recognition_release.dll"
      "D:/PCL 1.8.1/bin/pcl_registration_release.dll"
      "D:/PCL 1.8.1/bin/pcl_sample_consensus_release.dll"
      "D:/PCL 1.8.1/bin/pcl_search_release.dll"
      "D:/PCL 1.8.1/bin/pcl_segmentation_release.dll"
      "D:/PCL 1.8.1/bin/pcl_stereo_release.dll"
      "D:/PCL 1.8.1/bin/pcl_surface_release.dll"
      "D:/PCL 1.8.1/bin/pcl_tracking_release.dll"
      "D:/PCL 1.8.1/bin/pcl_visualization_release.dll"
      )
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_common_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_features_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_filters_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_io_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_io_ply_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_kdtree_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_keypoints_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_ml_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_octree_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_outofcore_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_people_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_recognition_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_registration_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_sample_consensus_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_search_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_segmentation_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_stereo_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_surface_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_tracking_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug" TYPE FILE FILES "D:/PCL 1.8.1/bin/pcl_visualization_debug.dll")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

