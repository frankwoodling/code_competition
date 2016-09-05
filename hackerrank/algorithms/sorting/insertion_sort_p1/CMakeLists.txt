cmake_minimum_required(VERSION 3.5)
project(insertion_sort_p1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(insertion_sort_p1 ${SOURCE_FILES})