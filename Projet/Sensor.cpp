#include "Sensor.h"
#include "Scheduler.h"
#include "Server.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <sstream>

using namespace std;

//Constructeur
Sensor::Sensor():valSens(){}


//Constructeur  avec argument
Sensor::Sensor(int valRcv)
{
    this->valSens = valRcv;
}


//Destructeur
Sensor::~Sensor()
{
    //rien
};


//Surcharge opérateur =
Sensor& Sensor::operator=(const Sensor& other)
{
    this->valSens = other.valSens;
    return *this;
};


//Fonction qui transforme la valeur en string
string Sensor::sendData(int dataSens)
{
    stringstream dataSens_toString;
    dataSens_toString << dataSens;
    string str = dataSens_toString.str();

    return str;
}

/*
//pour type int
template <>
string Sensor<int>::sendData(int dataSens)
{
    stringstream dataSens_toString;
    dataSens_toString << dataSens;
    string str = dataSens_toString.str();

    return str;
}

//pour type float
template <> string Sensor<float>::sendData(float dataSens)
{
    stringstream dataSens_toString;
    dataSens_toString << dataSens;
    string str = dataSens_toString.str();

    return str;
}

//pour type bool
template <> string Sensor<bool>::sendData(bool dataSens)
{
    stringstream dataSens_toString;
    dataSens_toString << dataSens;
    string str = dataSens_toString.str();

    return str;
}
*/


//Voir si je supprime complétement
/*

//Génération de valeurs aléatoires en fonction du type du capteur
template <class T> T Sensor<T>::aleaGenVal(int capteur)
{
    srand(time(NULL));

    switch (capteur)
    {
    case 1 :
                this->valSens =((float)rand()/RAND_MAX)*40;
        break;

    case 2 :
                this->valSens = ((float)rand() / RAND_MAX)*101;
        break;

    case 3 :
                this->valSens = (bool)rand()%150;
        break;

    case 4 :
                this->valSens = (int)rand()%2;
        break;
    }

    return valSens;
}

*/
