#include <cstdlib>
#include <ctime>
#include "Sound.h"
#include "Sensor.h"

Sound::Sound() : Sensor()
{
    //rien
}

Sound::~Sound()
{
    //tien
}


int Sound::aleaGenVal(int capteur)
{
    this->valSens = rand()%120;
    return valSens;
}
