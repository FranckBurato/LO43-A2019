#ifndef DEF_TEMP
#define DEF_TEMP

#include "Sensor.h"
#include "Data.h"

class Temp : public Sensor{
	private:
		Data<float> temperature;
	public:
		Temp();
		Temp(const Temp& temp);
		~Temp();
		Temp& operator=(const Temp& temp);
		float sendData();
};
#endif
