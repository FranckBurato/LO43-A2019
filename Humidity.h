#ifndef HUMIDITY_H_INCLUDED
#define HUMIDITY_H_INCLUDED
#include "Sensor.h"

/*D�claration de la class Humidity*/
/*cette class h�rite de tous les param�tres et fonctions de la class Sensor: c'est une class fille*/

class Humidity:public Sensor<float> /* mode de d�rivation "public", retourne des valeurs de type "float" */
{
    public:
        Humidity(); /*Declaration du constructeur par d�faut*/
        ~Humidity(); /*Declaration du destructeur*/
};


#endif // HUMIDITY_H_INCLUDED
