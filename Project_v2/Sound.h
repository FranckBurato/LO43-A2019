#ifndef SOUND_H
#define SOUND_H
#include "Sensor.h"

class Sound : public Sensor<int>             //Sound est la classe dérivée de la classe Sensor
{
    public:
        Sound():Sensor<int>(){};
        ~Sound();

        int aleaGenVal(int capteur);
};

#endif // SOUND_H
