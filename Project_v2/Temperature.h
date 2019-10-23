#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include "Sensor.h"


class Temperature : public Sensor<float>       //Temperature est d�riv�e de la classe Sensor
{
    public:

        Temperature():Sensor<float>(){};
        ~Temperature();

        float aleaGenVal(int capteur);
};

#endif // TEMPERATURE_H
