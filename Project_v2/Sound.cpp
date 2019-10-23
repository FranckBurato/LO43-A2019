#include <cstdlib>
#include <ctime>
#include "Sound.h"
#include "Sensor.h"

//Destructeur
Sound::~Sound()
{
    //tien
}


//Fonction qui génère une valeur aléatoire
int Sound::aleaGenVal(int capteur)
{
    this->valSens = rand()%120;
    return valSens;
}
