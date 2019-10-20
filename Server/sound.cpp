#include "sound.h"

Sound::Sound(int valRcv):Sensor<int>(valRcv){
	this->numSens = 4;
    std::cout<<"numsens sound : "<<this->numSens<<std::endl<<std::endl;
}

int Sound::getSensNumb()const{
	return this->numSens;
}
