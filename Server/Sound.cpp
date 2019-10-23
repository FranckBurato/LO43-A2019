#include<iostream>
#include <stdlib.h>
#include <string>
#include"Sound.h"

Sound::Sound(){}

Sound::Sound(const Sound& so){}

Sound::~Sound(){}

int Sound::aleaGenVal(){
    valSense=rand() % 501;
    return valSense;
}

int Sound::sendData() const{
    return valSense;
}
