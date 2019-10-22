#ifndef DEF_HUMIDITY
#define DEF_HUMIDITY

#include "Sensor.h"

class Humidity : public Sensor<float>{
	private:
		float humid;
	public:
		Humidity();
		Humidity(const Humidity& humid);
		~Humidity();
		Humidity& operator=(const Humidity& humid);
		float getData() const;
		void setData(float humid);
		std::string sendData() const;
};
#endif
