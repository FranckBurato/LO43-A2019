//
// Created by Alomb on 20/10/2019.
//

#ifndef LO43SERVER_SOUND_H
#define LO43SERVER_SOUND_H

#include "Sensor.h"

class Sound: public Sensor<int> {
private:
    void aleaGenVal() override;

    std::string getPath() override;

public:
    Sound();
    Sound(const Sound& autre);
    virtual ~Sound();
    Sound& operator=(const Sound& autre);
};


#endif //LO43SERVER_SOUND_H
