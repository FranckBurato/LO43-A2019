#include <iostream>
#include "Temp.h"

using namespace std;

Temp::Temp(){
	temp = 0;
	this->sensorName = "Thermometer";
}

Temp::Temp(const Temp& temp){
	this->temp = temp.getData();
	this->sensorName = temp.getSensorName();
}

Temp::~Temp(){}

Temp& Temp::operator=(const Temp& temp){
	this->temp = temp.getData();
	this->sensorName = temp.getSensorName();
	return *this;
}

std::string Temp::sendData(){
	return "-Thermometer- Temperature (°C) : " + to_string(generateValues<float>(0, 40));
}

float Temp::getData() const{
	return temp;
}

