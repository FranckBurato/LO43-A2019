#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include "Temperature.h"
#include "Humidity.h"
#include "Light.h"
#include "Sound.h"
#include "Server.h"
#include <vector>


class Scheduler
{
    public:
        Scheduler();
        virtual ~Scheduler();
        Scheduler(const Scheduler& other);
        Scheduler& operator=(const Scheduler& other);

        void simulateur();              //fonction qui agit comme le main


    private:
        Temperature temperature;        //cr�ation de mes capteurs
        Humidity humidity;
        Light light;
        Sound sound;
        Server server;                  //cr�ation de mon server
};

#endif // SCHEDULER_H
