#include "Temperature.h"

Temperature::Temperature():data(){}

Temperature::Temperature(float a)
{
    data = a;
}

Temperature::~Temperature()
{
    //dtor
}

Temperature::Temperature(const Temperature& other)
{
    data=other.data;
}

Temperature& Temperature::operator=(const Temperature& other)
{
    data = other.data;
    return *this;
}

float Temperature::getData(Temperature& tempSens)
{
    //tempSens.data = aleaGenValue<float>(4);
    tempSens.data = aleaGenValue(4);
    return tempSens.data;
}
