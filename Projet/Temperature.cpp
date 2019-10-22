#include <cstdlib>
#include <ctime>
#include "Temperature.h"
#include "Sensor.h"

Temperature::Temperature() : Sensor()
{
    //rien
}

Temperature::~Temperature()
{
    //rien
}


int Temperature::aleaGenVal(int capteur)
{
    this->valSens = rand()%40;
    return valSens;
}
