cmake_minimum_required(VERSION 3.5)
project(lower_bound_stl)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(lower_bound_stl ${SOURCE_FILES})