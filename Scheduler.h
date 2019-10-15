#ifndef SCHEDULER_H
#define SCHEDULER_H
#include <iostream>
#include <time.h>
#include "Temperature.h"
#include "Humidity.h"
#include "Light.h"
#include "Sound.h"
#include "Server.h"

using namespace std;

class Scheduler{
    private:
    Temperature temperature;
    Humidity humidity;
    Light light;
    Sound sound;
    Server server;

    public:

    Scheduler();//constructeur par défaut
  //  Scheduler(Temperature temperature, Humidity humidity, Light light, Sound sound,Server server);
    void getData();
 
};

#endif