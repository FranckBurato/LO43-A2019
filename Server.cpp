#include <iostream>
#include <string>
#include <fstream>
#include "Server.h"

using namespace std;

Server::Server(){
	this->nbrOfCaptors = 0;
	this->consoleActivation = false;
	this->logActivation = true;
}

Server::Server(int nbrOfSensors, bool consoleActivation, bool logActivation){
	this->nbrOfSensors = nbrOfSensors;
	this->consoleActivation = consoleActivation;
	this->logActivation = logActivation;
}

Server::Server(const Server& server){
	this->nbrOfSensors = server.getNbrOfSensors();
	this->consoleActivation = server.getConsoleActivation();
	this->logActivation = server.getLogActivation();
}

Server::~Server(){}

Server& Server::operator=(const Server& server){
	this->nbrOfSensors = server.getNbrOfSensors();
	this->consoleActivation = server.getConsoleActivation();
	this->logActivation = server.getLogActivation();
	return *this;	
}

void Server::operator<<(Data data){
	cout << "Donnée de capteurs : " + data.getSensorData();
}

void Server::operator<<(string dataToString, string sensorName){
	ofstream log;
	log.open("logs/" + sensorName + ".txt");
	log << dataToString + "\n\n";
}

void Server::dataReceive(Data data){
	if(this->getConsoleActivation() == true){
		this->consoleWrite(data);
	}else if(this->getLogActivation() == true){
		this->fileWrite(data);
	}else{
		cout << "Impossible de récupérer les données, le server n'a pas de méthode d'enregistrement paramétrée !" << endl;		
}

void Server::consoleWrite(Data data){
	cout<<"Donnée de capteur : " + data.getSensorData();
}

void Server::fileWrite(Data data){
	ofstream log;
	log.open("logs/" + data.getSensorName() + ".txt");
	log << data.getSensorData() + "\n\n";
}

int Server:: getNbrOfSensors(){
	return this->nbrOfSensors;
}

void Server::setNbrOfSensors(int nbrOfSensors){
	this->nbrOfSensors = nbrOfSensors
}

bool Server::getConsoleActivation(){
	return this->consoleActivation;
}

void Server::setConsoleActivation(bool consoleActivation){
	this->consoleActivation = consoleActivation;
}

bool Server::getLogActivation(){
	return this->logActivation;
}

void Server::setLogActivation(bool logActivation){
	this->logActivation = logActivation;
}
