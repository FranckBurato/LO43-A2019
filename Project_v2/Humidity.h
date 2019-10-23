#ifndef HUMIDITY_H
#define HUMIDITY_H
#include "Sensor.h"


class Humidity : public Sensor<float>              //Humidity est la classe dérivée de la classe Sensor
{
    public:

        Humidity():Sensor<float>(){};
        ~Humidity();

        float aleaGenVal(int capteur);

};

#endif // HUMIDITY_H
