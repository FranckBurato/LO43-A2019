#ifndef SOUND_H_INCLUDED
#define SOUND_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Sensor.h"

class Sound: public Sensor
{
    public:
        Sound();
        ~Sound();
};


#endif // SOUND_H_INCLUDED
