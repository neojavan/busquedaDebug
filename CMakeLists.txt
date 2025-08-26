cmake_minimum_required(VERSION 3.31)
project(busquedaDebug)

set(CMAKE_CXX_STANDARD 20)

add_executable(busquedaDebug main.cpp
        transponer.cpp
        transponer.h)
