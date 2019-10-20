//
// Created by Alomb on 20/10/2019.
//

#include <random>
#include <chrono>
#include "../Headers/Sound.h"

void Sound::aleaGenVal() {
    std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> distribution(0,150);
    valSense = distribution(generator);
}

std::string Sound::getPath() {
    return "../Logs/SoundLog.txt";
}

Sound::Sound(): Sensor() {}
Sound::Sound(const Sound &autre): Sensor(autre) {}
Sound::~Sound() {}

Sound &Sound::operator=(const Sound &autre) {
    Sensor::operator=(autre);
    return *this;
};