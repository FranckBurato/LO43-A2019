#include <cstdlib>
#include <ctime>
#include "Temperature.h"
#include "Sensor.h"

//Destructeur
Temperature::~Temperature()
{
    //rien
}


//fonction qui génère une valeur aléatoire
float Temperature::aleaGenVal(int capteur)
{
    float minim = -10, maxim = 40.;
    float val = rand() / (float) RAND_MAX;
    float temp = maxim - minim;
    this->valSens = (val * temp) + minim;

    return valSens;
}
