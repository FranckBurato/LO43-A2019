//
// Created by Alomb on 20/10/2019.
//

#ifndef LO43SERVER_SENSORINTERFACE_H
#define LO43SERVER_SENSORINTERFACE_H


#include "Data.h"

class SensorInterface {
public:
    virtual Data& sendData()=0;
};


#endif //LO43SERVER_SENSORINTERFACE_H
