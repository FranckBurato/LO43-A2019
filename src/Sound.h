#ifndef DEF_SOUND
#define DEF_SOUND

#include "Sensor.h"

class Sound : public Sensor<int>{
	private:
		int sound;
	public:
		Sound();
		Sound(const Sound& sound);
		~Sound();
		Sound& operator=(const Sound& sound);
		int getData();
};
#endif
