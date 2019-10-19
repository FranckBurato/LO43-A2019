//
// Created by Alomb on 09/10/2019.
//

#include <istream>
#include <chrono>
#include "Header/Scheduler.h"
#include "Header/Server.h"

Scheduler::~Scheduler(){}

Scheduler::Scheduler(): lightSensor(), thermistor(), microphone(),hygrometer(), server() {}

Scheduler::Scheduler(const Scheduler & autre): lightSensor(autre.lightSensor), hygrometer(autre.hygrometer), microphone(autre.microphone), thermistor(autre.thermistor), server(autre.server) {}

Scheduler &Scheduler::operator=(const Scheduler &autre) {
    this->server = autre.server;
    this->thermistor = autre.thermistor;
    this->microphone = autre.microphone;
    this->hygrometer = autre.hygrometer;
    this->lightSensor = autre.lightSensor;
    return *this;
}

void Scheduler::run() {
    int time = std::chrono::system_clock::now().time_since_epoch().count();
    //while
        lightSensor.sendData();

}


