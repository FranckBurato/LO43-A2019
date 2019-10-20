#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include "sensor.h"

class Temperature : public Sensor<float>
{
	public:
		Temperature();
    	Temperature(float valRcv);
    	int getSensNumb()const;

};

#endif // TEMPERATURE_H
