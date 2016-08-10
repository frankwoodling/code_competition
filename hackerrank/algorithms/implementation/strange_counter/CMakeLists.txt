cmake_minimum_required(VERSION 3.5)
project(strange_counter)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(strange_counter ${SOURCE_FILES})