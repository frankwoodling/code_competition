cmake_minimum_required(VERSION 3.5)
project(structs)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(structs ${SOURCE_FILES})