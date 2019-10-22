#ifndef DEF_TEMP
#define DEF_TEMP

#include "Sensor.h"

class Temp : public Sensor<float>{
	public:
		Temp();
		Temp(const Temp& temp);
		~Temp();
		Temp& operator=(const Temp& temp);
};
#endif
