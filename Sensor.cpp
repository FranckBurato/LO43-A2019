#include "Sensor.h"
#include <time.h>
//constructeur par défaut 

Sensor::Sensor():
    valSense(aleaGenVal()){}


Sensor::Sensor(int valSense){
    this->valSense = valSense;
}

Sensor::Sensor(const Sensor& sensor){
    this->valSense = sensor.valSense;
}

Sensor& Sensor:: operator=(const Sensor& sensor){
    this->valSense = sensor.valSense;
    return *this;
}

Sensor::~Sensor(){
}

//methodes : 
int Sensor::sendData(){
    valSense = aleaGenVal();
    return this->valSense;
};

int Sensor::aleaGenVal(){

    return rand() %100;
};
