//
// Created by benjamin on 25/09/2019.
//

#include <iostream>
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
    std::cout << this->capteur << std::endl;
}

void Server::fileWrite() {
    std::cout << "Logs // : " << this->capteur << std::endl;
}
