#ifndef DEF_SOUND
#define DEF_SOUND

#include "Sensor.h"

class SoundSensor : public Sensor
{
     private:
        //Les attributs de Sensor sont héritées
     public:
       SoundSensor();
       SoundSensor(SoundSensor &);
       SoundSensor &operator=(const SoundSensor &);
       ~SoundSensor(); //Les methodes de Sensor sont héritées
       
       int aleaGenVal();
};

#endif
