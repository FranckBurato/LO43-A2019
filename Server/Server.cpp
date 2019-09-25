#include <iostream>
#include "Server.h"

Server::Server() {
	this->capteur = 0;
}
Server::~Server() {}

Server::Server(Server const &server) {
	this->capteur = server.capteur;
}
Server &operator=(Server const &server) {
	
}

void Server::consoleWrite() {
	std::cout << this->capteur;
}
void Server::fileWrite() {
	//Un jour il y aura quelque chose
}
