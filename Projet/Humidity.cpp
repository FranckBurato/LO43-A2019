#include <cstdlib>
#include <ctime>
#include "Humidity.h"
#include "Scheduler.h"
#include "Sensor.h"


Humidity::Humidity() : Sensor()
{
    //rien
}

Humidity::~Humidity()
{
    //rien
}

int Humidity::aleaGenVal(int capteur)
{
    this->valSens = rand()%101;
    return valSens;
}
