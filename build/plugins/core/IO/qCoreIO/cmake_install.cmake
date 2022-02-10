# Install script for directory: D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/plugins/core/IO/qCoreIO

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/CloudCompare/plugins" TYPE SHARED_LIBRARY FILES "D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/IO/qCoreIO/Release/QCORE_IO_PLUGIN.dll")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/CloudCompare_withDebInfo/plugins" TYPE SHARED_LIBRARY FILES "D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/IO/qCoreIO/RelWithDebInfo/QCORE_IO_PLUGIN.dll")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/CloudCompare_debug/plugins" TYPE SHARED_LIBRARY FILES "D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/IO/qCoreIO/Debug/QCORE_IO_PLUGINd.dll")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer/plugins" TYPE SHARED_LIBRARY FILES "D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/IO/qCoreIO/Release/QCORE_IO_PLUGIN.dll")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_withDebInfo/plugins" TYPE SHARED_LIBRARY FILES "D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/IO/qCoreIO/RelWithDebInfo/QCORE_IO_PLUGIN.dll")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ccViewer_debug/plugins" TYPE SHARED_LIBRARY FILES "D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/IO/qCoreIO/Debug/QCORE_IO_PLUGINd.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/IO/qCoreIO/src/cmake_install.cmake")
  include("D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/IO/qCoreIO/ui/cmake_install.cmake")

endif()

