#include "sensor.h"

Sensor::Sensor()
{
    valSense = aleaGenVal();
}
Sensor::Sensor(const Sensor & sensor_p){
    this->valSense=sensor_p.valSense;
}
Sensor::Sensor(int valRcv){
    this->valSense=valRcv;
}
int Sensor::aleaGenVal(){
    return (rand() % 100);
}
int Sensor::sendData()const{
    return this->valSense;
}
