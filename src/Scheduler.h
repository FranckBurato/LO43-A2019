#ifndef DEF_SCHEDULER
#define DEF_SCHEDULER

#include "Server.h"
#include "Sensor.h"
#include "Light.h"
#include "Temp.h"
#include "Humidity.h"
#include "Sound.h"
#include <vector>

class Scheduler{
	private:
		Server server;
		std::vector<Sensor> sensors;
	public:
		Scheduler();
		Scheduler(bool consoleActivation, bool logActivation);
		Scheduler(Server server);
		Scheduler(const Scheduler& scheduler);
		~Scheduler();
		Scheduler& operator=(const Scheduler& scheduler);
		void run();
		Server getServer() const;
		void setServer(Server server);
		std::vector<Sensor> getSensors() const;
		void setSensors(std::vector<Sensor> sensors);
};
#endif
