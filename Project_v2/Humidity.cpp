#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Humidity.h"
#include "Scheduler.h"
#include "Sensor.h"
#include "Server.h"


//Destructeur
Humidity::~Humidity()
{
    //rien
}

//fonction qui g�n�re une valeur al�atoire
float Humidity::aleaGenVal(int capteur)
{
    float minim = 0., maxim = 100.;
    float val = rand() / (float) RAND_MAX;
    float temp = maxim - minim;
    this->valSens = (val * temp) + minim;

    return valSens;
}
