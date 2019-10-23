

#ifndef Light_hpp
#define Light_hpp

#include <iostream>
#include "Sensor.h"

using namespace std;

class Light: public Sensor {
private:
    bool valSense;
public:
    Light();
    Light(const Light& l);
    ~Light();
    bool aleaGenVal();
    bool sendData() const;
};


#endif /* Light_hpp */
