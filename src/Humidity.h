#ifndef DEF_HUMIDITY
#define DEF_HUMIDITY

#include "Sensor.h"

class Humidity : public Sensor{
	private:
		float humid;
	public:
		Humidity();
		Humidity(const Humidity& humid);
		~Humidity();
		Humidity& operator=(const Humidity& humid);
		std::string sendData();
		float getData() const;
};
#endif
