cmake_minimum_required(VERSION 3.5)
project(non_divisible_subset)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(non_divisible_subset ${SOURCE_FILES})