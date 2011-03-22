cmake_minimum_required(VERSION 2.8)

project(FenrirCode)

option(FEN_FLOAT_PRECI_32_BIT TRUE)

set(CMAKE_INCLUDE_PATH ${CMAKE_INCLUDE_PATH} "${CMAKE_SOURCE_DIR}/include" CACHE STRING "haha" FORCE)

if(FEN_FLOAT_PRECI_32_BIT)
	add_definitions(-DFEN_FLOAT_PRECI=float)
else()
	add_definitions(-DFEN_FLOAT_PRECI=double)
endif()

include_directories(${CMAKE_INCLUDE_PATH})

add_subdirectory(source)

