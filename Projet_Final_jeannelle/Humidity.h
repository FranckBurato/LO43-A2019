#ifndef HUMIDITY_H_INCLUDED
#define HUMIDITY_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Sensor.h"


class Humidity : public Sensor
{

    public:
        Humidity();
        ~Humidity();

};

#endif // HUMIDITY_H_INCLUDED
