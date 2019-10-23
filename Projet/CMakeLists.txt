cmake_minimum_required(VERSION 3.14)
project(Projet)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_COMPILER D:/MinGW/bin/g++.exe)

include_directories(.)
include_directories(Sensors)
include_directories(Server)

add_executable(Projet
        Sensors/Humidity.h
        Sensors/Light.h
        Sensors/Sensor.h
        Sensors/Sound.h
        Sensors/Temperature.h
        Server/Server.cpp
        Server/Server.h
        main.cpp
        Scheduler.h Scheduler.cpp Sensors/SensorInterface.h Sensors/Temperature.cpp Sensors/Humidity.cpp Sensors/Light.cpp Sensors/Sound.cpp)
