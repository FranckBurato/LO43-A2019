#include <iostream>
#include <chrono>
#include <ctime>
#include "Scheduler.h"

using namespace std;

Scheduler::Scheduler(){
	Server server;
	this->server = server;
}

Scheduler::Scheduler(bool consoleActivation, bool logActivation){
	Server server(4, consoleActivation, logActivation);
	this->server = server;
	this->sensors.push_back(*(new Temp()));
	this->sensors.push_back(*(new Sound()));
	this->sensors.push_back(*(new Light()));
	this->sensors.push_back(*(new Humidity()));	
}

Scheduler::Scheduler(Server server){
	this->server = server;
	this->sensors.push_back(*(new Temp()));
	this->sensors.push_back(*(new Sound()));
	this->sensors.push_back(*(new Light()));
	this->sensors.push_back(*(new Humidity()));
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
	int time = 2; //time in seconds when the scheduler will get the data from the sensors
	int count = 3; //number of repeat, only for simulation
	int i=1;

	chrono::time_point<chrono::steady_clock> end; //We use the chrono namespace to save time
	bool running = true; //Var to controle the infinite loop
	
	end = chrono::steady_clock::now() + chrono::seconds(time); //We set the first boundarie for the first period of the scheduler
	while(running){
		if(chrono::steady_clock::now() >= end){
			cout << "Getting data from sensors..." << endl;		
			
			//Getting the data for each sensors
			for(Sensor s : sensors){
				server.dataReceive("[" + ctime(time(0)) + "] " + s.sendData(),s.getSensorName);
			}
			
			//Checking if we can continue the simulation
			if(i < count){
				++i;
				end = chrono::steady_clock::now() + chrono::seconds(time); //Setting up the next boundarie
			}else{
				cout << "Ending acquisition" << endl;
				running = false; //We end the simulation by quitting the infinite loop
			}
		}
	}
}

Server Scheduler::getServer() const{
	return this->server;
}

void Scheduler::setServer(Server server){
	this->server = server;
}

vector<Sensor> Scheduler::getSensors() const{
	return this->sensors;
}

void Scheduler::setSensors(vector<Sensor> sensors){
	this->sensors = sensors;
}
