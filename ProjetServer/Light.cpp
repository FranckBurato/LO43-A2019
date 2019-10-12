#include <ctime>
#include <cstdlib>
#include "Light.h"

int LightSensor::aleaGenVal()
{
   srand(time(NULL));                //On va dire que c'est à moitié aléatoire lol
   int nombre = (rand() % (5000 - 0 + 1)) + 0 + rand()/2;
   return nombre = sensorData;
}


