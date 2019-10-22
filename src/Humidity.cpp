#include <iostream>
#include "Humidity.h"

using namespace std;

Humidity::Humidity(){
	this->data = 0.0;
	this->sensorName = "Humidity";
}

Humidity::Humidity(const Humidity& humid){
	this->data = humid.getData();
	this->sensorName = humid.getSensorName();
}

Humidity::~Humidity(){}

Humidity& Humidity::operator=(const Humidity& humid){
	this->data = humid.getData();
	this->sensorName = humid.getSensorName();
	return *this;
}
