#include "server.hpp"
#include <iostream>
#include <stream>

using namespace std;

Server::Server(){
	this->data = "Empty data";
}

Server::Server(string data){
	this->data = data;
}

Server::Server(const Server& server){
	this->data = server.data;
}

Server::~Server(){}

Server& Server::operator=(const Server& server){
	this->data=server.data;
	return *this;
}

ostream& operator<<(ostream& os, const Server& server){
	os<<server.data<<endl;
	return os;
}

void Server::consoleWrite(const Server& server){
	cout<<server;
}

void Server::fileWrite(const Server& server){
	ofstream file("server.log");
	file<<server;
	if(file){
		file<<server;
	}
	else{
		cout << "ERREUR: Impossible d'ouvrir le fichier" << endl;
	}
}
