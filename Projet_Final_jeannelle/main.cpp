#include <iostream>
#include "Scheduler.h"
#include <time.h>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

using namespace std;

int main()
{
    srand(time(NULL)); //Pour que les nombres al�atoires soient diff�rents.

    Scheduler sc;

    sc.sched_run(); //Lancement de la simulation

    return 0;
}
