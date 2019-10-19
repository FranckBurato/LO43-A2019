//
// Created by Alomb on 09/10/2019.
//

#ifndef SERVER_SCHEDULER_H
#define SERVER_SCHEDULER_H


#include <vector>
#include "Sensor.h"
#include "Header/Light.h"
#include "Temperature.h"
#include "Sound.h"
#include "Header/Humidity.h"
#include "Server.h"

class Scheduler {
private:
//    std::vector<Light*> lightSensors;
//    std::vector<Temperature*> thermistors;
//    std::vector<Sound*> microphones;
//    std::vector<Humidity*> hygrometers;
    Light lightSensor;
    Temperature thermistor;
    Sound microphone;
    Humidity hygrometer;

    Server server;

public:
    Scheduler();
    Scheduler(const Scheduler&);

    virtual ~Scheduler();
    Scheduler& operator=(const Scheduler&);
    void run();
};


#endif //SERVER_SCHEDULER_H
