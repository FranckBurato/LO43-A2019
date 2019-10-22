#include <iostream>
#include "Sound.h"

using namespace std;

Sound::Sound(){
	this->sound = 0;
	this->sensorName = "Sound";
	this->formatedData = "";
}

Sound::Sound(const Sound& sound){
	this->sound = sound.getData();
	this->sensorName = sound.getSensorName();
	this->formatedData = sound.sendData();
}

Sound::~Sound(){}

Sound& Sound::operator=(const Sound& sound) {
	this->sound = sound.getData();
	this->sensorName = sound.getSensorName();
	this->formatedData = sound.sendData();
	return *this;
}

int Sound::getData() const{
	return this->sound;
}

void Sound::setData(int sound){
	this->sound = sound;
}

string Sound::sendData() const{
	return "--Sound Sensor-- Sound level : " + to_string(this->sound);
}



