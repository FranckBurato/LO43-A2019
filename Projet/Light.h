#ifndef LIGHT_H
#define LIGHT_H
#include "Sensor.h"

class Light : public Sensor
{             //Light est la classe d�riv�e de la classe Sensor;
    public:

        Light();
        ~Light();

        int aleaGenVal(int capteur);

};

#endif // LIGHT_H
