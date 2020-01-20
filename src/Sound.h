#ifndef DEF_SOUND
#define DEF_SOUND

#include "Sensor.h"

class Sound : public Sensor{
	private:
		int sound;
	public:
		Sound();
		Sound(const Sound& sound);
		~Sound();
		Sound& operator=(const Sound& sound);
		std::string sendData();
		int getData() const;
};
#endif
