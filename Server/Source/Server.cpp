//
// Created by Alomb on 19/10/2019.
//

#include "Header/Server.h"
#include <iostream>
#include <fstream>

Server::Server(): consolActivation(), logActivation() {}

Server::Server(const Server& autre): consolActivation(autre.consolActivation), logActivation(autre.logActivation){}

Server::~Server(){}

Server& Server::operator=(const Server& autre) {
    this->consolActivation = autre.consolActivation;
    this->logActivation = autre.logActivation;
    return *this;
}

void Server::consoleWrite(const Data& input){
    std::cout << input.data << std::endl;
}

void Server::fileWrite(const Data& input){
    std::ofstream log(input.logPath.c_str(), std::ios::app);
    if(log){
        log << input.data << std::endl;
    }
    else{
        std::cout << "ERREUR: Impossible d'ouvrir le fichier" << std::endl;
    }
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
