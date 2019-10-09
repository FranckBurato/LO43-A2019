//
// Created by Alomb on 09/10/2019.
//

#ifndef SERVER_TEMPERATURE_H
#define SERVER_TEMPERATURE_H

#include "Sensor.h"

class Temperature: public Sensor<float> {
    void aleaGenVal() override;
};


#endif //SERVER_TEMPERATURE_H
