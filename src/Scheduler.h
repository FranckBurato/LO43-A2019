#ifndef DEF_SCHEDULER
#define DEF_SCHEDULER

#include <vector.h>
#include "Server.h"

class Scheduler{
	private:
		Server server;
		vector<Sensor> sensors;
	public:
		Scheduler();
		Scheduler(Server server);
		Scheduler(const Scheduler& scheduler);
		~Scheduler();
		Scheduler& operator=(const Scheduler& scheduler);
		void run();
		Server getServer();
		void setServer(Server server);
		vector<Sensor> getSensors();
		void setSensors(vector<Sensor> sensors):
};
#endif
