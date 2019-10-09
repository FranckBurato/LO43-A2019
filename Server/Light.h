//
// Created by Alomb on 09/10/2019.
//

#ifndef SERVER_LIGHT_H
#define SERVER_LIGHT_H


#include "Sensor.h"

class Light: Sensor<bool> {
    void aleaGenVal() override;

};


#endif //SERVER_LIGHT_H
