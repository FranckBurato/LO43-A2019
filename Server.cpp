#include "Server.h"
#include <iostream>

using namespace std;

Server::Server(){}

void Server::helloWorld()
{
	cout << "Hello world" << endl;
}

ostream& Server::operator<<(ostream& os)
{
	os << "Hello World" << endl;
	return os;
}
