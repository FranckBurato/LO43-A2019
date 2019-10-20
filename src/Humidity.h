#ifndef DEF_HUMIDITY
#define DEF_HUMIDITY

#include "Sensor.h"
#include "Data.h"

class Humidity : public Sensor{
	private:
		Data<float> humid;
	public:
		Humidity();
		Humidity(const Humidity& humid);
		~Humidity();
		Humidity& operator=(const Humidity& humid);
		float sendData();
};
#endif
