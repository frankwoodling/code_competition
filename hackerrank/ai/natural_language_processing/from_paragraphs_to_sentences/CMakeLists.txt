cmake_minimum_required(VERSION 3.5)
project(from_paragraphs_to_sentences)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(from_paragraphs_to_sentences ${SOURCE_FILES})