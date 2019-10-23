#ifndef LIGHT_H
#define LIGHT_H

#include "../Sensors/Sensor.h"

class Light : public Sensor<bool> {
	public:
        Light();
        Light(const Light &light);
        Light &operator=(const Light &light);
        virtual ~Light();
        std::string getValue();
};

#endif // LIGHT_H
