#include "Server.hpp"
#include <iostream>
#include <fstream>

Server::Server(){}

Server::Server(const Server&){}

Server::~Server(){}

Server& Server::operator=(const Server& autre){
	this->path = autre.path;
	return autre;
}

void Server::consoleWrite(std::string input){
	std::cout << input;
}

void Server::fileWrite(std::string input){
	ofstream log(path.c_str());
	if(log){
		log << input;
	}
	else{
		std::cout << "ERREUR: Impossible d'ouvrir le fichier";
	}	
}

void Server::setPath(std::string path){
	this->path = path;
}
