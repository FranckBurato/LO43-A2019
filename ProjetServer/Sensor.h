#ifndef DEF_SENSOR
#define DEF_SENSOR

class Sensor
{
    private:
     int sensorData;
    
    public:
     Sensor();
     Sensor(const Sensor&);
     ~Sensor();

     
     void aleaGenVal();
     void sendData();
     
};

#endif