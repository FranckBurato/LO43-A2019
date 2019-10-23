#ifndef DEF_TEMP
#define DEF_TEMP

#include "Sensor.h"

class Temp : public Sensor{
	private:
		float temp;
	public:
		Temp();
		Temp(const Temp& temp);
		~Temp();
		Temp& operator=(const Temp& temp);
		std::string sendData();
		float getData() const;
};
#endif
