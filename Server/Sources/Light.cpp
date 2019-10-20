//
// Created by Alomb on 20/10/2019.
//

#include <random>
#include <chrono>
#include "../Headers/Light.h"

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
    return "../Logs/LightLog.txt";
}