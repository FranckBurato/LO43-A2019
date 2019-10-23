#ifndef LO43_A2019_HUMIDITY_H
#define LO43_A2019_HUMIDITY_H

#include "Sensor.h"

class Humidity : public Sensor<float> {
protected:
    float aleaGenVal() override;

    friend class Scheduler;

public:
    Humidity();

    Humidity(const Humidity &) = default;

    Humidity &operator=(const Humidity &) = default;

    ~Humidity() = default;
};

#endif //LO43_A2019_HUMIDITY_H
