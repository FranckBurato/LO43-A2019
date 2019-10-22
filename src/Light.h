#ifndef DEF_LIGHT
#define DEF_LIGHT

#include "Sensor.h"

class Light : public Sensor<bool>{
	private:
		bool isLight;
	public:
		Light();
		Light(const Light& light);
		~Light();
		Light& operator=(const Light& light);
		bool getData();
};
#endif
