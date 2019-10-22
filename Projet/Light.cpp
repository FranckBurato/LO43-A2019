#include <cstdlib>
#include <ctime>
#include "Light.h"
#include "Sensor.h"
#include "Server.h"


Light::Light() : Sensor()
{
    //rien
}

Light::~Light()
{
    //rien
}

int Light::aleaGenVal(int capteur)
{
    this->valSens = rand()%2;

    return valSens;
}
