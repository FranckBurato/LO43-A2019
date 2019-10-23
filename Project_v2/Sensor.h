#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cstdio>

template <class T> class Sensor
{
    public:

        Sensor();
        Sensor(T valRcv);
        virtual ~Sensor();
        Sensor& operator=(const Sensor& other);


        std::string sendData(T dataSens);     //fonction qui transforme la valeur en string
        T aleaGenVal(int capteur);            //fonction qui génère des valeurs aléatoires

    protected:
        T valSens;
};

#endif // SENSOR_H
