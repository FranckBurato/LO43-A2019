#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Sensor.h"


using namespace std;
class Light : public Sensor{
    public:
        int valSense;
        int sendData();
};  