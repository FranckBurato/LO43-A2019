#include "Server.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <iomanip>

using namespace std;

Server::Server(){}
Server::Server(const Server& autre):data(autre.data){}
Server::~Server(){}

ostream& operator<<(ostream& os, const Server& s)
{
	os << s.data << endl;
	return os;
}

void operator<<(const string path,const Server& s)
{
	ofstream file(path, ofstream::app);
	file << s.data << endl;
	file.close();
}

Server& Server::operator=(const Server& autre)
{
	this->data = autre.data;
}


void Server::fileWrite (const string filePath)
{
	ofstream file(filePath, ofstream::app);
	std::time_t t = std::time(nullptr);
	file << put_time(localtime(&t), "%c %Z") << this->data << endl;
	file.close();
	//"test.txt"<<*this;
}

void Server::consoleWrite ()
{
	std::time_t t = std::time(nullptr);
	cout << put_time(localtime(&t), "%c %Z") << *this;
}

void Server::dataRcv(string data)
{
	this->data = data;
}
