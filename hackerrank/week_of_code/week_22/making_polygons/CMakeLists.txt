cmake_minimum_required(VERSION 3.5)
project(making_polygons)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(making_polygons ${SOURCE_FILES})