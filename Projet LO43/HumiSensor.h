#include <iostream>
#include <string>


class HumiSensor : public Sensor {
private:
	int Sensor_type;
	string valSense;

public:
	HumiSensor() : Sensor_type(2), valSense() {};

	void aleaGenVal();
	string sendData();
	int getSensor_type();
};

void HumiSensor::aleaGenVal() {
	this->valSense = to_string((float)rand() / (float)RAND_MAX * 1000);
};

string HumiSensor::sendData() {
	return this->valSense;
};

int HumiSensor::getSensor_type() {
	return this->Sensor_type;
};