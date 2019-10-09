//
// Created by Alomb on 09/10/2019.
//

#ifndef SERVER_SCHEDULER_H
#define SERVER_SCHEDULER_H


#include <vector>
#include "Sensor.h"

class Scheduler {
private:
    std::vector<Sensor<bool>&> lightSensor;
    std::vector<Sensor<float>&> thermistor;
    std::vector<Sensor<int>&> microphones;
    std::vector<Sensor<float>&> hygrometers;

public:
    Scheduler();
    Scheduler(const Scheduler&);

    virtual ~Scheduler();
    Scheduler& operator=(const Scheduler&);
    void run();
};


#endif //SERVER_SCHEDULER_H
