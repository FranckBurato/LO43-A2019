#include "Server.h"
#include <string>
#include <fstream>

Server::Server()
{
	this->nbOfSensors = 0;
	this->consolActivation = true;
	this->logActivation = true;
}

Server::Server(Server server_p)
{
	this->nbOfSensors = server_p.nbOfSensors;
	this->consolActivation = true;
	this->logActivation = true;
};

Server::Server(int nbOfSensors_p, bool consolActivation, bool logActivation)
{
	this->nbOfSensors = nbOfSensors_p;
	this->consolActivation = consolActivation;
	this->logActivation = logActivation;
};

Server::~Server(){};


Server& Server::operator=(Server server_p)const
{
	if (this!=server_p)
	{
		this->nbOfSensors = server_p.nbOfSensors;
		this->consolActivation = server_p.consolActivation;
		this->logActivation = server_p.logActivation;
	}
	return *this;
};

ostream& operator>>(ostream& os, const int dataSens)
{
	if (consolActivation)
	{
		os >> dataSens;
		return os;
	}
};

ostream& operator>>(ostream& os, const string dataSens_toString)
{
	
}
//write
void Server::fileWrite(const string ){
	

};
//read
void Server::consolWrite(int dataSens_p){
	ofstream outfile("" , ios::out);


};

