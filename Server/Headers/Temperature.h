//
// Created by Alomb on 20/10/2019.
//

#ifndef LO43SERVER_TEMPERATURE_H
#define LO43SERVER_TEMPERATURE_H

#include "Sensor.h"

class Temperature: public Sensor<float> {
private:
    void aleaGenVal() override;

    std::string getPath() override;

public:
    Temperature ();
    Temperature (const Temperature& autre);
    virtual ~Temperature();

    Temperature& operator=(const Temperature& autre);

};


#endif //LO43SERVER_TEMPERATURE_H
