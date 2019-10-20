
#ifndef TEMPARATURE_H_INCLUDED
#define TEMPARATURE_H_INCLUDED
#include "Sensor.h"

/*Déclaration de la class Temperature*/
/*cette class hérite de tous les paramètres et fonctions de la class Sensor: c'est une class fille*/

class Temperature : public Sensor<float> /* mode de dérivation "public", retourne des valeurs de type "float" */
{
    public:
        Temperature(); /*Declaration du constructeur par défaut*/
        ~Temperature(); /*Declaration du destructeur*/
};





#endif // TEMPARATURE_H_INCLUDED
