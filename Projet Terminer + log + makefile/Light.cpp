#include "Light.h"

Light::Light():data(){};

Light::Light(bool a)
{
    data=a;
}

Light::~Light(){}

Light::Light(const Light& other)
{
    data=other.data;
}

Light& Light::operator=(const Light& other)
{
    data=other.data;
    return *this;
}

bool Light::getData(Light& liSens)
{
    //liSens.data = aleaGenValue<bool>(1);
    liSens.data = aleaGenValue(1);
    return liSens.data;
}
