cmake_minimum_required(VERSION 3.14)
project(Server)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Server
        Source/main.cpp Source/Sensor.cpp Header/Sensor.h Source/Temperature.cpp Header/Temperature.h Source/Humidity.cpp Header/Humidity.h Source/Light.cpp Header/Light.h Source/Sound.cpp Header/Sound.h Source/Scheduler.cpp Header/Scheduler.h Source/Data.cpp Header/Data.h Source/Server.cpp Header/Server.h)
