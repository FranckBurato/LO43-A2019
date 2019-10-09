#ifndef SENSOR_H
#define SENSOR_H
#include <stdlib.h>


class Sensor
{
public:
    Sensor();
    Sensor(const Sensor & sensor_p );
    Sensor(int valRcv);
    ~Sensor(){};
    int sendData() const;
private:
    int valSense;
    int aleaGenVal();
};

#endif // SENSOR_H
