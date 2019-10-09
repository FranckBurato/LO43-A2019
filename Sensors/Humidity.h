#ifndef HUMIDITY_H
#define HUMIDITY_H

#include "../Sensors/Sensor.h"

class Humidity : public Sensor<float> {
	public:
		Humidity();
};

#endif // HUMIDITY_H
