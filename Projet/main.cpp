#include "Scheduler.h"
#include "Sensors/Sensor.h"
#include "Sensors/Temperature.h"
#include "Sensors/Humidity.h"
#include "Sensors/Light.h"
#include "Sensors/Sound.h"


int main() {
	// create new Scheduler
	Temperature *tempSensor = new Temperature(5*100); // in MS
	Humidity *humiditySensor = new Humidity(2*100);
	Light *lightSensor = new Light(1*100);
	Sound *soundSensor = new Sound(3*100);

	Scheduler scheduler(10*100,true,true); // in MS
	scheduler = scheduler + tempSensor + humiditySensor + lightSensor + soundSensor;
	scheduler.run();

	return 0;
}
