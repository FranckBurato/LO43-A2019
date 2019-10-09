#ifndef SENSOR_H
#define SENSOR_H
#include <iostream>
#include <fstream>
#include <string>


using namespace std;
class Sensor{
    private:
    int valSense;

    public:
        Sensor(); //constructeur par défaut
        Sensor(int valSense); // constructeur par argument
        Sensor(const Sensor&); //Constructeur par recopie

        //Surcharge opérateur

        Sensor& operator = (const Sensor&);

        ~Sensor(); // Destructeur

        //methodes :
        int sendData();
        int aleaGenVal();    
};
#endif