#include <iostream>
#include "Sensor.h"
using namespace std;

class Sound : public Sensor<int>{
    public:
        string getName();
};



string Sound::getName(){
    return "Sound";
}