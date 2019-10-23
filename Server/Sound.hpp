

#ifndef SOUND_H
#define SOUND_H

#include <iostream>
#include "Sensor.h"

using namespace std;

class Sound: public Sensor {
private:
    int valSense;
public:
    Sound();
    Sound(const Sound& so);
    ~Sound();
    int aleaGenVal();
    int sendData() const;
};

#endif /* SOUND_H */
