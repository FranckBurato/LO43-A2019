#include <iostream>
#include "Sensor.h"
using namespace std;


class Light : public Sensor<bool>{
    using Sensor<bool>::Sensor;
    public:
        string getName();
};


string Light::getName(){
    return "Light";
}