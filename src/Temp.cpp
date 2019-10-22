#include <iostream>
#include "Temp.h"

using namespace std;

Temp::Temp(){
	this->temperature = 0;
	this->sensorName = "Temperature";
	this->formatedData = "";
}

Temp::Temp(const Temp& temp){
	this->temperature = temp.getData();
	this->sensorName = temp.getSensorName();
	this->formatedData = temp.sendData();
}

Temp::~Temp(){}

Temp& Temp::operator=(const Temp& temp){
	this->temperature = temp.getData();
	this->sensorName = temp.getSensorName();
	this->formatedData = temp.sendData();
	return *this;
}

float Temp::getData() const{
	return this->temperature;
}

void Temp::setData(float temp){
	this->temperature = temp;
}

string Temp::sendData() const{
	return "--Temperature Sensor-- Temperature : " + to_string(this->temperature);
}
