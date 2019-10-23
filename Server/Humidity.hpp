#ifndef HUMIDITY_H
#define HUMIDITY_H

#include <iostream>
#include "Sensor.h"

using namespace std;

class Humidity: public Sensor {
private:
    float valSense;
public:
    Humidity();
    Humidity(const Humidity& h);
    ~Humidity();
    float aleaGenVal();
    float sendData() const;
};

#endif /* Humidity_h */
