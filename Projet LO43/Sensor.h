#include <iostream>
#include <string>



class Sensor {
protected:
	string valSense;

public:
	Sensor() : valSense() {};
	Sensor(const Sensor& sensor_p) : valSense(sensor_p.valSense) {};
	//Sensor(int valRcv);
	virtual ~Sensor() {};

	/*string sendData() {
		return this->valSense;
	};*/

	//int aleaGenVal();
};
