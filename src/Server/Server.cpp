#include <iostream>
using namespace std;
#include <cstdio>

#include "Server.h"
#include "../Sensor/Humidity.h"

Server::Server() = default;
Server::Server(Server &other) { this->humidity = other.humidity; }
Server::~Server() = default;

Server& Server::operator=(const Server &other) {
    this->humidity = other.humidity;
    return *this;
}

istream& operator>>(istream& in, Server& server){
    string input;
    in >> input;
    server.fileWrite(input);
    server.consoleWrite(input);
    return in;
}

void Server::consoleWrite(const string& input) {
    cout << input << endl;
}

void Server::fileWrite(const string& input) {
    FILE *file;
    file = fopen("../logs.txt", "a");
    if (file) {
        fprintf(file, "%s\n", input.c_str());
    }
    fclose(file);
}
