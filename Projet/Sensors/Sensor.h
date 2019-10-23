#ifndef SENSOR_H
#define SENSOR_H

#include <stdlib.h>
#include <random>
#include <ctime>
#include "SensorInterface.h"

// typename
template <typename T> class Sensor : public SensorInterface {
	public:
		Sensor() : value(), id(), type(), interval(1), timeToSend() {}
        Sensor(int interval) : value(), id(), type(), interval(interval), timeToSend() {}
		Sensor(const Sensor &sensor) : value(sensor.value), id(sensor.id), type(sensor.type), interval(sensor.interval), timeToSend() {}
		Sensor &operator=(const Sensor &sensor) {
		    this->value = sensor.value;
		    this->id = sensor.id;
		    this->type = sensor.type;
		    this->interval = sensor.interval;
		    this->timeToSend = 0;
		    return *this;
		}
		virtual ~Sensor() {}

		int getId() {
		    return this->id;
		}
		std::string getPath() {
            return this->path;
		}
		std::string getType() {
		    return this->type;
		}
    bool canSend() {
            if(timeToSend == 0) {
                timeToSend = interval;
                return true;
            }
            timeToSend--;
            return false;
		}
    virtual std::string getValue()=0;
private:
    int timeToSend;
protected:
    T generateValue(int min, int max) {
		    srand(time(0));

            return rand() % (max + 1) + min;
		}
    std::string value;
		int id;
		int interval;
		std::string path;
		std::string type;
};

#endif // SENSOR_H
