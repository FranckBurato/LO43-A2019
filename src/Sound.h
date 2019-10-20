#ifndef DEF_SOUND
#define DEF_SOUND

#include "Sensor.h"
#include "Data.h"

class Sound : public Sensor{
	private:
		Data<int> sound;
	public:
		Sound();
		Sound(const Sound& sound);
		~Sound();
		Sound& operator=(const Sound& sound);
		int sendData();
};
#endif
