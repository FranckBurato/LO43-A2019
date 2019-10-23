#include <iostream>
#include "Sensor.h"

std::string Sensor::getSensorName() const{
	return sensorName;
}

std::string Sensor::sendData(){}

template<int>
int generateValues(int max, int min){
	std::srand(time(nullptr));
	int randT = std::rand()%(max+1) + min;
	return randT;
}


template<int>
float generateValues(float max, float min){
	std::srand(time(nullptr));
	float randF = min + (static_cast<float>(std::rand()) / static_cast<float>(RAND_MAX/(max-min)));
	return randF;
}
template<bool>		
bool generateValues(bool max, bool min){
	std::srand(time(nullptr));
	int randB = std::rand()%100;
	if(randB <= 50){
		return min;
	}else{
		return max;
	}
}
