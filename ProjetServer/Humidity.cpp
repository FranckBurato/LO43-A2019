#include <ctime>
#include <cstdlib>

#include "Humidity.h"

int HumiditySensor::aleaGenVal()
{
   srand(time(NULL));                
   int nombre = (rand() % (100 + 1));
   return nombre = sensorData;
}
