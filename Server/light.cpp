#include "light.h"

Light::Light(bool valRcv):Sensor<bool>(valRcv){
	this->numSens = 3;
    std::cout<<"numsens light : "<<this->numSens<<std::endl<<std::endl;
}

int Light::getSensNumb()const{
	return this->numSens;
}
