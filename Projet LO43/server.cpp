#include <iostream>
#include <fstream>
#include <string>
#include "server.h"

using namespace std;
using namespace std::chrono;


Server& Server::operator=(const Server& server_p) {
	this->consolActivation = server_p.consolActivation;
	this->logActivation = server_p.logActivation;
	this->nbrOfSensors = server_p.nbrOfSensors;
	return *this;
};

void Server::operator<<(int dataSens) {
	if (this->consolActivation) {
		cout << dataSens << "\n";
	}
};

void Server::operator<<(string dataSens_toString) { 


		ofstream logFlux0;
		logFlux0.open("logs/logs.txt", ios::app);
		logFlux0 << dataSens_toString << endl;
		logFlux0.close();

};


void Server::consoleWrite(string dataSens_toString, int Sensor_type) {
	std::cout << Sensor_type << " : " << dataSens_toString + "\n" << endl;
};

void Server::fileWrite(string dataSens_toString, int Sensor_type) {
	
	switch (Sensor_type)
	{
	case 1: {
		ofstream logFlux1;
		logFlux1.open("logs/logsTemperature.txt", ios::app);
		logFlux1 << dataSens_toString << endl;
		logFlux1.close();

		break;
	}
	case 2: {
		ofstream logFlux2;
		logFlux2.open("logs/logsHumidity.txt", ios::app);
		logFlux2 << dataSens_toString << endl;
		logFlux2.close();

		break;
	}
	case 3: {
		ofstream logFlux3;
		logFlux3.open("logs/logsSound.txt", ios::app);
		logFlux3 << dataSens_toString << endl;
		logFlux3.close();

		break;
	}
	case 4: {
		ofstream logFlux4;
		logFlux4.open("logs/logsLight.txt", ios::app);
		logFlux4 << dataSens_toString << endl;
		logFlux4.close();

		break;
	}
	}

};

bool Server::get_consolActivation() {
	return this->consolActivation;
};


bool Server::get_logActivation() {
	return this->logActivation;
};