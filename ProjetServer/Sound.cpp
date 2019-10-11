#include <ctime>
#include <cstdlib>

#include "Sound.h"

int SoundSensor::aleaGenVal()
{
   srand(time(NULL));                
   int nombre = (rand() % (194 + 1));
   return nombre;
}