# Install script for directory: D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/plugins/core/Standard

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qAnimation/cmake_install.cmake")
  include("D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qBroom/cmake_install.cmake")
  include("D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qCanupo/cmake_install.cmake")
  include("D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qCompass/cmake_install.cmake")
  include("D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qCork/cmake_install.cmake")
  include("D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qCSF/cmake_install.cmake")
  include("D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qFacets/cmake_install.cmake")
  include("D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qHoughNormals/cmake_install.cmake")
  include("D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qHPR/cmake_install.cmake")
  include("D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qM3C2/cmake_install.cmake")
  include("D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qPCL/cmake_install.cmake")
  include("D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qPCV/cmake_install.cmake")
  include("D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qPoissonRecon/cmake_install.cmake")
  include("D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qRANSAC_SD/cmake_install.cmake")
  include("D:/cloudcompare/CloudCompare-2.11.1/CloudCompare_develop/build/plugins/core/Standard/qSRA/cmake_install.cmake")

endif()

