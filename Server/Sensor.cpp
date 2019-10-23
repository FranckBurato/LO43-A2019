#include<iostream>
#include<string>
#include"sensor.h"

using namespace std;

Sensor::Sensor(){
    this->valSense = 0;
}

Sensor::Sensor(const Sensor& sensor_p){
    this->valSense=s.valSense;
}

Sensor::Sensor(int valRcv){
    this->valSense=valRcv;
}

Sensor::~Sensor() {}

Sensor::int sendData() const{
    return valSense;
}

Sensor::int aleaGenVal(){
    valSense = rand()%101;
    return valSense;
}
