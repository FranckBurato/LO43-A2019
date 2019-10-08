#include <iostream>
#include "server.hpp"

server::server(int capteur) {
	this->capteur = capteur;
}
server::~server() {}

server::server(const server& s) {
	this->capteur = s.capteur;
}
server& server::operator=(const server& s) {
	this->capteur = s.capteur;
	return *this;
}
server& server::operator>>(const server& s){


}

void server::fileWrite() {
	std::cout << "filewrite" << std::endl;
}
void server::consoleWrite() {
	std::cout << this->capteur << std::endl;
}
