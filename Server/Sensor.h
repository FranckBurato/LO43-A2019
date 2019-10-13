#ifndef SENSOR_H
#define SENSOR_H
#include <iostream>
#include <time.h>


using namespace std;

class Sensor{

    private:
        int valSense;
        int aleaGenVal();

    public:
        //forme canonique
        Sensor();
        Sensor(int i);
        Sensor(const Sensor&);
        ~Sensor();
        Sensor& operator=(const Sensor&);
        
        int sendData();
        void resetValue();
        virtual string getName()=0;

};

#endif