#include <fstream>
#include <string>
#include <iostream>
#include <windows.h>
#include <chrono>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "Temperature.h"
#include "Humidity.h"
#include "Sensor.h"
#include "Sound.h"
#include "Scheduler.h"
#include "Light.h"
#include "Server.h"


using namespace std;
//constructeur par défault
Scheduler::Scheduler(){}

Scheduler::Scheduler(int nbS)
{
    this->nbrSec = nbS;
}
//destructeur
Scheduler::~Scheduler(){}

//Surcharge opérateur =
Scheduler& Scheduler::operator=(const Scheduler& nbS)
{
    this->nbrSec = nbS.nbrSec;
    return *this;
}

void Scheduler::sched_run()
{

  Server s;
  Scheduler she, she2;
  Humidity h;
  Sound so;
  Light li;
  Temperature tm;
  string touche;

  cout<<"Bienvenue dans le programme qui releve les donnees de vos capteurs"<< endl;
  cout<<"Vous avez actuellement 4 capteurs actives : humidite, son, lumiere et temperature "<<endl;

  she.nbrSec=rand()%10 + 10; //Durée de la prise de valeurs.

  cout<<"Les capteurs vous enverront des donnees pendant une duree de " << she.nbrSec<< " secondes."<<endl;
  cout<<"Les donnees vous seront transmises dans des fichiers log mais egalement sur la console"<<endl;

  cout<<"\n Entrez ok pour lancer les capteurs"<<endl;


  do{ //Vérifie que l'utilisateur entre bien ok.
    cin>>touche;
  }while((touche!="ok")&(touche!="OK")&(touche!="Ok"));

   for(auto runUntil = std::chrono::system_clock::now() + std::chrono::seconds(she.nbrSec); std::chrono::system_clock::now() < runUntil;)
    // on initialise l'heure de fin à l'heure courante + un npmbre aleatoire de secondes
	// A chaque itération on compare l'heure courante à l'heure de fin, si l'heure de fin est depassé on sort de la boucle le programme est terminée.
  {
        cout<<"\nCapteur Humidite: "<<endl;//affichage du type de capteur
        s.dataRvc(h.sendData(h.aleaGenVal(1),1),1);// Envoie des données du capteur vers le server et affichage des données.
        she2.nbrSec=rand()%500 + 200; //Génération aléatoire d'un intervalle de temps avant la récupération de donnée du prochain capteur.
        Sleep(she2.nbrSec);//arret avant la récupération des prochaines données.

        cout<<"\n"<<"Capteur Son: "<<endl;
        s.dataRvc(so.sendData(so.aleaGenVal(2),2),2);
        she2.nbrSec=rand()%500 + 200;
        Sleep(she2.nbrSec);

        cout<<"\n"<<"Capteur Lumiere: "<<endl;
        s.dataRvc(li.sendData(li.aleaGenVal(3),3),3);
        she2.nbrSec=rand()%500 + 200;
        Sleep(she2.nbrSec);

        cout<<"\n"<<"Capteur Temperature: "<<endl;
        s.dataRvc(tm.sendData(tm.aleaGenVal(4),4),4);
        she2.nbrSec=rand()%500 + 200;
        Sleep(she2.nbrSec);

  }

  cout<<"La recuperation des donnees des capteurs est fini relancez le programme pour d'autres mesures."<<endl;
}
