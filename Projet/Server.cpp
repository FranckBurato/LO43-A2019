#include <iostream>
#include <string>
#include <fstream>
#include "Server.h"

using namespace std;

//Constructeur

Server::Server()
{
  capteurTemp = 0;
  capteurHumi = 0;
  capteurLumi = 0;
  capteurSono =0;
}


//Constructeur de copie

Server::Server(Server const& autre):capteurTemp(autre.capteurTemp), capteurHumi(autre.capteurHumi), capteurLumi(autre.capteurLumi), capteurSono(autre.capteurSonno)
{
}


//Destructeur

Server::~Server()
{
  //Rien à mettre pour le moment
}


//Fonction ecrit dans la console

void Server::consoleWrite(double captTemp, double captHumi, double captLumi, double captSono)
{
  cout << endl << "Temperature : " << captTemp << endl << "Humidite : " << captHumi << endl << "Luminosite : " << captLumi << endl << "Sonorite : " << captSono << endl;
}

//Fonction écrit dans un fichier

void Server::fileWrite()
{
  string const nomFichier("C:/Bureau/cours/Branche/LO43/fichier.txt"); //créer avec codeblocks un dossier projet
  ofstream fichier(nomFichier.c_str());
    
  if(fichier) 
  {
     fichier << "Temperature : " << captTemp << "degres" << endl;
     fichier << "Humidite : " << captHumi << "%" << endl;
     fichier << "Luminosite : " << captLumi << "lux" << endl;
     fichier << "Sonorite : " << captSono << "dB" << endl;
  }
  else
  {
    cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
  }
}
    
//Surcharge de l'opérateur <<
  
void Server::operator<<(Server& rhs)
{
  rhs.consoleWrite();
  rhs.fileWrite();
}
 
//Surcharge de l'opérateur = 

Server& Server::operator=(const Server& autre)
{
    this->capteurTemp = autre.capteurTemp;
    this->capteurHumi = autre.capteurHumi;
    this->capteurLumi = autre.capteurLumi;
    this->capteurSono = autre.capteurSono;
  
    return *this; 
}
    
