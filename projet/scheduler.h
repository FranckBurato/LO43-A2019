#pragma once
#ifndef SCHEDULER_H
#define SCHEDULER_H
#include "Sensor.h"
#include "Server.h"
#include <string>
#include "time.h"
class Scheduler {
private:
	Server s;
	Sensor<float, string> t;
	Sensor<float, string> h;
	Sensor<int, string> so;
	Sensor<bool, string> l;
public :
	Scheduler() :s(4, true, true), t("temperature"), h("humdity"), so("sound"), l("light") {};
	Scheduler(const Scheduler& sche) {};
	~Scheduler() {};
	void run();
};

#endif