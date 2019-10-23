#ifndef LO43_A2019_SOUND_H
#define LO43_A2019_SOUND_H

#include "Sensor.h"

class Sound : public Sensor<int> {
protected:
    int aleaGenVal() override;

    friend class Scheduler;

public:
    Sound();

    Sound(const Sound &) = default;

    Sound &operator=(const Sound &) = default;

    ~Sound() = default;
};

#endif //LO43_A2019_SOUND_H
