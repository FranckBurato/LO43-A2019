#ifndef DEF_HUMIDITY
#define DEF_HUMIDITY

#include "Sensor.h"

class Humidity : public Sensor<float>{
	public:
		Humidity();
		Humidity(const Humidity& humid);
		~Humidity();
		Humidity& operator=(const Humidity& humid);
		float getData();
};
#endif
