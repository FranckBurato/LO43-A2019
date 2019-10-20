#ifndef SOUND_H_INCLUDED
#define SOUND_H_INCLUDED
#include "Sensor.h"

/*D�claration de la class Sound*/
/*cette class h�rite de tous les param�tres et fonctions de la class Sensor: c'est une class fille*/

class Sound:public Sensor<int> /* mode de d�rivation "public", retourne des valeurs de type "int" */
{
    public:
        Sound(); /*Declaration du constructeur par d�faut*/
        ~Sound(); /*Declaration du destructeur*/
};

#endif // SOUND_H_INCLUDED
