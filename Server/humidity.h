#ifndef HUMIDITY_H
#define HUMIDITY_H
#include "sensor.h"

class Humidity: public Sensor<float>
{
	public:
		Humidity();
    	Humidity(float valRcv);
    	int getSensNumb()const;
};

#endif // HUMIDITY_H
