#include <iostream>
#include "Server.h"

Server::Server() {

	return;
}
Server::Server(int nbrOfSensors_p, bool consolActivation, bool logActivation) {
	return;
}
Server::Server(const Server& server) {
	return;
}
Server::~Server() {
	return;
}


Server& Server::operator=(const Server& server) {
	return *this;	
}
void Server::operator>>(int dataSens) {
	return;
}
void Server::operator>>(const Server & server) {
	return;
}
void Server::operator>>(std::string dataSens_toString) {
	return;
}



void Server::consoleWrite(int dataSens_p) {
	return;
}
void Server::fileWrite(int dataSens_p) {
	//Un jour il y aura quelque chose
	std::cout << "Hey c'est fileWrite ici" << std::endl;
}
