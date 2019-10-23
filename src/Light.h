#ifndef DEF_LIGHT
#define DEF_LIGHT

#include "Sensor.h"

class Light : public Sensor{
	private:
		bool isLight;
	public:
		Light();
		Light(const Light& light);
		~Light();
		Light& operator=(const Light& light);
		std::string sendData();
		bool getData() const;
};
#endif
