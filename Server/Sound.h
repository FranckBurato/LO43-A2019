//
// Created by Alomb on 09/10/2019.
//

#ifndef SERVER_SOUND_H
#define SERVER_SOUND_H

#include "Sensor.h"

class Sound: Sensor<int> {
    void aleaGenVal() override;

};


#endif //SERVER_SOUND_H
