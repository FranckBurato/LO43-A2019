#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include "../Sensors/Sensor.h"

class Temperature : public Sensor<float> {
	public:
		Temperature();
};

#endif // TEMPERATURE_H
