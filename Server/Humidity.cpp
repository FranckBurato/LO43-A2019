#include "Humidity.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

Humidity::Humidity(){}

Humidity::Humidity(const Humidity& h){}

Humidity::~Humidity(){}

float Humidity::Humidity(){
    valSense=50 * rand()/(RAND_MAX+1);
    return valSense;
}

float Humidity::sendData() const{
    return valSense;
}
