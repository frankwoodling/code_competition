cmake_minimum_required(VERSION 3.5)
project(input_and_output)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(input_and_output ${SOURCE_FILES})