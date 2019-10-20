//
// Created by Alomb on 20/10/2019.
//

#ifndef LO43SERVER_LIGHT_H
#define LO43SERVER_LIGHT_H

#include "Sensor.h"

class Light: public Sensor<bool> {
private:
    void aleaGenVal() override;

    std::string getPath() override;

public:
    Light();
    Light(const Light& autre);
    virtual ~Light();

    Light& operator=(const Light& autre);
};


#endif //LO43SERVER_LIGHT_H
