#ifndef LO43_A2019_HUMIDITY_H
#define LO43_A2019_HUMIDITY_H

#include "Sensor.h"

class Humidity: public Sensor<float> {
public:
    Humidity();
    Humidity(Humidity&) = default;

    Humidity& operator=(const Humidity&) = default;
    ~Humidity() = default;

private:
    float aleaGenVal() override;

    friend class Scheduler;
};

#endif //LO43_A2019_HUMIDITY_H
