#include "Sound.h"

Sound::Sound():data(){}

Sound::Sound(int a)
{
    data = a;
}

Sound::~Sound()
{
    //dtor
}

Sound::Sound(const Sound& other)
{
    data=other.data;
}

Sound& Sound::operator=(const Sound& other)
{
    data=other.data;
    return *this;
}

int Sound::getData(Sound& soundSens)
{
    //soundSens.data = aleaGenValue<int>(2);
    soundSens.data = aleaGenValue(2);
    return soundSens.data;
}
