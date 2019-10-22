#ifndef DEF_SENSOR
#define DEF_SENSOR

#include "Server.h"

class Sensor
{
    friend class Server;
    protected:
     int sup, inf;
     int sensorData;

    public:
     Sensor();
     Sensor(const Sensor&);
     ~Sensor();

    void aleaGenVal();
};

#endif