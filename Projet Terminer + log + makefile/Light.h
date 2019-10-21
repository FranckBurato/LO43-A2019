#ifndef LIGHT_H
#define LIGHT_H
#include "sensor.h"
//boolean
class Light : public sensor
{
    public:
        Light();
        Light(bool);
        virtual ~Light();
        Light(const Light& other);
        Light& operator=(const Light& other);
        bool getData(Light&);

    private:
        bool data;
};

#endif // LIGHT_H
