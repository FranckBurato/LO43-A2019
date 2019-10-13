#include <iostream>
#include "Sensor.h"
using namespace std;

class Temperature : public Sensor{
    using Sensor::Sensor;


    public:
        string getName();
};