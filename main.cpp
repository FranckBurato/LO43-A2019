#include <iostream>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
#include "Sensor.h"
#include "Humidity.h"
#include "Sound.h"
#include "Temperature.h"
#include "Light.h"
#include "Server.h"
#include "scheduler.h"

using namespace std;

int main()
{
    new Scheduler<Temperature>(new Temperature());

    Sleep(5000);

    new Scheduler<Humidity>(new Humidity());

    Sleep(5000);

    new Scheduler<Sound>(new Sound());

    Sleep(5000);

    new Scheduler<Light>(new Light());

    return 0;
}
