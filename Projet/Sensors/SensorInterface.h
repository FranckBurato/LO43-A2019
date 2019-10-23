//
// Created by Antoine on 22/10/2019.
//

#ifndef PROJET_SENSORINTERFACE_H
#define PROJET_SENSORINTERFACE_H

#include <string>

class SensorInterface {
public:
    virtual int getId()=0;
    virtual std::string getPath()=0;
    virtual std::string getType()=0;
    virtual std::string getValue()=0;
    virtual bool canSend()=0;
};

#endif //PROJET_SENSORINTERFACE_H
