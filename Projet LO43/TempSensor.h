#include <iostream>
#include <string>

#include "Sensor.h"


class TempSensor : public Sensor {
private:
	int Sensor_type;
	string valSense;

public:
	TempSensor() : Sensor_type(1), valSense() {};

	void aleaGenVal();
	string sendData();
	int getSensor_type();

};

void TempSensor::aleaGenVal() {

	this->valSense = to_string((float)rand() / (float)RAND_MAX *1000);
};

string TempSensor::sendData() {
	return this->valSense;
};

int TempSensor::getSensor_type() {
	return this->Sensor_type;
};