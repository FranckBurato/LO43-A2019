#ifndef DEF_SENSOR
#define DEF_SENSOR

class Sensor
{
    private:
     int valSensor_m;
    
    public:
     Sensor();
     Sensor(const Sensor& sensor);
     Sensor(int valRcv);
     ~Sensor();

     sendData();
     aleaGenVal();
};

#endif