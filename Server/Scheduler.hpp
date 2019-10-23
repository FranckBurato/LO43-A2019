
#ifndef Scheduler_hpp
#define Scheduler_hpp

#include <iostream>

#include "Server.h"
#include "Temperature.h"
#include "Humidity.h"
#include "Light.h"
#include "Sound.h"

using namespace std;

class Scheduler {
private:
    Server s1;
    Temperature t1;
    Humidity h1;
    Light l1;
    Sound so1;
    
public:
    Scheduler();
    Scheduler(const Schueduler& Sch)
    virtual ~Scheduler();
    void RecupererEtTransmise();
};
#endif /* Scheduler_hpp */
