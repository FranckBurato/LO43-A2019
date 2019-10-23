#include <iostream>
#include <string>
#include "server.h"
#include <fstream>

using namespace std;

Server::Server() {
	this->nbrOfSensors = 0;
	this->consolActivation = false;
	this->logActivation = true;
}

Server::~Server() {}

Server::Server(const Server& server_p) {
	this->nbrOfSensors = 0;
	this->consolActivation = server_p.consolActivation;
	this->logActivation = server_p.logActivation;
}

Server::Server(int nbrOfSensors_p, bool consolActivation, bool logActivation) {
    this->nbrOfSensors = nbrOfSensors;
    this->consolActivation = consolActivation;
    this->logActivation = logActivation;
}

Server& Server::operator=(const Server& server_p) {
	this->nbrOfSensors = server_p.nbrOfSensors;
	this->consolActivation = server_p.consolActivation;
	this->logActivation = server_p.logActivation;
	return *this;
}

void Server::operator<<(const int dataSens) {
    consoleWrite(dataSens)
    return;
}

//void Server::operator<<(const string dataSens_toString){
//    cout << "seneor name :" <<dataSens_toString;
//}

void Server::dataRcv(int dataSens){
    if(this->consolActivation== true){
        this->consoleWrite(dataSens);
    }
    if(this->logActivation== true){
        this->fileWrite(dataSens);
    }
}

void Server::consoleWrite(float dataSens) {
	cout << "La Valeur est :" <<dataSens<<".";
    return;
}

void Server::fileWrite(string T,int dataSens_p) {
    ofstream out("./log",ios::app);
    if(out.fail()){
        cout<<"error"<<endl;
    }
    out<<T<<":"<<dataSens_p<<endl;
    out.close();
    return;
}

void Server::fileWrite(string T,float dataSens_p){
    ofstream out("./log",ios::app);
    if(out.fail()){
        cout<<"error"<<endl;
    }
    out<<T<<":"<<dataSens_p<<endl;
    out.close();
    return;
}

void Server::fileWrite(string T,bool dataSens_p) {
    ofstream out("./log",ios::app);
    if(out.fail()){
        cout<<"error"<<endl;
    }
    out<<T<<":"<<dataSens_p<<endl;
    out.close();
    return;
}
