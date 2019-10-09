#include "server.h"
#include <iostream>

using namespace std;

server::server(int donnee) {
	this->donnee = donnee;

}

server::~server(){}

server::server(const server& s) {
	this->donnee = s.donnee;

}
server& server::operator=(const server& s) {
	this->donnee = s.donnee;
	return *this;

}
void server::consoleWrite() {
	cout << "Les donnees sont "<< this->donnee << endl;


}
void server::fileWrite() {
	cout<<

}

server& server::operator << (const server& s);

