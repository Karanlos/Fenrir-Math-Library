cmake_minimum_required(VERSION 2.8)

project(FenrirCode)

set(CMAKE_BUILD_TYPE "Release")

set(FENM_DEFAULT_PRECI "float" CACHE STRING "Choose the default type for the vectors and metricies" FORCE)

option(FENM_BUILD_TEST "Choose if a test executeable should be built or not" NO)

set(CMAKE_INCLUDE_PATH "${CMAKE_SOURCE_DIR}/include" CACHE STRING "haha" FORCE)

add_definitions(-DDEFAULT_PRECI=${FENM_DEFAULT_PRECI})

include_directories(${CMAKE_INCLUDE_PATH})

set(LIBRARY_OUTPUT_PATH "${CMAKE_BINARY_DIR}/lib")
set(EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}/bin")

add_subdirectory(source)

if(FENM_BUILD_TEST)
	link_directories(${CMAKE_BINARY_DIR}/lib)
	add_subdirectory(test)
endif()

