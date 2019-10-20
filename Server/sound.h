#ifndef SOUND_H
#define SOUND_H
#include "sensor.h"

class Sound: public Sensor<int>
{
	public:
		Sound();
    	Sound(int valRcv);
    	int getSensNumb()const;
};

#endif // SOUND_H
