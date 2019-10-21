#ifndef HUMIDITY_H
#define HUMIDITY_H
#include "sensor.h"

//float
class Humidity : public sensor
{
    public:
        Humidity();
        Humidity(float);
        virtual ~Humidity();
        Humidity(const Humidity& other);
        Humidity& operator=(const Humidity& other);
        float getData(Humidity&);

    private:
        float data;

};

#endif // HUMIDITY_H
