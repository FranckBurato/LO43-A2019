#include <cstdlib>
#include <ctime>
#include "Light.h"
#include "Sensor.h"

//Destructeur
Light::~Light()
{
    //rien
}

//Fonction qui génère une valeur aléatoire
bool Light::aleaGenVal(int capteur)
{
    if(rand()%2)
    {
        this->valSens = true;
    }
    else
    {
        this->valSens = false;
    }

    return valSens;
}
