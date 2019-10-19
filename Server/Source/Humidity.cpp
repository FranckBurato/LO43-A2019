//
// Created by Alomb on 09/10/2019.
//

#include "Header/Humidity.h"
#include <random>
#include <chrono>

void Humidity::aleaGenVal() {
    std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_real_distribution<float> distribution(0,100);
    valSense = distribution(generator);
}

std::string Humidity::getPath() {
    return "../Log/humidityLog.txt";
}

Humidity::Humidity(): Sensor() {}
Humidity::Humidity(const Humidity &autre): Sensor(autre) {}
Humidity::~Humidity() {}

Humidity &Humidity::operator=(const Humidity &autre) {
    Sensor::operator=(autre);
    return *this;
}