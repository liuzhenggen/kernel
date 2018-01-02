CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

######################### global define #########################

set(CMAKE_BUILD_TYPE Release CACHE STRING "Set build type to Release" FORCE)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++11 -lpthread -ldl -lz")

######################### common #########################
INCLUDE(cmake/common.cmake)
INCLUDE_DIRECTORIES(include)
ADD_SUBDIRECTORY(include)

######################### subsystem #########################
ADD_SUBDIRECTORY(mm)