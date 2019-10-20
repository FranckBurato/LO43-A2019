#ifndef LIGHT_H
#define LIGHT_H
#include "sensor.h"
class Light: public Sensor<bool>
{
	public:
		Light();
    	Light(bool valRcv);
    	int getSensNumb()const;
};

#endif // LIGHT_H
