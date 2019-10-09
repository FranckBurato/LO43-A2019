#include <iostream>
using namespace std;
#include <cstdio>

#include "Server.h"

Server::Server() :
        humidity(),
        sound()
{}
Server::Server(Server &other) {
    this->humidity = other.humidity;
    this->sound = other.sound;
}
Server::~Server() = default;

Server& Server::operator=(const Server &other) {
    this->humidity = other.humidity;
    this->sound = other.sound;
    return *this;
}

istream& operator>>(istream& in, Server& server){
    server.fileWrite();
    server.consoleWrite();
    return in;
}

void Server::consoleWrite() {
    cout << this->humidity.toString() << endl <<
            this->sound.toString() << endl;
}

void Server::fileWrite() {
    FILE *file;
    file = fopen("../log_humidity.txt", "a");
    if (file) {
        fprintf(file, "%s\n", this->humidity.toString().c_str());
    } fclose(file);

    file = fopen("../log_sound.txt", "a");
    if (file) {
        fprintf(file, "%s\n", this->sound.toString().c_str());
    } fclose(file);
}
