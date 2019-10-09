#include "Sensor.h"

Sensor::Sensor(): valSense(){}

Sensor::Sensor(int v){
    this->valSense = v;
}

Sensor::Sensor(const Sensor& s){
    this->valSense = s.valSense;
}
Sensor::~Sensor(){}

int Sensor::aleaGenVal(){
    srand((unsigned)time(0));
    return -30 + (-30 - 100) * ((double)rand()/(double)RAND_MAX);
}

int Sensor::sendData(){
    return this->valSense;
}

Sensor& Sensor::operator=(const Sensor& s){
    this->valSense = s.valSense;


    s.~Sensor();

    return *this;
}
