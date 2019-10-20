#ifndef SCHEDULER_H_INCLUDED
#define SCHEDULER_H_INCLUDED
#include<vector>
#include "Sensor.h"
#include "Server.h"

/*D�claration de la class Scheduler et la class Template permettra de g�n�rer des donn�es de types diff�rent: Integer, Float et Boolean*/
/* La class "Scheduler" joue le r�le de planificateur, elle envoie dans la class serveur les donn�es re�ues*/
/**/
/**/
template <class T> class Scheduler

{
  /*D�claration des attributs*/
private:
    T *capteur;
    Server<T> *serveur;

public:

    Scheduler(T *capteur) /*Initialisation du constructeur par recopie qui prend en param�tre un pointeur de type T*/
    {

       this->serveur->dataRcv(capteur); /*appelle la methode dataRcv de la class serveur qui prend en param�tre un objet de type "T" (les donn�es des diff�rents types de capteur)*/
    }

 /*D�claration du destructeur*/

    ~Scheduler(){}


};



#endif // SCHEDULER_H_INCLUDED
