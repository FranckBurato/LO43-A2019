#include <fstream>
#include <iostream>

#include "Server.h"
#include "Scheduler.h"
#include "Light.h"
#include "Sound.h"
#include "Humidity.h"
#include "Temperature.h"
#include "Sensor.h"


using namespace std;

Server::Server() : scheduler(), light(), humidity(), temperature(), sound()   
{}
Server::Server(const Server&)    
{}
Server::~Server()              
{}
Server& Server::operator=(const Server &other) 
{
    this->consolActivation = other.consolActivation;
    this->logActivation = other.logActivation;
    return *this;
} 

void Server::dataRcv()     
{
  switch (scheduler.sNumber) 
  {
      case 0:
         this->dataRcvd = light.sensorData;
         break;
      case 1:
         this->dataRcvd = sound.sensorData;
         break; 
      case 2:
         this->dataRcvd = humidity.sensorData;
         break;
      case 3:
         this->dataRcvd = temperature.sensorData; 
         break; 
      default:
        break;
   }     
}

void Server::request()
{
    switch (scheduler.sNumber)
     {
         case 0:
           light.aleaGenVal();
           break;
         case 1:
           sound.aleaGenVal();
           break;
         case 2:
           humidity.aleaGenVal();
           break;
         case 3:
           temperature.aleaGenVal();
           break;
         default:
           break;
     }
}

void Server::consolWrite()   
{
   switch (scheduler.sNumber)
    {
      case 0:
       cout << "from Light Sensor : " << this->dataRcvd << " lux" <<endl;
       break;
      case 1:
       cout << "from Sound Sensor : " << this->dataRcvd << " dB" <<endl;
       break;
      case 2:
       cout << "from Humidity Sensor : " << this->dataRcvd << " %" <<endl;
       break;
      case 3:
       cout << "from Temperature Sensor : " << this->dataRcvd << " °C" <<endl;
       break;
      default:
       break;
    }
}

void Server::fileWrite()     
{
    switch (scheduler.sNumber)
    {
        case 0:
          {
           ofstream lightFlux("C:/Users/BabaDeathLord/Desktop/ProjetServer/LogsLight.txt");
              if(lightFlux)
                {
                   lightFlux << this->dataRcvd << endl;
                }
              else
                {
                   cout << "ERREUR : Impossible d'ouvrir le fichier logs" << endl;
                }
             lightFlux.close();
             break;
          }
        case 1:
          {
           ofstream soundFlux("C:/Users/BabaDeathLord/Desktop/ProjetServer/LogsSound.txt");
              if(soundFlux)
                {
                   soundFlux << this->dataRcvd << endl;
                }
              else
                {
                   cout << "ERREUR : Impossible d'ouvrir le fichier logs" << endl;
                }
             soundFlux.close();
             break;
          }
        case 2:
          {
           ofstream humidityFlux("C:/Users/BabaDeathLord/Desktop/ProjetServer/LogsHumidity.txt");
              if(humidityFlux)
                {
                   humidityFlux << this->dataRcvd << endl;
                }
              else
                {
                 cout << "ERREUR : Impossible d'ouvrir le fichier logs" << endl;
                }
             humidityFlux.close();
             break;
          }
        case 3:
          {
           ofstream temperatureFlux("C:/Users/BabaDeathLord/Desktop/ProjetServer/LogsTemperature.txt");
              if(temperatureFlux)
                {
                   temperatureFlux << this->dataRcvd << endl;
                }
              else
                {
                 cout << "ERREUR : Impossible d'ouvrir le fichier logs" << endl;
                }
             temperatureFlux.close();
             break;
          }
        default:
          break;         
     }
} 
