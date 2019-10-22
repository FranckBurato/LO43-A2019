/**
 * @author      : pinembour (pinembour@$HOSTNAME)
 * @file        : Scheduler
 * @created     : Wednesday Oct 09, 2019 14:21:51 CEST
 */

#include "scheduler.hpp"
#include <string>

Scheduler::Scheduler(): server(), tempS(), humiS(), brightS(), loudS(){}

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

template <class T> void Scheduler::dataRcv(const Sensor<T> sensor){
    std::string data = sensor.sendData();
    std::string delimiter = " : ";
    size_t pos = 0;
    std::string token;
    while ((pos = data.find(delimiter)) != std::string::npos){
	token = data.substr(0,pos);
	data.erase(0, pos + delimiter.length());
    }
    if (token.compare("Temperature") == 0 ){
	server.temperature = data;
    }
    if (token.compare("Humidity") == 0 ){
	server.humidity = data;
    }
    if (token.compare("Brightness") == 0 ){
	server.brightness = data;
    }
    if (token.compare("Loudness") == 0 ){
	server.loudness = data;
    }
}
