#include <iostream>
#include <string>
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

void Server::operator=(const Server& server){
	this->nbrOfSensors = server.getNbrOfSensors();
	this->consoleActivation = server.getConsoleActivation();
	this->logActivation = server.getLogActivation();	
}

void Server::operator<<(int data){

}

void Server::operator<<(string dataToString){

}

void Server::dataReceive(int data){

}

void Server::consoleWrite(int data){

}

void Server::fileWrite(int data){

}



