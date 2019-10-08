#include <iostream>
using namespace std;
#include "Server/Server.h"

int main() {
    Server server;
    server.fileWrite("coucou");
    server.consoleWrite("coucou");
    cin >> server;
    return 0;
}
