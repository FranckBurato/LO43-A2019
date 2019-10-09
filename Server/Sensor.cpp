#include "Sensor.h"

Sensor::Sensor(): valSense(aleaGenVal()){}

Sensor::Sensor(int v){
    this->valSense = v;
}

Sensor::Sensor(const Sensor& s){
    this->valSense = s.valSense;
}
Sensor::~Sensor(){}

int Sensor::aleaGenVal(){
    //srand(time(NULL));
    return (rand() % 100);}

int Sensor::sendData(){
    return this->valSense;
}

Sensor& Sensor::operator=(const Sensor& s){
    this->valSense = s.valSense;


    s.~Sensor();

    return *this;
}
