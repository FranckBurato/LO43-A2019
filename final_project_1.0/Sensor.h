#ifndef SENSOR_H_INCLUDED
#define SENSOR_H_INCLUDED
#include <iostream>
#include "scheduler.h"
#include "Sensor.h"
#include "Server.h"
#include <sstream>
#include <string>
#include <cstdlib>
#include <ctime>

template <class T>
class Sensor
{
protected:
    T valSense;
    friend class Scheduler;

public:
    Sensor();
    ~Sensor();


    std::string stringer(T dataSens);
    std::string returnValSense();
    virtual T randVal()=0;
};

template <class T> std::string Sensor<T>::stringer(T dataSens) // Cette fonction transforme la donnee du capteur en string
{
    std::stringstream tampon;
    tampon << dataSens;
    std::string str = tampon.str();
    return str;
}

template <class T> std::string Sensor<T>::returnValSense()
{
    return stringer(randVal());//on retourne une valeur aleatoire pour simuler la lecture d'une donnee par le capteur
}

template <class T> T Sensor<T>::randVal()//fonction non utilisee car specifique pour chaque classe fille
{
    return rand()%20;
}

//classes filles

class Temperature : private Sensor<float>
{
private:
    friend class Scheduler;
public:
    Temperature();
    ~Temperature();
    float randVal();
};

class Humidity : private Sensor<float>
{
private:
    friend class Scheduler;
public:
    Humidity();
    ~Humidity();
    float randVal();
};

class Light : private Sensor<bool>
{
private:
    friend class Scheduler;
public:
    Light();
    ~Light();
    bool randVal();
};

class Sound : private Sensor<int>
{
private:
    friend class Scheduler;
public:
    Sound();
    ~Sound();
    int randVal();
};

float floatGen(float a, float b);

#endif // SENSOR_H_INCLUDED
