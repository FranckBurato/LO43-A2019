#include "Server.h"
#include "scheduler.cpp"
#include"Scheduler.h"
#include"Sensor.h"


int main() {

	Server se(5, 1, 1);       

	Scheduler sch;

	Temperature te(8);

	Humidity hu(9);

	Light li(10);

	Sound so(11);
	Temperature* ter = &te;
	Humidity* hum = &hu;
	Light* lig = &li;
	Sound* sou = &so;

	sch.inventer(se, ter, hum, lig, sou);

	system("pause");

	return 0;

}

