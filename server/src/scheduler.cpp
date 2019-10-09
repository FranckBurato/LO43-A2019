/**
 * @author      : pinembour (pinembour@$HOSTNAME)
 * @file        : Scheduler
 * @created     : Wednesday Oct 09, 2019 14:21:51 CEST
 */

#include "Scheduler.hpp"
#include <type_traits>

Scheduler::Scheduler(): server(), tempS(){}

Scheduler::~Scheduler(){}

Scheduler::Scheduler(const Scheduler& scheduler){
    this->server=scheduler.server;
    this->tempS=scheduler.tempS;
    this->humiS=scheduler.humiS;
    this->brightS=scheduler.brightS;
    this->loudS=scheduler.loudS;
}

Scheduler::operator=(const Scheduler& scheduler){
    this->server=scheduler.server;
    this->tempS=scheduler.tempS;
    this->humiS=scheduler.humiS;
    this->brightS=scheduler.brightS;
    this->loudS=scheduler.loudS;
    return *this;
}

Scheduler::dataRcv(const Sensor<T> sensor){
    if constexpr (std::is_same_v<T, int>) {
	this->server.loudness = sensor.valSense;
    }
    if constexpr (std::is_same_v<T, bool>) {
	this->server.brightness = sensor.valSense;
    }
    if constexpr (std::is_same_v<T, float>) {
	this->server.temperature = sensor.valSense;
	//TO-DO : Find a way to differenciate temp and humidity
    }
}
