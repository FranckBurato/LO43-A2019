#include <cstdlib>
#include <ctime>
#include "Sound.h"
#include "Sensor.h"

//Destructeur
Sound::~Sound()
{
    //tien
}


//Fonction qui g�n�re une valeur al�atoire
int Sound::aleaGenVal(int capteur)
{
    this->valSens = rand()%120;
    return valSens;
}
