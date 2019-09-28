#include "server.hpp"
#include <iostream>
#include <string>

#include <fstream>

int main(){
	Server server2("Hello world !");
	server2.consoleWrite();
	Server srv;
	srv.consoleWrite();
	server2.fileWrite("server2");
	std::cout<<server2;
	std::cout<<server2;
	if (true) {
	    srv.fileWrite("srv");
	    
	}
	std::ofstream file;
	file.open("plop");
	file<<server2;


	return 0;
}
