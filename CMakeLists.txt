cmake_minimum_required(VERSION 3.13)
project(Sinusus VERSION 1.0 LANGUAGES CXX)

if(USE_DOUBLE)
    add_definitions(-DDOUBLE)
endif()

add_executable(sunusus main.cpp)

