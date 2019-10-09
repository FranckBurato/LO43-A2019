#include <iostream>
#include "Scheduler.h"

using namespace std;

Scheduler::Scheduler(){
	this->server = new Server();
	this->sensors.resize(0);
}

Scheduler::Scheduler(Server server){
	this->server = server;
	this->sensors.resize(server.getNbrOfSensors());
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

void Scheduler::run(){}

Server Scheduler::getServer(){
	return this->server;
}

void Scheduler::setServer(Server server){
	this->server = server;
}

vector<Sensor> Scheduler::getSensors(){
	return this->sensors;
}

void Scheduler::setSensors(vector<Sensor> sensors){
	this->sensors = sensors;
}
