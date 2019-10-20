#include "temperature.h"

Temperature::Temperature(float valRcv):Sensor<float>(valRcv){
	
	this->numSens = 1;
    std::cout<<"numsens temperature : "<<this->numSens<<std::endl<<std::endl<<std::endl;
}

int Temperature::getSensNumb()const{
	return this->numSens;
}


