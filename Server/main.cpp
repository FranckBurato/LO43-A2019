#include "Server.h"
int main() {
	Server serv(2554);
	serv.consoleWrite();
	serv.fileWrite();

	Server serv2(serv);
	serv2.consoleWrite();
	serv2.fileWrite();
}
