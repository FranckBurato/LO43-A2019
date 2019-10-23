#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "Server/Server.h"
#include "Sensors/Sensor.h"
#include <vector>

class Scheduler {
	public:
        Scheduler();
        Scheduler(const Scheduler &scheduler);
        Scheduler(int sDuration, int nbGets);
        Scheduler(int sDuration, int nbGets, bool consolActivation, bool logActivation);
        Scheduler(bool consolActivation, bool logActivation);
        Scheduler & operator=(const Scheduler &scheduler);
        virtual ~Scheduler();

        Scheduler &operator+(SensorInterface *sensor);

        virtual void run();
	private:
		Server server;
		std::vector<SensorInterface *> sensors;
		int sDuration;
		int nbGets;
};

#endif // SCHEDULER_H
