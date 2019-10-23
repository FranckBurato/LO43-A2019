#ifndef SOUND_H
#define SOUND_H


#include "../Sensors/Sensor.h"

class Sound : public Sensor<int> {
	public:
        Sound();
        Sound(int interval);
        Sound(const Sound &sound);
        Sound &operator=(const Sound &sound);
        virtual ~Sound();
        std::string getValue();
};

#endif // SOUND_H
