#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cstdio>

class Sensor
{
    public:

        Sensor();
        Sensor(int valRcv);
        virtual ~Sensor();
        Sensor& operator=(const Sensor& other);


        std::string sendData(int dataSens);     //fonction qui transforme la valeur en string
        int aleaGenVal(int capteur);            //fonction qui génère des valeurs aléatoires

    protected:
        int valSens;
};

#endif // SENSOR_H
