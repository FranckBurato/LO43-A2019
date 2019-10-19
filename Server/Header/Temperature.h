//
// Created by Alomb on 09/10/2019.
//

#ifndef SERVER_TEMPERATURE_H
#define SERVER_TEMPERATURE_H

#include "Header/Sensor.h"

class Temperature: public Sensor <float> {
private:
    void aleaGenVal() override;

    std::string getPath() override;

public:
    Temperature ();
    Temperature (const Temperature& autre);
    virtual ~Temperature();

    Temperature& operator=(const Temperature& autre);

};


#endif //SERVER_TEMPERATURE_H
