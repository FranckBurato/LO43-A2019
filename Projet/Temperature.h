#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include "Sensor.h"


class Temperature : public Sensor     //Temperature est d�riv�e de la classe Sensor
{
    public:

        Temperature();
        ~Temperature();

        int aleaGenVal(int capteur);

    private:

};

#endif // TEMPERATURE_H
