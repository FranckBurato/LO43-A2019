#include "Server.h"
#include "Sensor.h"

#include <fstream>
#include <iostream>

using namespace std;

Server::Server()                
{}
Server::Server(const Server&)    
{}
Server::~Server()              
{}
Server& Server::operator=(const Server &other) 
{
    this->consolActivation = other.consolActivation;  // THIS?
    this->logActivation = other.logActivation;
    return *this;   
} 

/* void dataReceive()
{
    getsensordata
  dataRcv = sensorData;
}  */


void consolWrite()   
{
    cout <<"lol"  << endl; //datarcv
}
void fileWrite()     
{
    ofstream lightFlux("C:/Users/BabaDeathLord/Desktop/ProjetServer-Copie/LogsLight.txt");
    if(lightFlux)
    {
        lightFlux <<  "lol" << endl; //datarcv
    }
    else
    {
       cout << "ERREUR : Impossible d'ouvrir le fichier logs" << endl;
    }
    
} 
