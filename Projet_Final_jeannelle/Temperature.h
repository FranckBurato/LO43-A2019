#ifndef TEMPERATURE_H_INCLUDED
#define TEMPERATURE_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Sensor.h"

class Temperature: public Sensor
{

    public:
        Temperature();
        ~Temperature();

};

#endif // TEMPERATURE_H_INCLUDED
