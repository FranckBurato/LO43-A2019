#include "Server.h"
#include <iostream>

using namespace std;

Server::Server(){}

Server::Server(const Server& autre){}

Server::~Server(){}

ostream& operator<<(ostream& os, const Server& s)
{
	os << "test" << endl;
	return os;
}

	
