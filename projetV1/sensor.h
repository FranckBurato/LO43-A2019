#ifndef SENSOR_H
#define SENSOR_H


template <typename T> class Sensor
{
    private:
        int valSense;
    public:
        Sensor();
        Sensor(const Sensor&sensor_p);
        Sensor(int valRcv);
        ~Sensor();
        Sensor::operator=(const Sensor& sensor_p)
        int sendData() const;
        int aleaGenVal():

};

#endif // SENSOR_H
