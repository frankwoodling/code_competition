cmake_minimum_required(VERSION 3.5)
project(circular_array_rotation)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(circular_array_rotation ${SOURCE_FILES})