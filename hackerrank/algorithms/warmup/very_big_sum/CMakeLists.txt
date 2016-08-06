cmake_minimum_required(VERSION 3.5)
project(very_big_sum)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(very_big_sum ${SOURCE_FILES})