cmake_minimum_required(VERSION 3.5)
project(super_reduced_string)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(super_reduced_string ${SOURCE_FILES})