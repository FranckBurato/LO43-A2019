#include <iostream>
#include <string>



class SoundSensor : public Sensor {
private:
	int Sensor_type;
	string valSense;

public:
	SoundSensor() : Sensor_type(3), valSense() {};

	void aleaGenVal();
	string sendData();
	int getSensor_type();
};


void SoundSensor::aleaGenVal() {
	this->valSense = to_string(rand() % 100);
};

string SoundSensor::sendData() {
	return this->valSense;
};

int SoundSensor::getSensor_type() {
	return this->Sensor_type;
};