#include <iostream>
#include "Sensor.h"
using namespace std;


class Temperature : public Sensor<float>{
    using Sensor<float>::Sensor;


    public:
        string getName();
};



string Temperature::getName(){
    return "Temperature";
}