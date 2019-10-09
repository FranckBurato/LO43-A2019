#include <iostream>
using namespace std;

#include "Server.h"

Server::Server() {
    this->consoleActivation = true;
    this->logActivation = true;
}

Server::Server(Server &other) {
    this->consoleActivation = other.consoleActivation;
    this->logActivation = other.logActivation;
}

Server::Server(bool console, bool log) {
    this->consoleActivation = console;
    this->logActivation = log;
}

Server::~Server() = default;

Server& Server::operator=(const Server &other) {
    this->consoleActivation = other.consoleActivation;
    this->logActivation = other.logActivation;
    return *this;
}

void Server::operator<<(const int& dataSens) {
    consoleWrite(dataSens);
}

void operator<<(const string& dataSens_toString, int flag) {
    Server::fileWrite(dataSens_toString, flag);
}

void Server::consoleWrite(const int& dataSens) {
    cout << dataSens << endl;
}

void Server::fileWrite(const string& dataSens, int flag) {
    string path = "../log_";
    switch (flag) {
        case 0: path += "humidity"; break;
        case 1: path += "sound"; break;
        case 2: path += "temperature"; break;
        case 3: path += "light"; break;
        default: break;
    } path += ".txt";

    FILE *file;
    file = fopen(path.c_str(), "a");
    if (file) {
        fprintf(file, "%s\n", dataSens.c_str());
    } fclose(file);
}
