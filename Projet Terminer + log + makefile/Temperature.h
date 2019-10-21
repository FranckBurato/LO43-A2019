#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include "sensor.h"
//float
class Temperature : public sensor
{
    public:
        Temperature();
        Temperature(float);
        virtual ~Temperature();
        Temperature(const Temperature& other);
        Temperature& operator=(const Temperature& other);
        float getData(Temperature&);

    private:
        float data;

};

#endif // TEMPERATURE_H
