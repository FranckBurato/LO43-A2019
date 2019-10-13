#include <iostream>
#include "Sensor.h"
using namespace std;


class Sound : public Sensor{

    using Sensor::Sensor;
    
    public:
        string getName();
};