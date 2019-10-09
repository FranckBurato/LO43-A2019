#include <iostream>
#include "sensor.h"
using namespace std;

Sensor::Sensor(){
    valSense=aleaGenval();
}

Sensor::Sensor(const Sensor&sensor_p)
{
    this->valSense=sensor_p.valSense;
}

Sensor::Sensor(int valRcv){
    this->valSense=valRcv;
}

Sensor::~sensor(){}

Sensor& Sensor::operator=(const Sensor& sensor_p)
{
    this->valSense=sensor_p.valSense;
    return *this;
}

int Sensor::sendData()const
{
    return this->valSense;
}

int aleaGenVal(){
    return rand() %100;
}
