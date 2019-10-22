#include "sensor.h"
#include <stdlib.h>
#include <sstream>
#include <string>
#include <iostream>
#include <time.h>

//Constructeur par d�fault
Sensor::Sensor(){}

//Destructeur
Sensor::~Sensor(){}

Sensor::Sensor(int sensor_p)
{
    this->valSense = sensor_p;
}

//Surcharge op�rateur =
Sensor& Sensor::operator=(const Sensor& sensor_p)
{
    this->valSense = sensor_p.valSense;
    return *this;
}

//G�n�re un nombre al�atoire en fonction du type de capteur.
float Sensor::aleaGenVal(int n){

    float h;

    switch(n)
    {

    case 1 :
        h= (rand() / (float)RAND_MAX * 100.0);
        break;

    case 2:
        h= (rand() / (float)RAND_MAX * 150);
        break;
    case 3:
        h=(rand() / (float)RAND_MAX * 1.0);
        break;
    case 4:
        h=(rand() / (float)RAND_MAX * 50.0);
        break;

    }
    return h;
}

//Transforme un nombre r�el en string et ajoute l'unit� en fonction du capteur
string Sensor::sendData(float f,int dataSens_p)
{

    string data;
    ostringstream os;

    switch(dataSens_p)
    {
    case 1: //taux humidite
        {
                os << f;
                data=os.str();
                data.insert (data.end(),' %');
                break;
        }
    case 2: //son converti le r�el en entier puis en string et ajoute l'unite.
        {
                os << (int)f;
                data=os.str();
                data += " db";
                break;
        }
    case 3: //lumiere: donne une valeur false si f est inf�rieur � 0.5 et true si sup�rieur.
        {
                if(f<0.5)
                {
                    data="false";
                }
                else
                {
                    data="true";
                }
                break;
        }
    case 4: //temp�rature
        {
                os << f;
                data=os.str();
                data += " �C";
                break;
        }
    }
    return data;

}

