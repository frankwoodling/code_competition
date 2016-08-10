cmake_minimum_required(VERSION 3.5)
project(beautiful_triplets)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(beautiful_triplets ${SOURCE_FILES})