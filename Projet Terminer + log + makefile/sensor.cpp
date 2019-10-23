#include "sensor.h"
#include "stdlib.h"
#include <time.h>

sensor::sensor(){}

sensor::~sensor(){}

sensor::sensor(const sensor& other)
{
}

sensor& sensor::operator=(const sensor& other)
{
    return *this;
}

float sensor::aleaGenValue(int type)
{
    //type : 1= bool light, 2=int sound, et 3=float humidity et 4=float temperature
    float valeur;
    switch(type)
    {
        case 1 :
            valeur = rand()%2 -1;
            valeur = (bool) valeur;
            break;

        case 2 :
            valeur = rand()%141 - 1;
            valeur = (int) valeur;
            break;

        case 3 :
            valeur = rand()%101 -1;
            valeur = (float) valeur;
            break;
        case 4 :
            valeur = rand()%10001 + 1;
            valeur = (float) valeur;
            break;
    }
    return valeur ;
}



