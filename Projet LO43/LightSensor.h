#include <iostream>
#include <string>



class LightSensor : public Sensor {
private:
	int Sensor_type;
	string valSense;

public:
	LightSensor() : Sensor_type(4), valSense() {};

	void aleaGenVal();
	string sendData();
	int getSensor_type();
};

void LightSensor::aleaGenVal() {
	this->valSense = to_string(rand() % 2);
};

string LightSensor::sendData() {
	return this->valSense;
};

int LightSensor::getSensor_type() {
	return this->Sensor_type;
};