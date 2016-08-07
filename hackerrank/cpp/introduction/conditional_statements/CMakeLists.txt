cmake_minimum_required(VERSION 3.5)
project(conditional_statements)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(conditional_statements ${SOURCE_FILES})