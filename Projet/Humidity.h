#ifndef HUMIDITY_H
#define HUMIDITY_H
#include "Sensor.h"

class Humidity : public Sensor             //Humidity est la classe d�riv�e de la classe Sensor
{
    public:

        Humidity();
        ~Humidity();

        int aleaGenVal(int capteur);

};

#endif // HUMIDITY_H
