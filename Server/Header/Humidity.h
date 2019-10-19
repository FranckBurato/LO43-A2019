//
// Created by Alomb on 09/10/2019.
//

#ifndef SERVER_HUMIDITY_H
#define SERVER_HUMIDITY_H

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


#endif //SERVER_HUMIDITY_H
