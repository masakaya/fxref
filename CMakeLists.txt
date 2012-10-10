#
# fast cross reference tool
# Author: Masashi Kayahara<sylphs.mb@gmail.com>
#
# Project Info
SET(PROJECT_NAME_SHORT   "Fxref")
SET(PROJECT_NAME_LONG    "Fast Cross Reference Tool")
SET(PROJECT_DESCRIPTION  "Fast Cross Reference Tool")
SET(PROJECT_COPYRIGHT    "Copyright (C) 2012 Masashi Kayahara")
SET(PROJECT_CONTACT      "sylphs.mb@gmail.com")
SET(PROJECT_VENDOR       "Masashi Kayahara")
SET(ORG_WEBSITE          "http://jlinexer.dip.jp")

# CMake Settings
CMAKE_MINIMUM_REQUIRED(VERSION 2.6.0)
SET(CMAKE_COLOR_MAKEFILE ON)
SET(CMAKE_VERBOSE_MAKEFILE OFF)

# Codename of the Project
SET(CODENAME "rose")

# Project Version
SET(CPACK_PACKAGE_VERSION_MAJOR "0")
SET(CPACK_PACKAGE_VERSION_MINOR "0")
SET(CPACK_PACKAGE_VERSION_PATCH "1")
SET(CPACK_PACKAGE_VERSION ${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH})
SET(PROJECT_VERSION_MAJOR ${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR})
SET(PROJECT_VERSION ${CPACK_PACKAGE_VERSION})
MESSAGE(STATUS "Version: ${PROJECT_VERSION}")

STRING(TOLOWER ${PROJECT_NAME_SHORT} PROJECT_NAME_SHORT_LOWER)
PROJECT(${PROJECT_NAME_SHORT_LOWER}-${PROJECT_VERSION})

# Configuring build type
IF(NOT CMAKE_BUILD_TYPE)
    SET(CMAKE_BUILD_TYPE "Debug" CACHE STRING
        "Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel."
        FORCE)
    MESSAGE("Setting build type to '${CMAKE_BUILD_TYPE}'")
ELSE(NOT CMAKE_BUILD_TYPE)
    MESSAGE("Build type set to '${CMAKE_BUILD_TYPE}'")
ENDIF(NOT CMAKE_BUILD_TYPE)

# C++ Compiler setting
set(CMAKE_CXX_FLAGS , ""  )
set(CMAKE_CXX_COMMON_OPTION "-W -Wall -Wnon-virtual-dtor -Wreorder -Weffc++ -Wold-style-cast -Woverloaded-virtual -Wformat -Wunused -Wuninitialized")
set(CXX_FLAGS_DEBUG "-g -pg")
set(CXX_FLAGS_RELEASE "-O3")
set(CMAKE_CXX_FLAGS_DEBUG "'${CMAKE_CXX_COMMON_OPTION}' ${CXX_FLAGS_DEBUG}'")
set(CMAKE_CXX_FLAGS_RELEASE "'${CMAKE_CXX_COMMON_OPTION}' ${CXX_FLAGS_RELEASE}'"  )

# Recursively add sub dirs
SUBDIRS(src)

