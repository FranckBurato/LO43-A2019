#ifndef DEF_TEMP
#define DEF_TEMP

#include "Sensor.h"

class Temp : public Sensor<float>{
	private:
		float temperature;
	public:
		Temp();
		Temp(const Temp& temp);
		~Temp();
		Temp& operator=(const Temp& temp);
		float getData() const;
		void setData(float temp);
		std::string sendData() const;
};
#endif
