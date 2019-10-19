//
// Created by Alomb on 09/10/2019.
//

#include "Header/Sound.h"
#include <random>
#include <chrono>

void Sound::aleaGenVal() {
    std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> distribution(0,150);
    valSense = distribution(generator);
}

std::string Sound::getPath() {
    return "../Log/soundLog.txt";
}

Sound::Sound(): Sensor() {}
Sound::Sound(const Sound &autre): Sensor(autre) {}
Sound::~Sound() {}

Sound &Sound::operator=(const Sound &autre) {
    Sensor::operator=(autre);
    return *this;
};