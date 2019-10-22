#include <iostream>
#include "Light.h"

using namespace std;

Light::Light(){
	this->isLight = false;
	this->sensorName = "Light";
	this->formatedData = "";
}

Light::Light(const Light& light){
	this->isLight = light.getData();
	this->sensorName = light.getSensorName();
	this->formatedData = light.sendData();
}

Light::~Light(){}

Light& Light::operator=(const Light& light){
	this->isLight = light.getData();
	this->sensorName = light.getSensorName();
	this->formatedData = light.sendData();
	return *this;
}

bool Light::getData() const{
	return this->isLight;
}

void Light::setData(bool isLight){
	this->isLight = isLight;
}

string Light::sendData() const{
	return "--Light Sensor-- Light detected : " + to_string(this->isLight);
}

