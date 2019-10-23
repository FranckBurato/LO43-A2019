#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include "Sensor.h"

class Temperature public Sensor
{
private:
	float dataSens;
	virtual float aleaGenVal (int nType){};
public:
	virtual Temperature(){};
	virtual Temperature(const Temperature& autre){};
	virtual Temperature(float valRcv){};
	~Temperature();
	virtual Temperature& operator=(const Temperature& autre){};
	virtual float sendData(){};
};

#endif
