#include <iostream>
#include "Sensor.h"
using namespace std;

class Light : public Sensor{
    using Sensor::Sensor;
    public:
        string getName();
};