//
// Created by Antoine on 22/10/2019.
//

#include "Sound.h"
#include <string>
#include <iostream>

Sound::Sound() {
    this->id = 4;
    this->path = "../Logs/sound.txt";
    this->type = "Sound";
    this->interval = 1;
}
Sound::Sound(int interval) {
    this->id = 4;
    this->path = "../Logs/sound.txt";
    this->type = "Sound";
    this->interval = interval;
}
Sound::Sound(const Sound &sound){}
Sound& Sound::operator=(const Sound &sound) {
    this->path = sound.path;
    this->id = sound.id;
    this->type = sound.type;
    return *this;
}
Sound::~Sound() {}

std::string Sound::getValue() {
    return std::to_string(this->generateValue(0,120));
}