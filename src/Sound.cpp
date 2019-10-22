#include <iostream>
#include "Sound.h"

using namespace std;

Sound::Sound(){
	this->data = 0;
	this->sensorName = "Sound";
}

Sound::Sound(const Sound& sound){
	this->data = sound.getData();
	this->sensorName = sound.getSensorName();
}

Sound::~Sound(){}

Sound& Sound::operator=(const Sound& sound) {
	this->data = sound.getData();
	this->sensorName = sound.getSensorName();
	return *this;
}
