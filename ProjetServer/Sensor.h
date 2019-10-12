#ifndef DEF_SENSOR
#define DEF_SENSOR

#include "Server.h"

class Sensor //Ne sert que de base aux classes filles, n'interagit pas avc server
{
    friend class Server
    private:
     int sensorData;  
     
    public:
     Sensor();
     Sensor(const Sensor&);
     ~Sensor();

     virtual int sendData() = 0;
    
};

#endif