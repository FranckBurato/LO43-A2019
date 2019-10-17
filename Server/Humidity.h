#include <iostream>
#include "Sensor.h"
using namespace std;



class Humidity : public Sensor<float>{
    using Sensor<float>::Sensor;
    public:
            string getName();
};



string Humidity::getName(){
    return "Humidity";
}