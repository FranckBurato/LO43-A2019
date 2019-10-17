#include <iostream>
#include "Sensor.h"
using namespace std;


class Temperature : public Sensor<float>{
    public:
        string getName();
};



string Temperature::getName(){
    return "Temperature";
}