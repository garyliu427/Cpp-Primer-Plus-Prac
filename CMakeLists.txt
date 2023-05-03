cmake_minimum_required(VERSION 3.23)
project(C___Primer)

set(CMAKE_CXX_STANDARD 17)

include_directories(ch10)

add_executable(cube
        ch10/cube.cpp)

add_executable(stock
        ch10/stock00.cpp
        ch10/stock00.h
        ch10/usestock00.cpp)
