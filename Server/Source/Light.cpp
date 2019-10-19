//
// Created by Alomb on 09/10/2019.
//

#include "Header/Light.h"
#include <random>
#include <chrono>

void Light::aleaGenVal() {
    std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());
    std::bernoulli_distribution distribution;
    valSense = distribution(generator);
}

Light::Light(): Sensor() {}
Light::Light(const Light &autre): Sensor(autre) {}
Light::~Light() {}

Light &Light::operator=(const Light &autre) {
    Sensor::operator=(autre);
    return *this;
}

std::string Light::getPath() {
    return "../Log/lightLog.txt";
}
