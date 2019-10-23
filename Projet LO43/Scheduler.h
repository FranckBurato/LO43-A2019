#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include "server.cpp"
#include "TempSensor.h"
#include "HumiSensor.h"
#include "SoundSensor.h"
#include "LightSensor.h"

using namespace std::chrono;

class Scheduler {
private:
	Server server;
	TempSensor tempsensor;
	HumiSensor humisensor;
	SoundSensor soundsensor;
	LightSensor lightsensor;
	std::chrono::milliseconds time_tempsensor;
	std::chrono::milliseconds time_humisensor;
	std::chrono::milliseconds time_soundsensor;
	std::chrono::milliseconds time_lightsensor;

public:
	Scheduler() : time_tempsensor(500), time_humisensor(500), time_soundsensor(500), time_lightsensor(500), server(), tempsensor(), humisensor(), soundsensor(), lightsensor() {};

	void start_simulation();

};
