#ifndef DEF_LIGHT
#define DEF_LIGHT

#include "Sensor.h"
#include "Data.h"

class Light : public Sensor{
	private:
		Data<bool> isLight;
	public:
		Light();
		Light(const Light& light);
		~Light();
		Light& operator=(const Light& light);
		bool sendData();
};
#endif
