#include "server.h"
#include <iostream>


using namespace std;

Server::Server(){
	this->data = "VIDE";
}

Server::Server(const Server& server){
	this->data = server.data;
}


Server::Server(string data){
	this->data = data;
}


Server::~Server(){}



void Server::consoleWrite(const Server& display){
	cout<<display;
}

void Server::fileWrite(const Server& F){
	ofstream file("ex");
	file<<F;
	if(file){
		file<<F;
	}
	else{
		cout << "Erreur" << endl;
	}
}
