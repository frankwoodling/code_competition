cmake_minimum_required(VERSION 3.6)
project(repeated_string)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(repeated_string ${SOURCE_FILES})