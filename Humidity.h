#ifndef HUMIDITY_H
#define HUMIDITY_H
#include "Sensor.h"

class Humidity public Sensor
{
private:
	float dataSens;
	virtual float aleaGenVal (int nType){};
public:
	virtual Humidity(){};
	virtual Humidity(const Humidity& autre){};
	virtual Humidity(float valRcv){};
	~Humidity();
	virtual Humidity& operator=(const Humidity& autre){};
	virtual float sendData(){};
};

#endif
