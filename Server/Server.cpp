#include "Server.hpp"
#include <iostream>
#include <fstream>

Server::Server(){
    this->path = "../log.txt";
}

Server::Server(std::string& path){
	this->path = path;
}

Server::Server(const Server& autre){
	this->path = autre.path;
}

Server::~Server()= default;

Server& Server::operator=(const Server& autre) {
	this->path = autre.path;
	return *this;
}

void Server::consoleWrite(const std::string& input){
	std::cout << input << std::endl;
}

void Server::fileWrite(const std::string& input){
	std::ofstream log(currentLog.c_str(), std::ios::app);
	if(log){
		log << input << std::endl;
	}
	else{
		std::cout << "ERREUR: Impossible d'ouvrir le fichier" << std::endl;
	}	
}

std::istream& operator>>(std::istream& in, Server& server){
    std::string input;
    in >> input;
    if (server.logActivation){
        server.fileWrite(input);
    }
    if (server.consolActivation){
        server.consoleWrite(input);
    }

    return in;
}




