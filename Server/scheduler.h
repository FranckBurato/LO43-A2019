#ifndef SCHEDULER_H
#define SCHEDULER_H
#include "sensor.h"
#include "server.h"
#include "humidity.h"
#include "light.h"
#include "sound.h"
#include "temperature.h"
#include <vector>

using namespace std;
class Scheduler
{
public:
    Scheduler();
    void transInfo();
private :
    Server serv;
    vector<Sensor> sens;//on utilise içi un vecteur mais on est pas obliger, il permet de tester que les capteur t,h,l,s on bien hériter de
    //de la classe sensor
    Temperature t;
    Humidity h;
    Light l;
    Sound s;
};

#endif // SCHEDULER_H
