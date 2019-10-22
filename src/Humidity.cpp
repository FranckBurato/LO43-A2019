#include <iostream>
#include "Humidity.h"

using namespace std;

Humidity::Humidity(){
	this->humid = 0.0;
	this->sensorName = "Humidity";
	this->formatedData = "";
}

Humidity::Humidity(const Humidity& humid){
	this->humid = humid.getData();
	this->sensorName = humid.getSensorName();
	this->formatedData = humid.sendData();
}

Humidity::~Humidity(){}

Humidity& Humidity::operator=(const Humidity& humid){
	this->humid = humid.getData();
	this->sensorName = humid.getSensorName();
	this->formatedData = humid.sendData();
	return *this;
}

float Humidity::getData() const{
	return this->humid;
}

void Humidity::setData(float humid){
	this->humid = humid;
}

string Humidity::sendData() const{
	return "--Humidity Sensor-- Humidity level : " + to_string(this->humid);
}
