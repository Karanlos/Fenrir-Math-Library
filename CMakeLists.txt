cmake_minimum_required(VERSION 2.8)

project(FenrirCode)

set(CMAKE_INCLUDE_PATH ${CMAKE_INCLUDE_PATH} "${CMAKE_SOURCE_DIR}/include" CACHE STRING "haha" FORCE)

include_directories(${CMAKE_INCLUDE_PATH})

add_subdirectory(source)

