#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "/Server/Server.h"
#include "/Sensors/Sensor.h"
#include <vector>

class Scheduler {
	public:
		Scheduler() : tempSensors(), humiditySensors(), soundSensors(), lightSensors();

	private:
		Server &server;
		std::vector<Sensor<float>> tempSensors;
		std::vector<Sensor<float>> humiditySensors;
		std::vector<Sensor<int>> soundSensors;
		std::vector<Sensor<bool>> lightSensors;
};

#endif // SCHEDULER_H
