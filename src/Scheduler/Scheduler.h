#ifndef LO43_A2019_SCHEDULER_H
#define LO43_A2019_SCHEDULER_H

#include <vector>
#include "../Server/Server.h"
#include "../Sensor/Humidity.h"
#include "../Sensor/Sound.h"
#include "../Sensor/Temperature.h"
#include "../Sensor/Light.h"

class Scheduler {
private:
    Server server;
    Humidity humidity;
    Sound sound;
    Temperature temperature;
    Light light;

public:
    Scheduler();
    ~Scheduler() = default;

    void run();
};

#endif //LO43_A2019_SCHEDULER_H
