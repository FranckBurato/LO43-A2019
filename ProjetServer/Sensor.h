#ifndef DEF_SENSOR
#define DEF_SENSOR

class Sensor   //Ne sert que de base aux classes filles, n'interagit pas avc server
{
    private:
     int sensorData;  
    
    public:
     Sensor();
     Sensor(const Sensor&);
     ~Sensor();

     void sendData();
    
};

#endif