#ifndef SENSOR_H
#define SENSOR_H
#include <iostream>

using namespace std;

class Sensor{

    private:
        int valSense;
        int aleaGenVal();

    public:
        //forme canonique
        Sensor();
        Sensor(int);
        Sensor(const Sensor&);
        ~Sensor();
        Sensor& operator=(const Sensor&);
        int sendData();


};

#endif