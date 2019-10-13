#include <iostream>
#include "Sensor.h"
using namespace std;



class Humidity : public Sensor{
    using Sensor::Sensor;
    public:
            string getName();
};