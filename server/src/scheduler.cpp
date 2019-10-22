/**
 * @author      : pinembour (pinembour@$HOSTNAME)
 * @file        : Scheduler
 * @created     : Wednesday Oct 09, 2019 14:21:51 CEST
 */

#include "scheduler.hpp"
#include <string>

//Nothing much here, just coplien form. dataRcv is a template function defined in scheduler.hpp
Scheduler::Scheduler(): server(), tempS("Temperature"), humiS("Humidity"), brightS("Brightness"), loudS("Loudness"){}

Scheduler::~Scheduler(){}

Scheduler::Scheduler(const Scheduler& scheduler){
    this->server=scheduler.server;
    this->tempS=scheduler.tempS;
    this->humiS=scheduler.humiS;
    this->brightS=scheduler.brightS;
    this->loudS=scheduler.loudS;
}

Scheduler& Scheduler::operator=(const Scheduler& scheduler){
    this->server=scheduler.server;
    this->tempS=scheduler.tempS;
    this->humiS=scheduler.humiS;
    this->brightS=scheduler.brightS;
    this->loudS=scheduler.loudS;
    return *this;
}


