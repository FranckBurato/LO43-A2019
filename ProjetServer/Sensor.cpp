#include "Sensor.h"

Sensor::Sensor()
{}
Sensor::Sensor(const Sensor&)
{}
Sensor::~Sensor()
{}

int Sensor::sendData()
{
  dataRcv = sensorData;
  return this -> sensorData;  
}

