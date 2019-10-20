#include "humidity.h"

Humidity::Humidity(float valRcv): Sensor<float>(valRcv){
	this->numSens = 2;
    std::cout<<"numsens humidity : "<<this->numSens<<std::endl<<std::endl;
}

int Humidity::getSensNumb()const{
	return this->numSens;
}
