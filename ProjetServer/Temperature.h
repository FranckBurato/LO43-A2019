#ifndef DEF_TEMPERATURE
#define DEF_TEMPERATURE
#include "Sensor.h"

class TemperatureSensor : public Sensor
{
     private:
        int inf = -20;
        int sup = 60; 
        //Les attributs de Sensor sont héritées
     public:
        TemperatureSensor();
        ~TemperatureSensor();
        TemperatureSensor(const TemperatureSensor&);
        //Les methodes de Sensor sont héritées

};

#endif
