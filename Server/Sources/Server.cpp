//
// Created by Alomb on 19/10/2019.
//

#include <iostream>
#include <fstream>
#include "../Headers/Server.h"

Server::Server(): consolActivation(true), logActivation(true) {}

Server::Server(const Server& autre): consolActivation(autre.consolActivation), logActivation(autre.logActivation){}

Server::~Server(){}

Server& Server::operator=(const Server& autre) {
    this->consolActivation = autre.consolActivation;
    this->logActivation = autre.logActivation;
    return *this;
}

Server& operator<<(Server& server, const Data& in){
    if (server.logActivation){
        server.fileWrite(in);
    }
    if (server.consolActivation){
        server.consoleWrite(in);
    }
    return server;
}