cmake_minimum_required(VERSION 3.5)
project(life_universe_everything)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(life_universe_everything ${SOURCE_FILES})