
#ifndef TEMPARATURE_H_INCLUDED
#define TEMPARATURE_H_INCLUDED
#include "Sensor.h"

/*D�claration de la class Temperature*/
/*cette class h�rite de tous les param�tres et fonctions de la class Sensor: c'est une class fille*/

class Temperature : public Sensor<float> /* mode de d�rivation "public", retourne des valeurs de type "float" */
{
    public:
        Temperature(); /*Declaration du constructeur par d�faut*/
        ~Temperature(); /*Declaration du destructeur*/
};





#endif // TEMPARATURE_H_INCLUDED
