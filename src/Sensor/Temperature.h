#ifndef LO43_A2019_TEMPERATURE_H
#define LO43_A2019_TEMPERATURE_H

#include "Sensor.h"

class Temperature : public Sensor<float> {
protected:
    float aleaGenVal() override;

    friend class Scheduler;

public:
    Temperature();

    Temperature(Temperature &) = default;

    Temperature &operator=(const Temperature &) = default;

    ~Temperature() = default;
};

#endif //LO43_A2019_TEMPERATURE_H
