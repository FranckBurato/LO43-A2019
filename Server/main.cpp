#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Scheduler.h"
#include "Server.h"

using namespace std;

int main() {
    srand((unsigned)time(NULL));
    Scheduler SchedulerOfSensor;
    SchedulerOfSensor.RecupererEtTransmise();
    return 0;
}
