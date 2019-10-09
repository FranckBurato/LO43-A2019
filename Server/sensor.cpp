#include "sensor.h"

Sensor::Sensor()
{
    valSense = aleaGenVal();
}
Sensor::Sensor(int valRcv){
    this->valSense=valRcv;
}
Sensor::aleaGenVal(){
    return rand() %100;
}
int Sensor::sendData()const{
    return this->valSense;
}
