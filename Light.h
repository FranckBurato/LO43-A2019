#ifndef LIGHT_H_INCLUDED
#define LIGHT_H_INCLUDED
#include "Sensor.h"

/*Déclaration de la class Sound */
/*cette class hérite de tous les paramètres et fonctions de la class Sensor: c'est une class fille*/

class Light:public Sensor<bool> /* mode de dérivation "public", retourne des valeurs de type "bool" */
{
    public:
         Light(); /*Declaration du constructeur par défaut*/
        ~Light(); /*Declaration du destructeur*/
};


#endif // LIGHT_H_INCLUDED
