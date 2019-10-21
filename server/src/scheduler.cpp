/**
 * @author      : pinembour (pinembour@$HOSTNAME)
 * @file        : Scheduler
 * @created     : Wednesday Oct 09, 2019 14:21:51 CEST
 */

#include "Scheduler.hpp"
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

Scheduler::operator=(const Scheduler& scheduler){
    this->server=scheduler.server;
    this->tempS=scheduler.tempS;
    this->humiS=scheduler.humiS;
    this->brightS=scheduler.brightS;
    this->loudS=scheduler.loudS;
    return *this;
}

Scheduler::dataRcv(const Sensor<T> sensor){
    std::string data = sensor.sendData();
    std::string delimiter = " : ";
    size_t pos = 0;
    std::string token;
    while ((pos = data.find(delimiter)) != std::string::npos){
	token = s.substr(0,pos);
	data.erase(0, pos + delimiter.length());
    }
    if (strcomp(token,"Temperature") == 0 ){
	server.temperature = data;
    }
    if (strcomp(token,"Humidity") == 0 ){
	server.humidity = data;
    }
    if (strcomp(token,"Brightness") == 0 ){
	server.brightness = data;
    }
    if (strcomp(token,"Loudness") == 0 ){
	server.loudness = data;
    }
}
