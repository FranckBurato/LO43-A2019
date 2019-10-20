#ifndef SOUND_H_INCLUDED
#define SOUND_H_INCLUDED
#include "Sensor.h"

/*Déclaration de la class Sound*/
/*cette class hérite de tous les paramètres et fonctions de la class Sensor: c'est une class fille*/

class Sound:public Sensor<int> /* mode de dérivation "public", retourne des valeurs de type "int" */
{
    public:
        Sound(); /*Declaration du constructeur par défaut*/
        ~Sound(); /*Declaration du destructeur*/
};

#endif // SOUND_H_INCLUDED
