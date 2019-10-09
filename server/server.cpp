#include "Server.h"
#include <iostream>
#include <fstream>


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



void Server::consoleWrite(const string display){
	cout<<display;
}

void Server::fileWrite(const string F){
        ofstream file("ex.txt");
	if(file){
		file<<F;
	}
	else{
		cout << "Erreur" << endl;
	}
}

Server& Server::operator=(const Server& server){
    this->data=server.data;
    return *this;
}

ostream& operator<<(ostream& os, const Server& server){
    os<<server.data<<endl;
    return os;
}
