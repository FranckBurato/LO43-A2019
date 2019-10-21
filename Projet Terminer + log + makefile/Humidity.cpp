#include "Humidity.h"

Humidity::Humidity():data(){};
Humidity::Humidity(float a)
{
    data=a;
}

Humidity::~Humidity(){}

Humidity::Humidity(const Humidity& other)
{
    data=other.data;
}

Humidity& Humidity::operator=(const Humidity& other)
{
    data=other.data;
    return *this;
}

float Humidity::getData(Humidity& huSens)
{

    //huSens.data = huSens.aleaGenValue<float>(3);
    huSens.data = huSens.aleaGenValue(3);
    return huSens.data;
}

