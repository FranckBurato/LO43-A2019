
#ifndef Temperature_h
#define Temperature_h

#include <iostream>
#include "Sensor.h"

using namespace std;

class Temperature: public Sensor {
private:
    float valSense;
public:
    Temperature();
    Temperature(const Temperature& t);
    ~Temperature();
    float aleaGenVal();
    float sendData() const;
};

#endif /* Temperature_h */
