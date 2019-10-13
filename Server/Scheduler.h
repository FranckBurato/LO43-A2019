#ifndef SCHEDULER_H
#define SCHEDULER_H
#include <iostream>
#include "Server.h"
#include "Humidity.h"
#include "Light.h"
#include "Sound.h"
#include "Temperature.h"


using namespace std;

class Scheduler{

    private:

        //declaration of 4 sensors
        Temperature t;
        Humidity h;
        Light l;
        Sound s;

        Server server;  
        void getInfos();      

    public:
        Scheduler();
        
};


#endif