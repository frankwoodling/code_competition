cmake_minimum_required(VERSION 3.6)
project(happy_ladybugs)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(happy_ladybugs ${SOURCE_FILES})