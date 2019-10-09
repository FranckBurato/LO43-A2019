#ifndef LO43_A2019_LIGHT_H
#define LO43_A2019_LIGHT_H

#include "Sensor.h"

class Light: public Sensor<bool> {
public:
    Light();
    Light(Light&) = default;

    Light& operator=(const Light&) = default;
    ~Light() = default;

private:
    bool aleaGenVal() override;

    friend class Scheduler;
};

#endif //LO43_A2019_LIGHT_H
