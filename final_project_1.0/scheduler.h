#ifndef SCHEDULER_H_INCLUDED
#define SCHEDULER_H_INCLUDED
#include <iostream>
#include "scheduler.h"
#include "Sensor.h"
#include "Server.h"
#include <string>
#include <cstdlib>
#include <ctime>

class Scheduler
{
private:
    std::string valSensor;
    Server server;
    Temperature temperature;
    Humidity humidity;
    Sound sound;
    Light light;
public:
    Scheduler();
    ~Scheduler();

    template <class T> std::string returnValSensor(Sensor<T> &capteur);//possible car les capteurs heritent de sensor

    void simulateur();
};

#endif // SCHEDULER_H_INCLUDED
