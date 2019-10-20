//
// Created by Alomb on 20/10/2019.
//

#include <chrono>
#include <synchapi.h>
#include <functional>
#include "../Headers/Scheduler.h"

Scheduler::~Scheduler(){}

Scheduler::Scheduler(): lightSensor(), thermistor(), microphone(),hygrometer(), server(), sensors() {}

Scheduler::Scheduler(const Scheduler & autre): lightSensor(autre.lightSensor),  microphone(autre.microphone), thermistor(autre.thermistor), hygrometer(autre.hygrometer), server(autre.server) {}

Scheduler &Scheduler::operator=(const Scheduler &autre) {
    this->server = autre.server;
    this->thermistor = autre.thermistor;
    this->microphone = autre.microphone;
    this->lightSensor = autre.lightSensor;
    this->hygrometer = autre.hygrometer;
    return *this;
}

void Scheduler::run() {
    int time = std::chrono::system_clock::now().time_since_epoch().count();
    while(true) {
//        server << hygrometer.sendData();
        for (std::reference_wrapper<SensorInterface> sensor: sensors){
            server << sensor.get().sendData();
        }
        Sleep(1000);
    }


}

Scheduler &Scheduler::operator+(Humidity& sensor) {
    sensors.emplace_back(sensor);
    return *this;
}

Scheduler &Scheduler::operator+(Sound& sensor) {
    sensors.emplace_back(sensor);
    return *this;
}

Scheduler &Scheduler::operator+(Temperature& sensor) {
    sensors.emplace_back(sensor);
    return *this;
}

Scheduler &Scheduler::operator+(Light& sensor) {
    sensors.emplace_back(sensor);
    return *this;
}