cmake_minimum_required(VERSION 3.5)
project(ice_cream_parlor)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(ice_cream_parlor ${SOURCE_FILES})