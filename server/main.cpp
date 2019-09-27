#include "server.hpp"
#include <iostream>
#include <string>

int main(){
	Server server2("Hello world !");
	server2.consoleWrite();
	Server srv;
	srv.consoleWrite();
	server2.fileWrite();
	std::cout<<server2;
	return 0;
}
