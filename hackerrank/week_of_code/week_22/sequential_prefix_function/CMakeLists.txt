cmake_minimum_required(VERSION 3.5)
project(sequential_prefix_function)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(sequential_prefix_function ${SOURCE_FILES})