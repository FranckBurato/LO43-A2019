//
// Created by Alomb on 09/10/2019.
//

#ifndef SERVER_SOUND_H
#define SERVER_SOUND_H

#include "Header/Sensor.h"

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


#endif //SERVER_SOUND_H
