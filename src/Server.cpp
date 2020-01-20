#include <iostream>
#include <string>
#include <fstream>
#include "Server.h"

using namespace std;

Server::Server(){
	this->nbrOfSensors = 0;
	this->consoleActivation = false;
	this->logActivation = true;
}

Server::Server(int nbrOfSensors, bool consoleActivation, bool logActivation){
	this->nbrOfSensors = nbrOfSensors;
	this->consoleActivation = consoleActivation;
	this->logActivation = logActivation;
}

Server::Server(const Server &server){
	nbrOfSensors = server.getNbrOfSensors();
	consoleActivation = server.getConsoleActivation();
	logActivation = server.getLogActivation();
}

Server::~Server(){}

Server& Server::operator=(const Server &server){
	nbrOfSensors = server.getNbrOfSensors();
	consoleActivation = server.getConsoleActivation();
	logActivation = server.getLogActivation();
	return *this;	
}

ostream& operator<<(ostream &out,string const data){
	cout << data << endl;
	return out;	
}

ofstream& operator<<(ofstream &log, string data){
	log << data + "\n\n";
	return log;
}

void Server::dataReceive(string data, std::string sensorName){
	if(this->getConsoleActivation() == true){
		this->consoleWrite(data);
	}else if(this->getLogActivation() == true){
		this->fileWrite(sensorName, data);
	}else{
		cout << "Impossible de récupérer les données, le server n'a pas de méthode d'enregistrement paramétrée !" << endl;		
	}
}

void Server::consoleWrite(string data){
	cout << data << endl;
}

void Server::fileWrite(string sensorName,string data){
	ofstream log;
	log.open("logs/" + sensorName + ".txt");
	log << data + "\n\n";
}

int Server:: getNbrOfSensors() const{
	return this->nbrOfSensors;
}

void Server::setNbrOfSensors(int nbrOfSensors){
	this->nbrOfSensors = nbrOfSensors;
}

bool Server::getConsoleActivation() const{
	return this->consoleActivation;
}

void Server::setConsoleActivation(bool consoleActivation){
	this->consoleActivation = consoleActivation;
}

bool Server::getLogActivation() const{
	return this->logActivation;
}

void Server::setLogActivation(bool logActivation){
	this->logActivation = logActivation;
}
