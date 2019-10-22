#ifndef SOUND_H
#define SOUND_H
#include "Sensor.h"

class Sound public Sensor
{
public:
	virtual Sound(){};
	virtual Sound(const Sound& autre){};
	virtual Sound(int valRcv){};
	~Sound();
	virtual Sound& operator=(const Sound& autre){};
	virtual int sendData(){};	
};

#endif
