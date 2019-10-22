#ifndef DEF_SERVER
#define DEF_SERVER

#include "Server.h"
#include "Sensor.h"
#include "Light.h"
#include "Sound.h"
#include "Humidity.h"
#include "Temperature.h"


class Server
{
    private:
     bool consolActivation;
     bool logActivation;
     
     int dataRcvd;

     LightSensor light;
     HumiditySensor humidity;
     SoundSensor sound;
     TemperatureSensor temperature; 
     
    public: 
     Server();
     Server(const Server&);
     ~Server();
     Server& operator=(const Server&);  //Forme canonique de Coplien
    
     void request();       //Demande une mesure à un capteur
     void dataRcv();       //Récupère les données d'un capteur
     void consolWrite();   //Visualise les données dans la console
     void fileWrite();     //Ecrit les données ds un fichier
};

#endif