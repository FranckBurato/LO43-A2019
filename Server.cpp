#include "Server.h"

Server::Server(){
	
}

Server::Server(const Server &s){
	s.a = this.a;
}

Server::~Server(){
	
}

Server::Server &operator=(const Server &s){
	this.a = s.a;
}

Server::Server &operator>>(int data){
	consoleWrite(data);
}

Server::Server &operator>>(float data){
	fileWrite(data);
}

Server::consoleWrite(int data){
	cout << "Les données sont : " << data << endl;
}

Server::fileWrite(int data){
	ofstream flux("/home/users/gbenklif/LO43/logs.txt");
	
	if(flux){
		flux << data << " " << endl;
	}
	else{
		cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
	}
}