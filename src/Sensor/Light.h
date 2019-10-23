#ifndef LO43_A2019_LIGHT_H
#define LO43_A2019_LIGHT_H

#include "Sensor.h"

class Light : public Sensor<bool> {
protected:
    bool aleaGenVal() override;

    friend class Scheduler;

public:
    Light();

    Light(const Light &) = default;

    Light &operator=(const Light &) = default;

    ~Light() = default;
};

#endif //LO43_A2019_LIGHT_H
