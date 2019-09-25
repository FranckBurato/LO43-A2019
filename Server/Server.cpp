#include <iostream>
#include <cstdio>
using namespace std;

#include "Server.h"

Server::Server() { this->capteur = 0; }
Server::Server(int capteur) { this->capteur = capteur; }
Server::Server(Server &other) { this->capteur = other.capteur; }
Server::~Server() {}

Server& Server::operator=(const Server &other) {
    this->capteur = other.capteur;
    return *this;
}

void Server::consoleWrite() {
    cout << this->capteur << endl;
}

void Server::fileWrite() {
    FILE *file;
    file = fopen("../logs.txt", "a");
    if (file) {
        fprintf(file, "%i\n", this->capteur);
    }
    fclose(file);
}
