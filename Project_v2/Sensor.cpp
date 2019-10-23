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
template <class T> Sensor<T>::Sensor():valSens(){}


//Constructeur  avec argument
template <class T> Sensor<T>::Sensor(T valRcv)
{
    this->valSens = valRcv;
}


//Destructeur
template <class T> Sensor<T>::~Sensor()
{
    //rien
};


//Surcharge opérateur =
template <class T> Sensor<T>& Sensor<T>::operator=(const Sensor& other)
{
    this->valSens = other.valSens;
    return *this;
};


//Fonction qui transforme la valeur en string
template <class T> string Sensor<T>::sendData(T dataSens)
{
    stringstream dataSens_toString;
    dataSens_toString << dataSens;
    string str = dataSens_toString.str();

    return str;
}


//déclaration pour différents types
template <>
string Sensor<float>::sendData(float dataSens);

template <>
string Sensor<int>::sendData(int dataSens);

template <>
string Sensor<bool>::sendData(bool dataSens);


//class spécialisées
template class Sensor<int>;
template class Sensor<float>;
template class Sensor<bool>;


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
template <>
string Sensor<float>::sendData(float dataSens)
{
    stringstream dataSens_toString;
    dataSens_toString << dataSens;
    string str = dataSens_toString.str();

    return str;
}

//pour type bool
template <>
string Sensor<bool>::sendData(bool dataSens)
{
    stringstream dataSens_toString;
    dataSens_toString << dataSens;
    string str = dataSens_toString.str();

    return str;
}
