#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cstdlib>
#include "Scheduler.h"

using namespace std;


void Scheduler::start_simulation() {
	std::chrono::milliseconds time(500);


	while (true)
	{
		tempsensor.aleaGenVal();
		humisensor.aleaGenVal();
		soundsensor.aleaGenVal();
		lightsensor.aleaGenVal();

		if (this->server.get_consolActivation()) {
			
			this->server.consoleWrite(tempsensor.sendData(), tempsensor.getSensor_type());
			this->server.consoleWrite(humisensor.sendData(), humisensor.getSensor_type());
			this->server.consoleWrite(soundsensor.sendData(), soundsensor.getSensor_type());
			this->server.consoleWrite(lightsensor.sendData(), lightsensor.getSensor_type());
		}

		if (this->server.get_logActivation()) {

			this->server.fileWrite(tempsensor.sendData(), tempsensor.getSensor_type());
			this->server.fileWrite(humisensor.sendData(), humisensor.getSensor_type());
			this->server.fileWrite(soundsensor.sendData(), soundsensor.getSensor_type());
			this->server.fileWrite(lightsensor.sendData(), lightsensor.getSensor_type());
		}
		
		std::this_thread::sleep_for(time);
	}
};