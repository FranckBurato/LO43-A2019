#include <iostream>
#include "Sensor.h"
using namespace std;

class Sound : public Sensor<int>{

    using Sensor<int>::Sensor;
    
    public:
        string getName();
};



string Sound::getName(){
    return "Sound";
}