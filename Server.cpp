#include "Server.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <iomanip>

using namespace std;

Server::Server(){}
Server::Server(const Server& autre):data(autre.data){}
Server::~Server(){}

/*Server& operator<<(const Server& s)
{
	os << this->data << endl;
	return os;
}

Server& Server::operator=(const Server& autre)
{
	this->data = autre.data;
}*/


void Server::fileWrite (const string filePath)
{
	ofstream file(filePath, ofstream::app);
	std::time_t t = std::time(nullptr);
	file << put_time(localtime(&t), "%c %Z") << this->data << endl;
	file.close();
}

void Server::consoleWrite ()
{
	std::time_t t = std::time(nullptr);
	cout << put_time(localtime(&t), "%c %Z") << this->data << endl;
}

void Server::dataRcv(string data)
{
	this->data = data;
}
