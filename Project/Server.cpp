#include "Server.h"
#include <string>
Server::Server()
{
	this->nbOfSensors = 0;
	this->consolActivation = true;
	this->logActivation = true;
}
Server::Server(const Server& server_p)
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
Server& Server::operator=(const Server& server_p)
{
	this->nbOfSensors = server_p.nbOfSensors;
	this->consolActivation = server_p.consolActivation;
	this->logActivation = server_p.logActivation;
	return *this;
};
string Server::nowtime()
{
	time_t t = time(0);
	char tmp[64];
	strftime(tmp, sizeof(tmp), "%Y/%m/%d %X %A  %z", localtime(&t));
	return tmp;
};