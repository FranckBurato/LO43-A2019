cmake_minimum_required(VERSION 3.14)
project(LO43Server)

set(CMAKE_CXX_STANDARD 14)

add_executable(LO43Server main.cpp Headers/Sensor.h Sources/Data.cpp Headers/Data.h Sources/Humidity.cpp Headers/Humidity.h Sources/Server.cpp Headers/Server.h Sources/Scheduler.cpp Headers/Scheduler.h Sources/Sound.cpp Headers/Sound.h Sources/Light.cpp Headers/Light.h Sources/Temperature.cpp Headers/Temperature.h Sources/SensorInterface.cpp Headers/SensorInterface.h)