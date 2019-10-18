#include <iostream>
#include "scheduler.h"
#include "Sensor.h"
#include "Server.h"
#include <sstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

float floatGen(float a, float b)
{
    float random = ((float) rand()) / (float) RAND_MAX;//programme generant un float aleatoire comprit entre a et b
    float diff = b - a;
    float res = random * diff;
    return a + res;
}

//tous les constructeurs/destructeurs et les definitions des 'fonctions rand'
template <class T> Sensor<T>::Sensor()
{}

template <class T> Sensor<T>::~Sensor()
{}

Temperature::Temperature() : Sensor()
{}

Temperature::~Temperature()
{}

float Temperature::randVal()
{
    return floatGen(-20.5,45.7);//j'estime une temperature coherente enre -20 et 45 °C. Simple a modifier
}

Humidity::Humidity() : Sensor()
{}

Humidity::~Humidity()
{}

float Humidity::randVal()
{
    return floatGen(0,99.9);//j'estime une humidite coherente enre 0 et 99%. Simple a modifier
}

Light::Light() : Sensor()
{}

Light::~Light()
{}

bool Light::randVal()
{
    return rand()%2;
}

Sound::Sound() : Sensor()
{}

Sound::~Sound()
{}

int Sound::randVal()//fonction non utilisee
{
    return rand()%20;
}
