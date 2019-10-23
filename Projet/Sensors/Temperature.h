#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include "../Sensors/Sensor.h"
#include <string>

class Temperature : public Sensor<float> {
	public:
		Temperature();
		Temperature(const Temperature &temperature);
		Temperature &operator=(const Temperature &temperature);
		virtual ~Temperature();
		std::string getValue();
};

#endif // TEMPERATURE_H
