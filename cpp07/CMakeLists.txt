cmake_minimum_required(VERSION 3.21)
project(cpp07)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(ex00)

add_executable(cpp07
        ex00/whatever.hpp ex00/main.cpp ex02/main.cpp ex01/iter.hpp ex01/main.cpp ex02/Array.hpp)
