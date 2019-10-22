#ifndef SENSOR_H_INCLUDED
#define SENSOR_H_INCLUDED

#include<iostream>
#include<ostream>
#include<fstream>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string>

using namespace std;
//template <typename T>
class Sensor
{
    protected:
        int valSense;
    public:
        Sensor();
        Sensor(const Sensor&sensor_p);
        Sensor(int valRcv);
        ~Sensor();
        Sensor& operator=(const Sensor& sensor_p);

        string sendData(float f,int dataSens_p);
        float aleaGenVal(int n);

};

#endif // SENSOR_H_INCLUDED
