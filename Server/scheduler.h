#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "sensor.h"
#include "server.h"
#include "humidity.h"
#include "light.h"
#include "sound.h"
#include "temperature.h"

#include <vector>
#include <time.h>

using namespace std;

class Scheduler
{
	
public:
    Scheduler();
    void transInfo();
    
private :
    Server serv;
    vector<Sensor<int> > sens;//on peut utilise  un vecteur de sensor pour tester la classe sensor 
    Sensor<int> sensor;
    //de la classe sensor
//    Temperature<float> t;
//    Humidity<float> h;
//    Light<bool> l;
//    Sound<int> s;
 	Temperature t;
    Humidity h;
    Light l;
    Sound s;//on aurrait pu modifier la gestion du template sur les classes héritant de sensor pour choissir n'importe quelle type (ex : Sound<float> s  au lieu de définir sound en 'dure' )voir ligne commenté au dessus
};
#endif // SCHEDULER_H
