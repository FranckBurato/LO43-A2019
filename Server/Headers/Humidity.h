//
// Created by Alomb on 19/10/2019.
//

#ifndef LO43SERVER_HUMIDITY_H
#define LO43SERVER_HUMIDITY_H

#include "Sensor.h"

class Humidity: public Sensor<float> {
private:
    void aleaGenVal() override;

    std::string getPath() override;

public:
    Humidity();
    Humidity(const Humidity& autre);
    virtual ~Humidity();

    Humidity& operator=(const Humidity& autre);
};


#endif //LO43SERVER_HUMIDITY_H
