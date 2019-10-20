#ifndef HUMIDITY_H_INCLUDED
#define HUMIDITY_H_INCLUDED
#include "Sensor.h"

/*Déclaration de la class Humidity*/
/*cette class hérite de tous les paramètres et fonctions de la class Sensor: c'est une class fille*/

class Humidity:public Sensor<float> /* mode de dérivation "public", retourne des valeurs de type "float" */
{
    public:
        Humidity(); /*Declaration du constructeur par défaut*/
        ~Humidity(); /*Declaration du destructeur*/
};


#endif // HUMIDITY_H_INCLUDED
