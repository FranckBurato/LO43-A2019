#ifndef SENSOR_H
#define SENSOR_H

#include<iostream>
#include<string>

using namespace std;

class Sensor {
public:
    Sensor();
    Sensor(const Sensor& sensor_p);
    Sensor(int valRcv);
    virtual ~Sensor();
    int sendData() const;
    int aleaGenVal();

private:
    int valSense;

};

#endif //SENSOR_H
