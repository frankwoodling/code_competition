cmake_minimum_required(VERSION 3.5)
project(booking_destination_together)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(booking_destination_together ${SOURCE_FILES})