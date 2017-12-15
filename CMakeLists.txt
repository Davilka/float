cmake_minimum_required(VERSION 3.8)
project(float)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp MyFloat.cpp MyFloat.h myFlag.cpp myFlag.h)
add_executable(float ${SOURCE_FILES})