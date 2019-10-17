#ifndef DEF_SERVER
#define DEF_SERVER

#include "Sensor.h"

class Server
{ 
  private:
   bool consolActivation;
   bool logActivation;
   int nbrOfSensors;
   int dataRcv;

  public:
   Server();
   Server(const Server&);
   ~Server();
   Server& operator=(const Server&);  //Forme canonique de Coplien
    
   void dataReceive();
   static void consolWrite();   //Visualise les données dans la console
   static void fileWrite();     //Ecrit les données ds un fichier
};

#endif