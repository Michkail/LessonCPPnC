cmake_minimum_required(VERSION 3.24)
project(LessonCPPnC)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(c)
include_directories(cpp)

add_executable(LessonCPPnC
        c/hello.c
        cpp/constructor.cpp
        cpp/FundamentalClassObject.cpp)
