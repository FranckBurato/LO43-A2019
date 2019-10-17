#ifndef DEF_LIGHT
#define DEF_LIGHT

#include "Sensor.h"

class LightSensor : public Sensor
{
     private:
        //Les attributs de Sensor sont héritées
     public:
        LightSensor();
        LightSensor(LightSensor &);
        LightSensor &operator=(const LightSensor &);
        ~LightSensor(); //Les methodes de Sensor sont héritées
        
        int aleaGenVal();
         

};

#endif
