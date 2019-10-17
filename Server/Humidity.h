#include <iostream>
#include "Sensor.h"
using namespace std;



class Humidity : public Sensor<float>{
    public:
            string getName();
};



string Humidity::getName(){
    return "Humidity";
}