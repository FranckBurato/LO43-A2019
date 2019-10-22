#include <iostream>
#include "Temp.h"

using namespace std;

Temp::Temp(){
	this->data = 0;
	this->sensorName = "Temperature";
}

Temp::Temp(const Temp& temp){
	this->data = temp.getData();
	this->sensorName = temp.getSensorName();
}

Temp::~Temp(){}

Temp& Temp::operator=(const Temp& temp){
	this->data = temp.getData();
	this->sensorName = temp.getSensorName();
	return *this;
}
