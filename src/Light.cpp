#include <iostream>
#include "Light.h"

using namespace std;

Light::Light(){
	isLight = false;
	this->sensorName = "Photodetector";
}

Light::Light(const Light& light){
	isLight = light.getData();
	this->sensorName = light.getSensorName();
}

Light::~Light(){}

Light& Light::operator=(const Light& light){
	isLight = light.getData();
	this->sensorName = light.getSensorName();
	return *this;
}

string Light::sendData(){
	return "-Photodetector- Light detected : " + to_string(generateValues<bool>(true, false));
}

bool Light::getData() const{
	return isLight;
}
