#include <iostream>
#include <chrono>
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
	int i=1, j=0;

	chrono::time_point<chrono::steady_clock> end;
	bool running = true;	
	
	end = chrono::steady_clock::now() + chrono::seconds(time);
	while(running){
		if(chrono::steady_clock::now() >= end){
			cout << "Getting data from sensors..." << endl;		
			//Just for the example, normally I would have to get the real generated data
			this->server.dataReceive("-Hygrometer- Humidity level (%) : 80", "Hygrometer");

			/*for(i=0;i<sensors.size();++i){
				server.dataReceive(get<j>(sensors[i]).sendData(),get<j>(sensors[i]).getSensorName);
			}*/

			if(i < count){
				++i;
				j = 0;
				end = chrono::steady_clock::now() + chrono::seconds(time);
			}else{
				cout << "Ending acquisition" << endl;
				running = false;
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
