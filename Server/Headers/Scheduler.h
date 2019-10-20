//
// Created by Alomb on 20/10/2019.
//

#ifndef LO43SERVER_SCHEDULER_H
#define LO43SERVER_SCHEDULER_H


#include <vector>
#include "Humidity.h"
#include "Light.h"
#include "Temperature.h"
#include "Sound.h"

class Scheduler {
    Light lightSensor;
    Temperature thermistor;
    Sound microphone;
    Humidity hygrometer;

    std::vector<std::reference_wrapper<SensorInterface>> sensors;

    Server server;

public:
    Scheduler();
    Scheduler(const Scheduler&);

    virtual ~Scheduler();
    Scheduler& operator=(const Scheduler&);
    Scheduler& operator+(Humidity&);
    Scheduler& operator+(Light&);
    Scheduler& operator+(Temperature&);
    Scheduler& operator+(Sound&);
    void run();
};


#endif //LO43SERVER_SCHEDULER_H
