#include "server.hpp"
#include <iostream>
#include <fstream>
#include <string>


Server::Server(): data(){
}

Server::Server(std::string str):data(str){
}

Server::Server(const Server& server){
	this->data = server.data;
}

Server::~Server(){}

Server& Server::operator=(const Server& server){
	this->data=server.data;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Server& server) {
	os << server.data << std::endl;
	return os;
}

void Server::consoleWrite() {
	std::cout<<this->data << std::endl;
}

void Server::fileWrite() {
	std::ofstream file;
	file.open("./server.log");
	if(file){
		file<<this->data << std::endl;
		file.close();
	}
	else{
		std::cout << "ERREUR: Impossible d'ouvrir le fichier" << std::endl;
	}
}
