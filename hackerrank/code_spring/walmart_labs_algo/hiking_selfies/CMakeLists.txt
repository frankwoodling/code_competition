cmake_minimum_required(VERSION 3.6)
project(hiking_selfies)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(hiking_selfies ${SOURCE_FILES})