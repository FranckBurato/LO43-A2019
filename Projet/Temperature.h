#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include "Sensor.h"


class Temperature : public Sensor     //Temperature est dérivée de la classe Sensor
{
    public:

        Temperature();
        ~Temperature();

        int aleaGenVal(int capteur);

    private:

};

#endif // TEMPERATURE_H
