cmake_minimum_required(VERSION 3.5)
project(basic_data_types)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(basic_data_types ${SOURCE_FILES})