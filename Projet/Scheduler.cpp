//
// Created by Antoine on 22/10/2019.
//

#include "Scheduler.h"
#include "Server/Server.h"
#include "Sensors/Sensor.h"

#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <Windows.h>


Scheduler::~Scheduler() {
    for(int i = 0; i < this->sensors.size(); ++i) {
        delete this->sensors[i];
    }
}
Scheduler::Scheduler() : server(), sensors(), msDuration() {}
Scheduler::Scheduler(bool consolActivation, bool logActivation) : server(consolActivation,logActivation), sensors(), msDuration() {}
Scheduler::Scheduler(const Scheduler &scheduler) : server(scheduler.server), sensors(scheduler.sensors), msDuration(scheduler.msDuration){}
Scheduler::Scheduler(int msDuration) : server(), sensors(), msDuration(msDuration){}
Scheduler::Scheduler(int msDuration, bool consolActivation, bool logActivation) : server(consolActivation,logActivation), sensors(), msDuration(msDuration) {}

Scheduler& Scheduler::operator=(const Scheduler &scheduler) {
    this->server = scheduler.server;
    this->sensors = scheduler.sensors;
    this->msDuration = scheduler.msDuration;
    return *this;
}
Scheduler &Scheduler::operator+(SensorInterface *sensor) {
    this->sensors.emplace_back(sensor);
    return *this;
}


void Scheduler::run() {
    for(int i = 0; i < msDuration; ++i) {
        for(int j = 0; j < this->sensors.size(); ++j) {
            if(this->sensors[j]->canSend()) {
                this->server << this->sensors[j];
            }
        }

        // check every 1ms
        Sleep(1);
    }
}

