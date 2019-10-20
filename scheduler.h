#ifndef SCHEDULER_H_INCLUDED
#define SCHEDULER_H_INCLUDED
#include<vector>
#include "Sensor.h"
#include "Server.h"

/*Déclaration de la class Scheduler et la class Template permettra de générer des données de types différent: Integer, Float et Boolean*/
/* La class "Scheduler" joue le rôle de planificateur, elle envoie dans la class serveur les données reçues*/
/**/
/**/
template <class T> class Scheduler

{
  /*Déclaration des attributs*/
private:
    T *capteur;
    Server<T> *serveur;

public:

    Scheduler(T *capteur) /*Initialisation du constructeur par recopie qui prend en paramètre un pointeur de type T*/
    {

       this->serveur->dataRcv(capteur); /*appelle la methode dataRcv de la class serveur qui prend en paramètre un objet de type "T" (les données des différents types de capteur)*/
    }

 /*Déclaration du destructeur*/

    ~Scheduler(){}


};



#endif // SCHEDULER_H_INCLUDED
