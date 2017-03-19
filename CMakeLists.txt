cmake_minimum_required(VERSION 2.8)
project(leetcode)

IF(NOT CMAKE_BUILD_TYPE)
  SET(CMAKE_BUILD_TYPE Release)
ENDIF()

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}  -Wall  -O3 -march=native ")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall   -O3 -march=native")

include_directories(
include/)

add_executable(leetcode 
	src/main.cpp
	src/solution.cpp)
