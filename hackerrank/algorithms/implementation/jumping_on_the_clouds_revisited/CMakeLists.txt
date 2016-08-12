cmake_minimum_required(VERSION 3.5)
project(jumping_on_the_clouds_revisited)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(jumping_on_the_clouds_revisited ${SOURCE_FILES})