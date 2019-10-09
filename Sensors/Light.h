#ifndef LIGHT_H
#define LIGHT_H

#include "../Sensors/Sensor.h"

class Light : public Sensor<bool> {
	public:
		Light();
};

#endif // LIGHT_H
