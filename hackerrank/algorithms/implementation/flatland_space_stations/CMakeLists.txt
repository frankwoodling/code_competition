cmake_minimum_required(VERSION 3.5)
project(flatland_space_stations)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(flatland_space_stations ${SOURCE_FILES})