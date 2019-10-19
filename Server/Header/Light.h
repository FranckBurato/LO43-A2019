//
// Created by Alomb on 09/10/2019.
//

#ifndef SERVER_LIGHT_H
#define SERVER_LIGHT_H


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


#endif //SERVER_LIGHT_H
