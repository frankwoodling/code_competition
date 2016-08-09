cmake_minimum_required(VERSION 3.5)
project(intro_to_tutorial_challenges)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(intro_to_tutorial_challenges ${SOURCE_FILES})