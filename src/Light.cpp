#include <iostream>
#include "Light.h"

using namespace std;

Light::Light(){
	this->data = false;
	this->sensorName = "Light";
}

Light::Light(const Light& light){
	this->data = light.getData();
	this->sensorName = light.getSensorName();
}

Light::~Light(){}

Light& Light::operator=(const Light& light){
	this->data = light.getData();
	this->sensorName = light.getSensorName();
	return *this;
}
