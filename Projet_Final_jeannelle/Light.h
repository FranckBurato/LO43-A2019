#ifndef LIGHT_H_INCLUDED
#define LIGHT_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Sensor.h"

class Light : public Sensor//<bool>
{
    public:
        Light();
        ~Light();

};


#endif // LIGHT_H_INCLUDED
