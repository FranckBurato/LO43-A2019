#ifndef LIGHT_H
#define LIGHT_H
#include "Sensor.h"

class Light public Sensor
{
private:
	bool dataSens;
	virtual bool aleaGenVal (int nType){};
public:
	virtual Light(){};
	virtual Light(const Light& autre){};
	virtual Light(bool valRcv){};
	~Light();
	virtual Light& operator=(const Light& autre){};
	virtual bool sendData(){};
};

#endif
