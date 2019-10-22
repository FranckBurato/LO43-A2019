#ifndef SCHEDULER_H
#define SCHEDULER_H
#include "Server.h"
#include "Humidity.h"
#include "Temperature.h"
#include "Light.h"
#include "Sound.h"

class Scheduler
{
private:
	Server server;
	Sensor sensor;
public:
	Scheduler()
	{
		Server();
		Sensor();
	};
	Scheduler(const Scheduler& autre)
	{
		this->server=autre.server;
		this->sensor=autre.sensor;
		return *this;
	};
	~Sheduler(){};
};

#endif
