#include <iostream>
#include "Header/Server.h"

int main() {
    Server server;
    server.fileWrite("coucou");
    server.consoleWrite("coucou");

    return 0;
}