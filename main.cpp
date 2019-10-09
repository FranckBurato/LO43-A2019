#include <iostream>
#include "server.cpp"

using namespace std;

int main(){
	server *monobjet = new server();
	(*monobjet).consoleWrite();

	return 0;
}
