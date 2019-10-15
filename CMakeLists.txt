cmake_minimum_required(VERSION 3.13)    # CMake version check
project(LO43-A2019)                     # Create project
set(CMAKE_CXX_STANDARD 14)              # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES src/main.cpp src/Server/Server.cpp src/Sensor/Sensor.h src/Sensor/Humidity.cpp src/Sensor/Humidity.h src/Sensor/Sound.cpp src/Sensor/Sound.h src/Scheduler/Scheduler.cpp src/Scheduler/Scheduler.h src/Sensor/Temperature.cpp src/Sensor/Temperature.h src/Sensor/Light.cpp src/Sensor/Light.h)
set(GCC_COVERAGE_COMPILE_FLAGS "-static-libgcc -static-libstdc++")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(main ${SOURCE_FILES})
