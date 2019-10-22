#include "Sensor.h"
#include "server.h"
#include "Scheduler.h"
int main()
{
	Scheduler a;
	a.begin();
	a.run();
	return 0;
}