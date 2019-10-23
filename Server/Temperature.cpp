#include <iostream>
#include <stdlib.h>
#include <string>
#include "Temperature.hpp"

using namespace std;

Temperature::Temperature(){}

Temperature::Temperature(const Temperature& t){}

Temperature::~Temperature(){}

float Temperature::aleaGenVal(){
    valSense=50 * rand()/(RAND_MAX+1);
    return valSense;
}

float Temperature::sendData() const{
    return valSense;
}
