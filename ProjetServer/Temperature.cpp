#include <ctime>
#include <cstdlib>

#include "Temperature.h"

int TemperatureSensor::aleaGenVal()
{
    srand(time(NULL));                
    int nombre = (rand() % (60 - (-20) + 1)) + (-20);
    return nombre = sensorData;
}
