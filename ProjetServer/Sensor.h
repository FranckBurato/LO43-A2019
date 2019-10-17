#ifndef DEF_SENSOR
#define DEF_SENSOR

#include "Server.h"

class Sensor 
{
    private:
     int sensorData;  
     
    public:
     Sensor();
     Sensor(const Sensor&);
     ~Sensor();

     virtual int sendData() = 0;
    
};

#endif