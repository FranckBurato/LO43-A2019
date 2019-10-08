#include "Server.h"
#include <iostream>
#include <fstream>

using namespace std;

Server::Server(){}

Server::Server(const Server& autre):filePath(autre.filePath){}

Server::Server(string filePath):filePath(filePath){}

Server::~Server(){}

ostream& operator<<(ostream& os, const Server& s)
{
	const char* test = "un test";
	ofstream file(s.filePath);
	file<<test<<endl;
	file.close();

	os <<test<< endl;
	return os;
}

Server& Server::operator=(const Server& autre)
{
	this->filePath=autre.filePath;
}


void Server::fileWrite ()
{
	ofstream file(this->filePath);
	file<<"test"<<endl;
	file.close();
}

void Server::consoleWrite ()
{
	cout<<*this;
}
