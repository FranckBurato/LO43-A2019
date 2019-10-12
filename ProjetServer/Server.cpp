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
/* Server& Server::operator=(const Server &other) 
{
    
}  */

/* void dataReceive()
{
  dataRcv = sensorData;
}  */


void consolWrite()   
{
    cout << dataRcv << endl;
}
void fileWrite()     
{
    ofstream lightFlux("C:/Users/BabaDeathLord/Desktop/ProjetServer-Copie/LogsLight.txt");
    if(lightFlux)
    {
        lightFlux << dataRcv << endl;
    }
    else
    {
       cout << "ERREUR : Impossible d'ouvrir le fichier logs" << endl;
    }
    
} 

int main()
{
    
    return 0;
}
