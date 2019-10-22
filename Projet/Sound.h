#ifndef SOUND_H
#define SOUND_H
#include "Sensor.h"

class Sound : public Sensor            //Sound est la classe dérivée de la classe Sensor
{
    public:
        Sound();
        ~Sound();

        int aleaGenVal(int capteur);
};

#endif // SOUND_H
