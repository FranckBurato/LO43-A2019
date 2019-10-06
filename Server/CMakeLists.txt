cmake_minimum_required(VERSION 3.14)
project(Server)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Server
        Server.cpp
        Server.hpp)
