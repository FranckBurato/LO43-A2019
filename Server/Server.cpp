#include <iostream>
#include "Server.h"

Server::Server(int capteur) {
	this->capteur = capteur;
}
Server::~Server() {}

Server::Server(const Server& server) {
	this->capteur = server.capteur;
}
Server& Server::operator=(const Server& server) {
	this->capteur = server.capteur;
	return *this;	
}
void Server::operator>>() {

}



void Server::consoleWrite() {
	std::cout << this->capteur << std::endl;
}
void Server::fileWrite() {
	//Un jour il y aura quelque chose
	std::cout << "Hey c'est fileWrite ici" << std::endl;
}
