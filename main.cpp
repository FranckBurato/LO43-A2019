#include "Server/Server.h"

int main() {
    Server server(1234);
    server.consoleWrite();
    server.fileWrite();

    Server copy = server;
    copy.consoleWrite();
    copy.fileWrite();
    return 0;
}
