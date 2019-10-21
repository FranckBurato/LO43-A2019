#include "Light.h"
#include "Sound.h"
#include "Humidity.h"
#include "Temperature.h"
#include "Server.h"
#include "Sensor.h"
 
class Scheduler 
{
  friend class Server;
  private: 
    Server server;  

  public: 
    int sNumber = 0;   //Scheduler number, permet d'orchestrer les capteurs
    Scheduler();
    ~Scheduler();
    
    void run();
};