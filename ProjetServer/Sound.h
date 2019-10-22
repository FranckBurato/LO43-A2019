#ifndef DEF_SOUND
#define DEF_SOUND
#include "Sensor.h"

class SoundSensor : public Sensor
{
     private:
        int inf = 0;
        int sup = 140;
        //Les attributs de Sensor sont héritées
     public:
        SoundSensor();
        ~SoundSensor();
        SoundSensor(const SoundSensor&);
        //Les methodes de Sensor sont héritées

};

#endif
