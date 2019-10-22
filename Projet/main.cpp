#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include "Server.h"
#include "Scheduler.h"
#include "Sensor.h"
#include "Temperature.h"
#include "Humidity.h"
#include "Light.h"
#include "Sound.h"


using namespace std;

int main()
{
    srand(time(NULL));

    Scheduler test;
    test.simulateur();

    return 0;
}
