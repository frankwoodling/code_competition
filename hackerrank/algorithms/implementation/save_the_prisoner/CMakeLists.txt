cmake_minimum_required(VERSION 3.5)
project(save_the_prisoner)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(save_the_prisoner ${SOURCE_FILES})