#include "Scheduler.h"
#include "Sensors/Sensor.h"
#include "Sensors/Temperature.h"
#include "Sensors/Humidity.h"
#include "Sensors/Light.h"
#include "Sensors/Sound.h"


int main() {
	// create new Scheduler
	Temperature *tempSensor = new Temperature();
	Humidity *humiditySensor = new Humidity();
	Light *lightSensor = new Light();
	Sound *soundSensor = new Sound();

	Scheduler scheduler(15,10,true,true);
	scheduler = scheduler + tempSensor + humiditySensor + lightSensor + soundSensor;
	scheduler.run();

	return 0;
}
