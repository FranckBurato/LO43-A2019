#include <iostream>
#include "Server.hpp"

int main() {
    Server server;
    server.fileWrite("coucou");
    server.consoleWrite("coucou");
    std::cin >> server;
    return 0;
}