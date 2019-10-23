#include "server.h"
#include <iostream>
#include<string>
using namespace std;

Server::Server(){ }

Server::Server(int nbrOfSensors, bool consolActivation, bool logActivation) {
	this->nbrOfSensors = nbrOfSensors;
	this->consolActivation = consolActivation;
	this->logActivation = logActivation;

}



Server::Server(const Server& s) {
	this->nbrOfSensors = s.nbrOfSensors;
	this->consolActivation = s.consolActivation;
	this->logActivation = s.logActivation;

}

Server::~Server(){}

Server& Server::operator=(const Server& s) {
	this->nbrOfSensors = s.nbrOfSensors;
	this->consolActivation = s.consolActivation;
	this->logActivation = s.logActivation;
	return *this;
}


/*
void operator<<(int dataSens_p, const Server& s,string type)
{
	if (s.consolActivation)
	{
		s.consoleWrite(dataSens_p,type);
	}

}



void operator<<(string dataSens_toString, const Server& s,string type)
{
	if (s.logActivation)
	{
		s.fileWrite(dataSens_toString,type);
	}


}
*/
