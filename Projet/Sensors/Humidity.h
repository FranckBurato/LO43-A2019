#ifndef HUMIDITY_H
#define HUMIDITY_H

#include "../Sensors/Sensor.h"

class Humidity : public Sensor<float> {
	public:
        Humidity();
        Humidity(int interval);
        Humidity(const Humidity &humidity);
        Humidity &operator=(const Humidity &humidity);
        virtual ~Humidity();
        std::string getValue();
};

#endif // HUMIDITY_H
