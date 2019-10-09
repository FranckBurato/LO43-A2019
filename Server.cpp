#include "Server.h"
#include <iostream>
#include <fstream>

using namespace std;

Server::Server():filePath("null.txt"){}

Server::Server(const Server& autre):filePath(autre.filePath){}

Server::Server(string filePath):filePath(filePath){}

Server::~Server(){}

ostream& operator<<(ostream& os, const Server& s)
{
	os <<"un test"<< endl;
	return os;
}

ofstream& operator<<(ofstream& of, const Server& s)
{	
	of<<"le test"<<endl;
	return of;
}


Server& Server::operator=(const Server& autre)
{
	this->filePath=autre.filePath;
}


void Server::fileWrite ()
{
	ofstream file(this->filePath);
	if (file)
	{
		file<<*this;
		file.close();
	}
}

void Server::consoleWrite ()
{
	cout<<*this;
}
