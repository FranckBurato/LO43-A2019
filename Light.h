#ifndef DEF_LIGHT
#define DEF_LIGHT

#include "Sensor.h"

class LightSensor : public Sensor
{
     private:
       int inf = 0;
       int sup = 10000;
        //Les attributs de Sensor sont héritées
     public:
        //Les methodes de Sensor sont héritées

};

#endif
