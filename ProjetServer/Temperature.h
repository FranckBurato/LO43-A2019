#ifndef DEF_TEMPERATURE
#define DEF_TEMPERATURE

#include "Sensor.h"

class TemperatureSensor : public Sensor
{
     private:
        //Les attributs de Sensor sont héritées
     public:
        TemperatureSensor();
        TemperatureSensor(TemperatureSensor &);
        TemperatureSensor &operator=(const TemperatureSensor &);   
        ~TemperatureSensor();   //Les methodes de Sensor sont héritées

        int aleaGenVal();
};

#endif
