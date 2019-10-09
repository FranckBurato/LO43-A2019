//
// Created by Alomb on 09/10/2019.
//

#ifndef SERVER_HUMIDITY_H
#define SERVER_HUMIDITY_H

#include "Sensor.h"

class Humidity: public Sensor<float> {
    void aleaGenVal() override;

};


#endif //SERVER_HUMIDITY_H
