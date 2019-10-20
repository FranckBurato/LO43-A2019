//
// Created by Alomb on 20/10/2019.
//

#include <random>
#include <chrono>
#include "../Headers/Temperature.h"

void Temperature::aleaGenVal() {
    std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_real_distribution<float> distribution(-20,40);
    valSense = distribution(generator);
}

std::string Temperature::getPath() {
    return "../Logs/TemperatureLog.txt";
}

Temperature::Temperature(): Sensor() {}
Temperature::Temperature(const Temperature &autre): Sensor() {}
Temperature::~Temperature() {}

Temperature &Temperature::operator=(const Temperature &autre) {
    Sensor::operator=(autre);
    return *this;
}