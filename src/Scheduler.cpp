#include <iostream>
#include "Scheduler.h"

using namespace std;

Scheduler::Scheduler(){
	Server server;
	this->server = server;
	this->sensors.resize(0);
}

Scheduler::Scheduler(int nbrOfSensors, bool consoleActivation, bool logActivation){
	Server server(nbrOfSensors, consoleActivation, logActivation);
	Humidity humid;
	Light light;
	Sound sound;
	Temp temp;
	this->server = server;
	this->sensors.resize(nbrOfSensors);
	this->sensors.push_back(humid);
	this->sensors.push_back(light);
	this->sensors.push_back(sound);
	this->sensors.push_back(temp);
}

Scheduler::Scheduler(Server server){
	this->server = server;
	Humidity humid;
	Light light;
	Sound sound;
	Temp temp;
	this->sensors.resize(server.getNbrOfSensors());
	this->sensors.push_back(temp);
	this->sensors.push_back(light);
	this->sensors.push_back(sound);
	this->sensors.push_back(temp);
}

Scheduler::Scheduler(const Scheduler& scheduler){
	this->server = scheduler.getServer();
	this->sensors = scheduler.getSensors();
}

Scheduler::~Scheduler(){}

Scheduler& Scheduler::operator=(const Scheduler& scheduler){
	this->server = scheduler.getServer();
	this->sensors = scheduler.getSensors();
	return *this;
}

void Scheduler::run(){

}

Server Scheduler::getServer() const{
	return this->server;
}

void Scheduler::setServer(Server server){
	this->server = server;
}

vector<variant<Temp, Sound, Light, Humidity>> Scheduler::getSensors() const{
	return this->sensors;
}

void Scheduler::setSensors(vector<variant<Temp, Sound, Light, Humidity>> sensors){
	this->sensors = sensors;
}
