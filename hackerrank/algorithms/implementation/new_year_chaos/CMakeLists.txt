cmake_minimum_required(VERSION 3.5)
project(new_year_chaos)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(new_year_chaos ${SOURCE_FILES})