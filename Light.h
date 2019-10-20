#ifndef LIGHT_H_INCLUDED
#define LIGHT_H_INCLUDED
#include "Sensor.h"

/*D�claration de la class Sound */
/*cette class h�rite de tous les param�tres et fonctions de la class Sensor: c'est une class fille*/

class Light:public Sensor<bool> /* mode de d�rivation "public", retourne des valeurs de type "bool" */
{
    public:
         Light(); /*Declaration du constructeur par d�faut*/
        ~Light(); /*Declaration du destructeur*/
};


#endif // LIGHT_H_INCLUDED
