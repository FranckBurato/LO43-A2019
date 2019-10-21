#include <ctime>
#include <cstdlib>

#include "Sensor.h"

Sensor::Sensor()
{}
Sensor::Sensor(const Sensor&)
{}
Sensor::~Sensor()
{}

void Sensor::aleaGenVal()
{
    srand(time(NULL));
    this->sensorData = (rand() % (this->sup - (this->inf) + 1)) + (this->inf);
}

