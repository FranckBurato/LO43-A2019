cmake_minimum_required(VERSION 3.13)    # CMake version check
project(LO43-A2019)                     # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)              # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES src/main.cpp src/Server/Server.cpp src/Sensor/Sensor.h src/Sensor/Humidity.cpp src/Sensor/Humidity.h src/Sensor/Sound.cpp src/Sensor/Sound.h)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(main ${SOURCE_FILES})