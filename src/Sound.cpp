#include <iostream>
#include "Sound.h"

using namespace std;

Sound::Sound(){
	sound = 0;
	this->sensorName = "Soundlevelmeter";
}

Sound::Sound(const Sound& sound){
	this->sound = sound.getData();
	this->sensorName = sound.getSensorName();
}

Sound::~Sound(){}

Sound& Sound::operator=(const Sound& sound) {
	this->sound = sound.getData();
	this->sensorName = sound.getSensorName();
	return *this;
}

string Sound::sendData(){
	return "-Soundlevelmeter- Sound level (dB) : " + to_string(generateValues<int>(0, 200));
}

int Sound::getData() const{
	return sound;
}
