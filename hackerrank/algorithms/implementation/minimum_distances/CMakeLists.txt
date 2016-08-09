cmake_minimum_required(VERSION 3.5)
project(minimum_distances)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(minimum_distances ${SOURCE_FILES})