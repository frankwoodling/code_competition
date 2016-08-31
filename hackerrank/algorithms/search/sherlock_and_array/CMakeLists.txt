cmake_minimum_required(VERSION 3.5)
project(sherlock_and_array)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(sherlock_and_array ${SOURCE_FILES})