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
    Scheduler();
    ~Scheduler();
    
    void run();
};