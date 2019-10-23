#include <string>
#include <stdlib.h>
#include<iostream>
#include"Light.h"

Light::Light(){}

Light::Light(const Light& l){}

Light::~Light(){}

bool Light::aleaGenVal(){
    valSense=rand() % 2;
    return valSense;
}

int Light::sendData() const{
    return valSense;
}
