#ifndef DEF_SERVER
#define DEF_SERVER

#include "Sensor.h"

class Server
{ 
  friend class Sensor;
  private:
   int dataRcv = &sensorData;

  public:
   Server();
   Server(const Server&);
   ~Server();
   // Server& operator=(const Server&);  //Forme canonique de Coplien
    
   // void dataReceive();
   void consolWrite();   //Visualise les données dans la console
   void fileWrite();     //Ecrit les données ds un fichier
};

#endif