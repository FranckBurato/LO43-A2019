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
Scheduler::Scheduler() : server(), sensors(), sDuration(), nbGets() {}
Scheduler::Scheduler(bool consolActivation, bool logActivation) : server(consolActivation,logActivation), sensors(), sDuration(), nbGets() {}
Scheduler::Scheduler(const Scheduler &scheduler) : server(scheduler.server), sensors(scheduler.sensors), sDuration(scheduler.sDuration), nbGets(scheduler.nbGets) {}
Scheduler::Scheduler(int sDuration, int nbGets) : server(), sensors(), sDuration(sDuration), nbGets(nbGets){}
Scheduler::Scheduler(int sDuration, int nbGets, bool consolActivation, bool logActivation) : server(consolActivation,logActivation), sensors(), sDuration(sDuration), nbGets(nbGets) {}

Scheduler& Scheduler::operator=(const Scheduler &scheduler) {
    this->server = scheduler.server;
    this->sensors = scheduler.sensors;
    this->sDuration = scheduler.sDuration;
    this->nbGets = scheduler.nbGets;
    return *this;
}
Scheduler &Scheduler::operator+(SensorInterface *sensor) {
    this->sensors.emplace_back(sensor);
    return *this;
}


void Scheduler::run() {
    for(int i = 0; i < nbGets; ++i) {
        std::cout << "----------------------------" << std::endl;
        std::cout << "VALUE NUMBER : " << i + 1 << std::endl;
        std::cout << "----------------------------" << std::endl;
        int j;
        for(j = 0; j < this->sensors.size(); ++j) {
            this->server << this->sensors[j];
        }
        if(i < nbGets)
            Sleep((sDuration * 1000) / nbGets);
    }
}

