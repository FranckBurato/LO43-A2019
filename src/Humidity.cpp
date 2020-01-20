#include <iostream>
#include "Humidity.h"

using namespace std;

Humidity::Humidity(){
	humid = 0.0;
	this->sensorName = "Hygrometer";
}

Humidity::Humidity(const Humidity& humid){
	this->humid = humid.getData();
	this->sensorName = humid.getSensorName();
}

Humidity::~Humidity(){}

Humidity& Humidity::operator=(const Humidity& humid){
	this->humid = humid.getData();
	this->sensorName = humid.getSensorName();
	return *this;
}

std::string Humidity::sendData(){
	return "-Hygrometer- Humidity level (%) : " + to_string(generateValues<float>(0, 100));
}

float Humidity::getData() const{
	return humid;
}
