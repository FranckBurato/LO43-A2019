//
// Created by Alomb on 09/10/2019.
//

#include "Scheduler.h"
#include "Server.hpp"

Scheduler::~Scheduler() = default;

Scheduler::Scheduler(): lightSensor(), thermistor(), microphones(),hygrometers() {}

Scheduler::Scheduler(const Scheduler & autre): lightSensor(autre.lightSensor), hygrometers(autre.hygrometers), microphones(autre.microphones), thermistor(autre.thermistor) {}

Scheduler &Scheduler::operator=(const Scheduler &autre) {
    this->thermistor = autre.thermistor;
    this->microphones = autre.microphones;
    this->hygrometers = autre.hygrometers;
    this->lightSensor = autre.lightSensor;
}

void Scheduler::run() {
//    Server::currentLog = "../lightLog.txt"
//    for ()
}


