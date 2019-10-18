#include <iostream>
#include "scheduler.h"
#include "Sensor.h"
#include "Server.h"
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    Scheduler scheduler;
    scheduler.simulateur();//lancement du programme de lecture/enregistrement
    return 0;
}
