#ifndef DEF_LIGHT
#define DEF_LIGHT

#include "Sensor.h"

class LightSensor : public Sensor
{
     private:
        //Les attributs de Sensor sont héritées
     public:
        //Les methodes de Sensor sont héritées
        /* créée des données (Aleatoire, simulation), puis les envoi au serveur.
          En modifiant les attributs de cette classe, eux meme partagés avec le server?
          */
        int aleaGenVal();
         

};

#endif
