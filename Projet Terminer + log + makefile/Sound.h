#ifndef SOUND_H
#define SOUND_H
#include "sensor.h"
//integer
class Sound : public sensor
{
    public:
        Sound();
        Sound(int);
        virtual ~Sound();
        Sound(const Sound& other);
        Sound& operator=(const Sound& other);
        int getData(Sound&);

  private:
      int data;
};

#endif // SOUND_H
