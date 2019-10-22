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
        LightSensor();
        ~LightSensor();
        LightSensor(const LightSensor&);
        //Les methodes de Sensor sont héritées

};

#endif
